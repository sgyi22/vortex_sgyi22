// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_lmem_switch__pi16.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_RAND_RESET_W(134, __Vtemp_2);
    vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[0U] 
        = __Vtemp_2[0U];
    vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[1U] 
        = __Vtemp_2[1U];
    vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[2U] 
        = __Vtemp_2[2U];
    vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[3U] 
        = __Vtemp_2[3U];
    vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[4U] 
        = (0x3fU & __Vtemp_2[4U]);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___ctor_var_reset(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_addr_local_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__is_addr_global = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_addr_local = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(283, vlSelf->__Vcellinp__req_local_buf__data_in);
    vlSelf->__Vcellinp__req_local_buf__valid_in = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__rsp_arb__ready_in = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__rsp_arb__valid_in = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(284, vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in);
    VL_RAND_RESET_W(283, vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d);
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(134, vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(136, vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in);
    VL_RAND_RESET_W(135, vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r = VL_RAND_RESET_I(1);
}
