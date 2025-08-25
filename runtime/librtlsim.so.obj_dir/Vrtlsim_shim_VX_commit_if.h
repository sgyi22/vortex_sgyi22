// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_COMMIT_IF_H_
#define VERILATED_VRTLSIM_SHIM_VX_COMMIT_IF_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_commit_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<6>/*175:0*/ data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_commit_if(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_commit_if();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_commit_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_commit_if* obj);

#endif  // guard
