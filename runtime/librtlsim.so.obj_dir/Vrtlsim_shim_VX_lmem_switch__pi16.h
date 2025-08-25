// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_LMEM_SWITCH__PI16_H_
#define VERILATED_VRTLSIM_SHIM_VX_LMEM_SWITCH__PI16_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_lmem_switch__pi16 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ __PVT__is_addr_local_mask;
    CData/*0:0*/ __PVT__is_addr_global;
    CData/*0:0*/ __PVT__is_addr_local;
    CData/*0:0*/ __Vcellinp__req_local_buf__valid_in;
    CData/*1:0*/ __Vcellout__rsp_arb__ready_in;
    CData/*1:0*/ __Vcellinp__rsp_arb__valid_in;
    CData/*0:0*/ __PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r;
    CData/*0:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r;
    VlWide<9>/*282:0*/ __Vcellinp__req_local_buf__data_in;
    VlWide<9>/*283:0*/ req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in;
    VlWide<9>/*282:0*/ __PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d;
    VlWide<5>/*133:0*/ rsp_arb__DOT____Vxrand_he19c0b17__0;
    VlWide<5>/*135:0*/ rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in;
    VlWide<5>/*134:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d;
    VlUnpacked<CData/*0:0*/, 2> __PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready;
    VlUnpacked<CData/*0:0*/, 2> __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_lmem_switch__pi16(Vrtlsim_shim__Syms* symsp, const char* v__name);
    ~Vrtlsim_shim_VX_lmem_switch__pi16();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_lmem_switch__pi16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
