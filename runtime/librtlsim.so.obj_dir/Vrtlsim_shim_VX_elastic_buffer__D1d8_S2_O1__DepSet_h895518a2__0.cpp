// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                      << 3U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                 << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)))) 
                    >> (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                              >> 0x10U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                      << 3U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                 << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)))) 
                    >> (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                              >> 0x10U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                      << 3U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                 << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)))) 
                    >> (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                              >> 0x10U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__out_buf__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg2__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__out_buf__1\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                      << 3U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                 << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)))) 
                    >> (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                              >> 0x10U)))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer__1\n"); );
    // Body
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0(Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                    Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__3__KET____DOT__buffer__0\n"); );
    // Body
    if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    if (((IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in))) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU];
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
                         | (~ (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__valid_in) 
             | (IData)(vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
}
