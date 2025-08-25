// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_DISPATCH_UNIT__N4_O3_EZ130_H_
#define VERILATED_VRTLSIM_SHIM_VX_DISPATCH_UNIT__N4_O3_EZ130_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __PVT__ready_in;
    CData/*0:0*/ __PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    CData/*0:0*/ __PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    CData/*0:0*/ __PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    VlWide<15>/*474:0*/ __PVT__g_blocks__BRA__0__KET____DOT__execute_data_w;
    VlWide<15>/*474:0*/ __Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in;
    VlWide<15>/*474:0*/ __PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    VlWide<15>/*474:0*/ __PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
