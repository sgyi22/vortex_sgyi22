// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_IPDOM_STACK__W23_D3_H_
#define VERILATED_VRTLSIM_SHIM_VX_IPDOM_STACK__W23_D3_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_ipdom_stack__W23_D3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(d_set,0,0);
    VL_OUT8(q_ptr,1,0);
    VL_IN8(push,0,0);
    VL_IN8(pop,0,0);
    VL_OUT8(__PVT__empty,0,0);
    VL_OUT8(__PVT__full,0,0);
    CData/*1:0*/ __PVT__rd_ptr;
    CData/*1:0*/ __PVT__rd_ptr_n;
    CData/*1:0*/ __PVT__wr_ptr;
    CData/*0:0*/ __PVT__empty_r;
    CData/*0:0*/ __PVT__full_r;
    CData/*1:0*/ __Vcellinp__ipdom_store__waddr;
    CData/*0:0*/ __Vcellinp__ipdom_store__write;
    VlWide<3>/*70:0*/ ipdom_store__DOT____Vxrand_h6dcb2513__1;
    VlWide<3>/*70:0*/ __PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r;
    VlWide<3>/*70:0*/ ipdom_store__DOT____Vlvbound_hb2714e06__0;
    VL_IN64(q0,34,0);
    VL_IN64(q1,34,0);
    VL_OUT64(d,34,0);
    VlUnpacked<VlWide<3>/*70:0*/, 3> __PVT__ipdom_store__DOT__ram;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_ipdom_stack__W23_D3(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_ipdom_stack__W23_D3();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_ipdom_stack__W23_D3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
