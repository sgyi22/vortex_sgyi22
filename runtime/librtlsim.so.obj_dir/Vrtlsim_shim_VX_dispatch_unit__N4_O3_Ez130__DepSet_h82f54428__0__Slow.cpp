// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___ctor_var_reset(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ready_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(475, vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w);
    VL_RAND_RESET_W(475, vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in);
    VL_RAND_RESET_W(475, vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r);
    VL_RAND_RESET_W(475, vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out = VL_RAND_RESET_I(1);
}
