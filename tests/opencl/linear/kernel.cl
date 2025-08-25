#include "common.h"

__kernel void linear_forward(__global TYPE *input,
                            __global TYPE *weight,
                            __global TYPE *bias,
                            __global TYPE *output,
                            const int B,
                            const int T,
                            const int in_features,
                            const int out_features,
                            const int use_bias)
{
    int globalRow = get_global_id(1);  // batch * T + t
    int globalCol = get_global_id(0);  // out_feature index
    
    if (globalRow >= B * T || globalCol >= out_features) {
        return;
    }
    
    int b = globalRow / T;
    int t = globalRow % T;
    
    TYPE sum = 0.0f;
    
    // Compute dot product: sum_i input[b,t,i] * weight[o,i]
    for (int i = 0; i < in_features; ++i) {
        TYPE input_val = input[(b * T + t) * in_features + i];
        TYPE weight_val = weight[globalCol * in_features + i];
        sum += input_val * weight_val;
    }
    
    // Add bias if enabled
    if (use_bias) {
        sum += bias[globalCol];
    }
    
    // Store result
    output[(b * T + t) * out_features + globalCol] = sum;
}


