// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__N4_D4_T2_H_
#define VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__N4_D4_T2_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<9>/*282:0*/ req_data;
    VlWide<5>/*133:0*/ rsp_data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2* obj);

#endif  // guard
