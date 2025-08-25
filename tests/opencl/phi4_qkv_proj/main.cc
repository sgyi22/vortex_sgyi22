#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <CL/opencl.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <chrono>
#include <vector>
#include <stdint.h>
#include <math.h>
#include "common.h"

#define FLOAT_ULP 6
#define KERNEL_NAME "qkv_proj"

#define CL_CHECK(_expr)                                                \
   do {                                                                \
     cl_int _err = _expr;                                              \
     if (_err == CL_SUCCESS)                                           \
       break;                                                          \
     printf("OpenCL Error: '%s' returned %d!\n", #_expr, (int)_err);   \
     cleanup();                                                        \
     exit(-1);                                                         \
   } while (0)

#define CL_CHECK2(_expr)                                               \
   ({                                                                  \
     cl_int _err = CL_INVALID_VALUE;                                   \
     decltype(_expr) _ret = _expr;                                     \
     if (_err != CL_SUCCESS) {                                         \
       printf("OpenCL Error: '%s' returned %d!\n", #_expr, (int)_err); \
       cleanup();                                                      \
       exit(-1);                                                       \
     }                                                                 \
     _ret;                                                             \
   })

static int read_kernel_file(const char* filename, uint8_t** data, size_t* size) {
  if (nullptr == filename || nullptr == data || 0 == size)
    return -1;

  FILE* fp = fopen(filename, "r");
  if (NULL == fp) {
    fprintf(stderr, "Failed to load kernel: %s\n", filename);
    return -1;
  }

  fseek(fp , 0 , SEEK_END);
  long fsize = ftell(fp);
  rewind(fp);

  *data = (uint8_t*)malloc(fsize);
  *size = fread(*data, 1, fsize, fp);
  fclose(fp);
  return 0;
}

// ---------- New: binary I/O for matrices (float32, column-major) ----------
static void read_bin_f32(const char* path, std::vector<TYPE>& buf, size_t expected_elems) {
  FILE* f = fopen(path, "rb");
  if (!f) { fprintf(stderr, "Cannot open %s\n", path); exit(1); }
  fseek(f, 0, SEEK_END);
  long bytes = ftell(f);
  rewind(f);
  if ((size_t)bytes != expected_elems * sizeof(TYPE)) {
    fprintf(stderr, "Size mismatch for %s: expected %zu bytes, found %ld bytes\n",
            path, expected_elems * sizeof(TYPE), bytes);
    fclose(f);
    exit(1);
  }
  buf.resize(expected_elems);
  size_t rd = fread(buf.data(), sizeof(TYPE), expected_elems, f);
  fclose(f);
  if (rd != expected_elems) {
    fprintf(stderr, "Read error on %s\n", path);
    exit(1);
  }
}

static void write_bin_f32(const char* path, const std::vector<TYPE>& buf) {
  FILE* f = fopen(path, "wb");
  if (!f) { fprintf(stderr, "Cannot open %s for write\n", path); exit(1); }
  size_t wr = fwrite(buf.data(), sizeof(TYPE), buf.size(), f);
  fclose(f);
  if (wr != buf.size()) {
    fprintf(stderr, "Write error on %s\n", path);
    exit(1);
  }
}
// -------------------------------------------------------------------------

template <typename Type>
class Comparator {};
template <>
class Comparator<float> {
public:
  static const char* type_str() { return "float"; }
  static int generate() { return static_cast<float>(rand()) / RAND_MAX; }
  static bool compare(float a, float b, int index, int errors) {
    union fi_t { float f; int32_t i; };
    fi_t fa, fb;
    fa.f = a; fb.f = b;
    auto d = std::abs(fa.i - fb.i);
    if (d > FLOAT_ULP) {
      if (errors < 100) {
        printf("*** error: [%d] expected=%f, actual=%f\n", index, a, b);
      }
      return false;
    }
    return true;
  }
};

// CPU reference: row-major A(M×K), B(K×N), C(M×N)
static void sgemm_cpu(TYPE *C, const TYPE* A, const TYPE *B, int M, int N, int K) {
  for (int m = 0; m < M; ++m) {
    for (int n = 0; n < N; ++n) {
      TYPE acc = 0;
      for (int k = 0; k < K; ++k) {
        // row-major indexing
        acc += A[m*K + k] * B[k*N + n];
      }
      C[m*N + n] = acc;
    }
  }
}


cl_device_id device_id = NULL;
cl_context context = NULL;
cl_command_queue commandQueue = NULL;
cl_program program = NULL;
cl_kernel kernel = NULL;
cl_mem a_memobj = NULL;
cl_mem b_memobj = NULL;
cl_mem c_memobj = NULL;
uint8_t *kernel_bin = NULL;

static void cleanup() {
  if (commandQueue) clReleaseCommandQueue(commandQueue);
  if (kernel) clReleaseKernel(kernel);
  if (program) clReleaseProgram(program);
  if (a_memobj) clReleaseMemObject(a_memobj);
  if (b_memobj) clReleaseMemObject(b_memobj);
  if (c_memobj) clReleaseMemObject(c_memobj);
  if (context) clReleaseContext(context);
  if (device_id) clReleaseDevice(device_id);
  if (kernel_bin) free(kernel_bin);
}

// Default dims (override via CLI)
uint32_t M = 32;        // rows of A, rows of C (pad of 17 → 32 OK)
uint32_t N = 5120;      // cols of B, cols of C
uint32_t K = 3072;      // cols of A, rows of B
// tiling
uint32_t tile_size = 16; // tiling size
uint32_t WPT = 4;        // work-per-thread along N

// filenames per request
const char* FILE_A = "layer_00_input_to_qkv.bin";
const char* FILE_B = "layer_00_qkv_proj_weight.bin";
const char* FILE_C = "qkv_proj_result.bin";

static void show_usage() {
  printf("Usage: [-m M] [-n N] [-k K] [-t tile_size] [-h]\n");
  printf("Reads A from %s (M×K), B from %s (K×N), writes C to %s (M×N)\n",
         FILE_A, FILE_B, FILE_C);
  printf("Default: M=%u, N=%u, K=%u, tile_size=%u, WPT=%u\n", M, N, K, tile_size, WPT);
}

static void parse_args(int argc, char **argv) {
  int c;
  while ((c = getopt(argc, argv, "m:n:k:t:h")) != -1) {
    switch (c) {
    case 'm': M = atoi(optarg); break;
    case 'n': N = atoi(optarg); break;
    case 'k': K = atoi(optarg); break;
    case 't': tile_size = atoi(optarg); break;
    case 'h': show_usage(); exit(0); break;
    default: show_usage(); exit(-1);
    }
  }
}

int main (int argc, char **argv) {
  parse_args(argc, argv);

  printf("SGEMM: A[%u, %u] × B[%u, %u] = C[%u, %u], tile=%ux%u, WPT=%u\n",
         M, K, K, N, M, N, tile_size, tile_size, WPT);

  if (M % tile_size != 0 || (N % (tile_size)) != 0 || K % tile_size != 0) {
    printf("Warning: dimensions not divisible by tile=%u (this may be OK if kernel handles edges)\n", tile_size);
  }

  cl_platform_id platform_id;
  size_t kernel_size;

  // Platform/device
  CL_CHECK(clGetPlatformIDs(1, &platform_id, NULL));
  CL_CHECK(clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_CPU, 1, &device_id, NULL));

  printf("Create context\n");
  cl_int _err;
  context = CL_CHECK2(clCreateContext(NULL, 1, &device_id, NULL, NULL,  &_err));

  char device_string[1024];
  clGetDeviceInfo(device_id, CL_DEVICE_NAME, sizeof(device_string), &device_string, NULL);
  printf("Using device: %s\n", device_string);

  // Host buffers
  std::vector<TYPE> h_a;         // A: row-major (M*K)
  std::vector<TYPE> h_b;         // B: row-major (K*N) after transpose from (N,K)
  std::vector<TYPE> h_c(M * N);

  printf("Load A from %s (M×K, row-major)\n", FILE_A);
  read_bin_f32(FILE_A, h_a, (size_t)M * K);

  // PyTorch saved qkv_proj.weight as (N,K) row-major. Transpose to (K,N).
  printf("Load B from %s (saved as N×K, will transpose to K×N)\n", FILE_B);
  std::vector<TYPE> h_wNK;  // (N,K)
  read_bin_f32(FILE_B, h_wNK, (size_t)N * K);

  h_b.resize((size_t)K * N);
  for (uint32_t n = 0; n < N; ++n) {
    for (uint32_t k = 0; k < K; ++k) {
      // source (N,K) row-major: idx = n*K + k
      // dest   (K,N) row-major: idx = k*N + n
      h_b[k*N + n] = h_wNK[n*K + k];
    }
  }

  // Device buffers
  printf("Allocate device buffers\n");
  size_t a_bytes = (size_t)M * K * sizeof(TYPE);
  size_t b_bytes = (size_t)K * N * sizeof(TYPE);
  size_t c_bytes = (size_t)M * N * sizeof(TYPE);

  a_memobj = CL_CHECK2(clCreateBuffer(context, CL_MEM_READ_ONLY  | CL_MEM_COPY_HOST_PTR, a_bytes, h_a.data(), &_err));
  b_memobj = CL_CHECK2(clCreateBuffer(context, CL_MEM_READ_ONLY  | CL_MEM_COPY_HOST_PTR, b_bytes, h_b.data(), &_err));
  c_memobj = CL_CHECK2(clCreateBuffer(context, CL_MEM_WRITE_ONLY,                      c_bytes, NULL,      &_err));

  // Program / kernel
  printf("Create program from kernel source\n");
  if (0 != read_kernel_file("kernel.cl", &kernel_bin, &kernel_size))
    return -1;
  program = CL_CHECK2(clCreateProgramWithSource(context, 1, (const char**)&kernel_bin, &kernel_size, &_err));
  CL_CHECK(clBuildProgram(program, 1, &device_id, NULL, NULL, NULL));

  kernel = CL_CHECK2(clCreateKernel(program, KERNEL_NAME, &_err));

  // Kernel args
  CL_CHECK(clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&a_memobj));
  CL_CHECK(clSetKernelArg(kernel, 1, sizeof(cl_mem), (void *)&b_memobj));
  CL_CHECK(clSetKernelArg(kernel, 2, sizeof(cl_mem), (void *)&c_memobj));
  CL_CHECK(clSetKernelArg(kernel, 3, sizeof(uint32_t), &M));
  CL_CHECK(clSetKernelArg(kernel, 4, sizeof(uint32_t), &N));
  CL_CHECK(clSetKernelArg(kernel, 5, sizeof(uint32_t), &K));

  // Queue
  commandQueue = CL_CHECK2(clCreateCommandQueue(context, device_id, 0, &_err));

  // Global/local sizes (assumes your kernel maps N/WPT in y-dimension)
  size_t global_size[2] = { M, N / WPT };
  size_t local_size[2]  = { tile_size, tile_size / WPT };

  // Launch
  printf("Execute the kernel\n");
  auto time_start = std::chrono::high_resolution_clock::now();
  CL_CHECK(clEnqueueNDRangeKernel(commandQueue, kernel, 2, NULL, global_size, local_size, 0, NULL, NULL));
  CL_CHECK(clFinish(commandQueue));
  auto time_end = std::chrono::high_resolution_clock::now();
  double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_start).count();
  printf("Elapsed time: %lg ms\n", elapsed);

  // Read back C and save
  printf("Download C and write %s\n", FILE_C);
  CL_CHECK(clEnqueueReadBuffer(commandQueue, c_memobj, CL_TRUE, 0, c_bytes, h_c.data(), 0, NULL, NULL));
  write_bin_f32(FILE_C, h_c);

  // 1) Load golden
  const char* FILE_GOLDEN = "layer_00_qkv_result.bin";
  std::vector<TYPE> h_gold;
  printf("Load golden C from %s\n", FILE_GOLDEN);
  read_bin_f32(FILE_GOLDEN, h_gold, (size_t)M * N);

  // 2) Compare with tolerances
  auto nearly_equal = [](float a, float b) {
    const float atol = 1e-5f;     // absolute tolerance
    const float rtol = 1e-4f;     // relative tolerance
    float diff = fabsf(a - b);
    return diff <= atol + rtol * fmaxf(fabsf(a), fabsf(b));
  };

  int errors = 0;
  int max_report = 100;  // limit prints
  for (size_t i = 0; i < (size_t)M * N; ++i) {
    if (!nearly_equal(h_c[i], h_gold[i])) {
      if (errors < max_report) {
        int m = (int)(i / N);  // row-major
        int n = (int)(i % N);
        printf("*** mismatch at (m=%d, n=%d) [idx=%zu]: gpu=%g, gold=%g\n",
               m, n, i, h_c[i], h_gold[i]);
      }
      ++errors;
    }
  }
  

  if (errors) {
    printf("FAILED vs golden! mismatches=%d (of %u)\n", errors, M*N);
  } else {
    printf("PASSED vs golden!\n");
  }


  // // (Optional) Verify vs CPU
  // if (M <= 1024 && N <= 8192) {
  //   printf("Verify result on CPU (may take time for large sizes)...\n");
  //   std::vector<TYPE> h_ref(M * N);
  //   sgemm_cpu(h_ref.data(), h_a.data(), h_b.data(), (int)M, (int)N, (int)K);
  //   int errors = 0;
  //   for (size_t i = 0; i < (size_t)M * N; ++i) {
  //     if (!Comparator<TYPE>::compare(h_ref[i], h_c[i], (int)i, errors)) ++errors;
  //   }
  //   if (errors) printf("FAILED! - %d errors\n", errors);
  //   else        printf("PASSED!\n");
  // }

  cleanup();
  return 0;
}
