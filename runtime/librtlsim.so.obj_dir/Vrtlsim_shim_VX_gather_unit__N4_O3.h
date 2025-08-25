// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_GATHER_UNIT__N4_O3_H_
#define VERILATED_VRTLSIM_SHIM_VX_GATHER_UNIT__N4_O3_H_  // guard

#include "verilated.h"
class Vrtlsim_shim_VX_commit_if;


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_gather_unit__N4_O3 final : public VerilatedModule {
  public:
    // CELLS
    Vrtlsim_shim_VX_commit_if* __PVT__g_out_bufs__BRA__0__KET____DOT__commit_tmp_if;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __PVT__commit_out_valid;
    CData/*0:0*/ __PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    CData/*0:0*/ __PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    CData/*0:0*/ __PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    VlWide<6>/*175:0*/ __PVT__commit_out_data;
    VlWide<6>/*175:0*/ __PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    VlWide<6>/*175:0*/ __PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_gather_unit__N4_O3(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_gather_unit__N4_O3();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_gather_unit__N4_O3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
