#include <vx_spawn.h>
#include "common.h"

void kernel_body(kernel_arg_t* __UNIFORM__ arg) {
	auto A = reinterpret_cast<TYPE*>(arg->A_addr);
	auto B = reinterpret_cast<TYPE*>(arg->B_addr);
	auto C = reinterpret_cast<OUT_TYPE*>(arg->C_addr);
    auto size = arg->size;

    int col = blockIdx.x;
    int row = blockIdx.y;

    OUT_TYPE sum(0);
    for (int e = 0; e < size; e += 4) {
        // Pack 4 int8_t elements from A and B into 32-bit integers
        // Matrix A: 4 consecutive int8_t stores contiguously in the same row
        uint32_t packedA = *((uint32_t*)(A + row * size + e));
        // Matrix B: 4 consecutive int8_t elements from B into 32-bit integer
        // Matrix B is accessed by column: B[e * size + col] through B[(e+3) * size + col]
        uint32_t packedB = (uint8_t)B[e * size + col]
                         | ((uint8_t)B[(e+1) * size + col] << 8) // obtain value at position and then shift by 8 bits (shift to match 4x8bits into 32bits)
                         | ((uint8_t)B[(e+2) * size + col] << 16) // | or operations combines the 4 values into a 32-bit integer
                         | ((uint8_t)B[(e+3) * size + col] << 24);
        // Accumulate the dot product result
        sum += vx_dot8(packedA, packedB);
    }

    C[row * size + col] = sum;
}

int main() {
	kernel_arg_t* arg = (kernel_arg_t*)csr_read(VX_CSR_MSCRATCH);
	return vx_spawn_threads(2, arg->grid_dim, nullptr, (vx_kernel_func_cb)kernel_body, arg);
}
