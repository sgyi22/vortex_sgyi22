#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <CL/opencl.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <chrono>
#include <vector>
#include <fstream>
#include <iostream>
#include "common.h"

#define FLOAT_ULP 20
#define KERNEL_NAME "linear_forward"

#define CL_CHECK(_expr)                                                \
   do {                                                                \
     cl_int _err = _expr;                                              \
     if (_err == CL_SUCCESS)                                           \
       break;                                                          \
     printf("OpenCL Error: '%s' returned %d!\n", #_expr, (int)_err);   \
	 cleanup();			                                                     \
     exit(-1);                                                         \
   } while (0)

#define CL_CHECK2(_expr)                                               \
   ({                                                                  \
     cl_int _err = CL_INVALID_VALUE;                                   \
     decltype(_expr) _ret = _expr;                                     \
     if (_err != CL_SUCCESS) {                                         \
       printf("OpenCL Error: '%s' returned %d!\n", #_expr, (int)_err); \
	   cleanup();			                                                   \
       exit(-1);                                                       \
     }                                                                 \
     _ret;                                                             \
   })

static int read_kernel_file(const char* filename, uint8_t** data, size_t* size) {
  if (nullptr == filename || nullptr == data || 0 == size)
    return -1;

  FILE* fp = fopen(filename, "r");
  if (NULL == fp) {
    fprintf(stderr, "Failed to load kernel.");
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

template <typename Type>
class Comparator {};

template <>
class Comparator<float> {
public:
  static const char* type_str() {
    return "float";
  }
  static float generate() {
    return static_cast<float>(rand()) / RAND_MAX;
  }
  static bool compare(float a, float b, int index, int errors) {
    union fi_t { float f; int32_t i; };
    fi_t fa, fb;
    fa.f = a;
    fb.f = b;
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

// CPU reference implementation
static void linear_forward_cpu(TYPE *output, const TYPE* input, const TYPE *weight, const TYPE *bias, 
                              int B, int T, int in_features, int out_features, int use_bias) {
  for (int b = 0; b < B; ++b) {
    for (int t = 0; t < T; ++t) {
      for (int o = 0; o < out_features; ++o) {
        TYPE sum = 0.0f;
        for (int i = 0; i < in_features; ++i) {
          TYPE iv = input[(b * T + t) * in_features + i];
          TYPE wv = weight[o * in_features + i];
          sum += iv * wv;
        }
        if (use_bias && bias != nullptr) sum += bias[o];
        output[(b * T + t) * out_features + o] = sum;
      }
    }
  }
}

cl_device_id device_id = NULL;
cl_context context = NULL;
cl_command_queue commandQueue = NULL;
cl_program program = NULL;
cl_kernel kernel = NULL;
cl_mem input_memobj = NULL;
cl_mem weight_memobj = NULL;
cl_mem bias_memobj = NULL;
cl_mem output_memobj = NULL;
uint8_t *kernel_bin = NULL;

static void cleanup() {
  if (commandQueue) clReleaseCommandQueue(commandQueue);
  if (kernel) clReleaseKernel(kernel);
  if (program) clReleaseProgram(program);
  if (input_memobj) clReleaseMemObject(input_memobj);
  if (weight_memobj) clReleaseMemObject(weight_memobj);
  if (bias_memobj) clReleaseMemObject(bias_memobj);
  if (output_memobj) clReleaseMemObject(output_memobj);
  if (context) clReleaseContext(context);
  if (device_id) clReleaseDevice(device_id);
  if (kernel_bin) free(kernel_bin);
}

static void show_usage() {
  printf("Usage: linear [-b batch_size] [-t seq_len] [-i in_features] [-o out_features] [-u use_bias] [-h: help]\n");
}

int main (int argc, char **argv) {
  // Default parameters for qkv_proj
  int B = 1;           // batch size
  int T = 10;          // sequence length
  int in_features = 3072;   // input features
  int out_features = 5120;  // output features
  int use_bias = 0;    // use bias (qkv_proj has no bias)
  
  // Parse command line arguments
  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "-b") == 0 && i + 1 < argc) {
      B = atoi(argv[++i]);
    } else if (strcmp(argv[i], "-t") == 0 && i + 1 < argc) {
      T = atoi(argv[++i]);
    } else if (strcmp(argv[i], "-i") == 0 && i + 1 < argc) {
      in_features = atoi(argv[++i]);
    } else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
      out_features = atoi(argv[++i]);
    } else if (strcmp(argv[i], "-u") == 0 && i + 1 < argc) {
      use_bias = atoi(argv[++i]);
    } else if (strcmp(argv[i], "-h") == 0) {
      show_usage();
      exit(0);
    }
  }

  printf("Linear Forward Parameters:\n");
  printf("  Batch size: %d\n", B);
  printf("  Sequence length: %d\n", T);
  printf("  Input features: %d\n", in_features);
  printf("  Output features: %d\n", out_features);
  printf("  Use bias: %s\n", use_bias ? "yes" : "no");

  cl_platform_id platform_id;
  size_t kernel_size;

  // Getting platform and device information
  CL_CHECK(clGetPlatformIDs(1, &platform_id, NULL));
  CL_CHECK(clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_DEFAULT, 1, &device_id, NULL));

  printf("Create context\n");
  context = CL_CHECK2(clCreateContext(NULL, 1, &device_id, NULL, NULL, &_err));

  char device_string[1024];
  clGetDeviceInfo(device_id, CL_DEVICE_NAME, sizeof(device_string), &device_string, NULL);
  printf("Using device: %s\n", device_string);

  printf("Allocate device buffers\n");
  size_t input_size = B * T * in_features * sizeof(TYPE);
  size_t weight_size = out_features * in_features * sizeof(TYPE);
  size_t bias_size = out_features * sizeof(TYPE);
  size_t output_size = B * T * out_features * sizeof(TYPE);
  
  input_memobj = CL_CHECK2(clCreateBuffer(context, CL_MEM_READ_ONLY, input_size, NULL, &_err));
  weight_memobj = CL_CHECK2(clCreateBuffer(context, CL_MEM_READ_ONLY, weight_size, NULL, &_err));
  bias_memobj = CL_CHECK2(clCreateBuffer(context, CL_MEM_READ_ONLY, bias_size, NULL, &_err));
  output_memobj = CL_CHECK2(clCreateBuffer(context, CL_MEM_WRITE_ONLY, output_size, NULL, &_err));

  printf("Create program from kernel source\n");
  if (0 != read_kernel_file("kernel.cl", &kernel_bin, &kernel_size))
    return -1;
  program = CL_CHECK2(clCreateProgramWithSource(
    context, 1, (const char**)&kernel_bin, &kernel_size, &_err));
  if (program == NULL) {
    cleanup();
    return -1;
  }

  // Build program
  CL_CHECK(clBuildProgram(program, 1, &device_id, NULL, NULL, NULL));

  // Create kernel
  kernel = CL_CHECK2(clCreateKernel(program, KERNEL_NAME, &_err));

  // Set global and local work sizes
  size_t global_size[2] = {out_features, B * T};
  
  // Calculate appropriate local work group size
  // For Vortex GPU, we need to ensure the global size is divisible by local size
  size_t local_size[2];
  if (out_features >= 32 && (B * T) >= 32) {
    local_size[0] = 32;  // out_features dimension
    local_size[1] = 32;  // batch * T dimension
  } else if (out_features >= 16 && (B * T) >= 16) {
    local_size[0] = 16;
    local_size[1] = 16;
  } else {
    local_size[0] = 1;
    local_size[1] = 1;
  }
  
  // Ensure global size is divisible by local size
  global_size[0] = ((out_features + local_size[0] - 1) / local_size[0]) * local_size[0];
  global_size[1] = ((B * T + local_size[1] - 1) / local_size[1]) * local_size[1];

  // Allocate host memory
  std::vector<TYPE> h_input(B * T * in_features);
  std::vector<TYPE> h_weight(out_features * in_features);
  std::vector<TYPE> h_bias(out_features);
  std::vector<TYPE> h_output(B * T * out_features);

  // Generate random data
  srand(42); // Fixed seed for reproducibility
  for (size_t i = 0; i < h_input.size(); ++i) {
    h_input[i] = Comparator<TYPE>::generate();
  }
  for (size_t i = 0; i < h_weight.size(); ++i) {
    h_weight[i] = Comparator<TYPE>::generate();
  }
  for (size_t i = 0; i < h_bias.size(); ++i) {
    h_bias[i] = Comparator<TYPE>::generate();
  }

  // Creating command queue
  commandQueue = CL_CHECK2(clCreateCommandQueue(context, device_id, 0, &_err));

  printf("Upload source buffers\n");
  CL_CHECK(clEnqueueWriteBuffer(commandQueue, input_memobj, CL_TRUE, 0, input_size, h_input.data(), 0, NULL, NULL));
  CL_CHECK(clEnqueueWriteBuffer(commandQueue, weight_memobj, CL_TRUE, 0, weight_size, h_weight.data(), 0, NULL, NULL));
  CL_CHECK(clEnqueueWriteBuffer(commandQueue, bias_memobj, CL_TRUE, 0, bias_size, h_bias.data(), 0, NULL, NULL));

  // Set kernel arguments
  CL_CHECK(clSetKernelArg(kernel, 0, sizeof(cl_mem), (void *)&input_memobj));
  CL_CHECK(clSetKernelArg(kernel, 1, sizeof(cl_mem), (void *)&weight_memobj));
  CL_CHECK(clSetKernelArg(kernel, 2, sizeof(cl_mem), (void *)&bias_memobj));
  CL_CHECK(clSetKernelArg(kernel, 3, sizeof(cl_mem), (void *)&output_memobj));
  CL_CHECK(clSetKernelArg(kernel, 4, sizeof(int), &B));
  CL_CHECK(clSetKernelArg(kernel, 5, sizeof(int), &T));
  CL_CHECK(clSetKernelArg(kernel, 6, sizeof(int), &in_features));
  CL_CHECK(clSetKernelArg(kernel, 7, sizeof(int), &out_features));
  CL_CHECK(clSetKernelArg(kernel, 8, sizeof(int), &use_bias));

  printf("Execute the kernel\n");
  auto time_start = std::chrono::high_resolution_clock::now();
  CL_CHECK(clEnqueueNDRangeKernel(commandQueue, kernel, 2, NULL, global_size, local_size, 0, NULL, NULL));
  CL_CHECK(clFinish(commandQueue));
  auto time_end = std::chrono::high_resolution_clock::now();
  double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(time_end - time_start).count();
  printf("Elapsed time: %lg ms\n", elapsed);

  printf("Download destination buffer\n");
  CL_CHECK(clEnqueueReadBuffer(commandQueue, output_memobj, CL_TRUE, 0, output_size, h_output.data(), 0, NULL, NULL));

  printf("Verify result\n");
  std::vector<TYPE> h_ref(B * T * out_features);
  linear_forward_cpu(h_ref.data(), h_input.data(), h_weight.data(), 
                    use_bias ? h_bias.data() : nullptr, 
                    B, T, in_features, out_features, use_bias);
  
  int errors = 0;
  for (size_t i = 0; i < h_output.size(); ++i) {
    if (!Comparator<TYPE>::compare(h_output[i], h_ref[i], i, errors)) {
      ++errors;
    }
  }
  if (errors != 0) {
    printf("FAILED! - %d errors\n", errors);
  } else {
    printf("PASSED!\n");
  }

  // Clean up
  cleanup();

  return errors;
}


