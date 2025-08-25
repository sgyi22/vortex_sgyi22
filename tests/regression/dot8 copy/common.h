#ifndef _COMMON_H_
#define _COMMON_H_

#ifndef TYPE
#define TYPE int8_t
#endif

#ifndef OUT_TYPE
#define OUT_TYPE int32_t
#endif

typedef struct {
  uint32_t grid_dim[2];
  uint32_t size;
  uint64_t A_addr;
  uint64_t B_addr;
  uint64_t C_addr;
} kernel_arg_t;

#endif
