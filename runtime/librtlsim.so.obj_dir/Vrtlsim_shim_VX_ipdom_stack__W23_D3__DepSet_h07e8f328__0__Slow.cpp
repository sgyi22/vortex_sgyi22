// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_ipdom_stack__W23_D3.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W23_D3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_RAND_RESET_W(71, __Vtemp_2);
    vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U] 
        = __Vtemp_2[0U];
    vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U] 
        = __Vtemp_2[1U];
    vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U] 
        = (0x7fU & __Vtemp_2[2U]);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W23_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
}

VL_ATTR_COLD void Vrtlsim_shim_VX_ipdom_stack__W23_D3___ctor_var_reset(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->q0 = VL_RAND_RESET_Q(35);
    vlSelf->q1 = VL_RAND_RESET_Q(35);
    vlSelf->d = VL_RAND_RESET_Q(35);
    vlSelf->d_set = VL_RAND_RESET_I(1);
    vlSelf->q_ptr = VL_RAND_RESET_I(2);
    vlSelf->push = VL_RAND_RESET_I(1);
    vlSelf->pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rd_ptr_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__ipdom_store__waddr = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__ipdom_store__write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(71, vlSelf->__PVT__ipdom_store__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(71, vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r);
    VL_RAND_RESET_W(71, vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0);
}
