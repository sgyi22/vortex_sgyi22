// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_gather_unit__N4_O3.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 2U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 2U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 2U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 1U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Body
    vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 2U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0(Vrtlsim_shim_VX_gather_unit__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_gather_unit__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit__0\n"); );
    // Init
    CData/*0:0*/ __Vlvbound_h0c1568ef__0;
    __Vlvbound_h0c1568ef__0 = 0;
    VlWide<6>/*175:0*/ __Vlvbound_hf14f5370__0;
    VL_ZERO_W(176, __Vlvbound_hf14f5370__0);
    // Body
    if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__commit_out_data[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__commit_out_data[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__commit_out_data[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__commit_out_data[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__commit_out_data[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__commit_out_data[5U];
        } else {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (((IData)(vlSelf->__PVT__commit_out_valid) & (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__PVT__commit_out_data[0U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__PVT__commit_out_data[1U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__PVT__commit_out_data[2U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__PVT__commit_out_data[3U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__PVT__commit_out_data[4U];
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__PVT__commit_out_data[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelf->__PVT__commit_out_valid) 
                         | (~ (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelf->__PVT__commit_out_valid) 
             | (IData)(vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    __Vlvbound_hf14f5370__0[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    __Vlvbound_hf14f5370__0[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    __Vlvbound_hf14f5370__0[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    __Vlvbound_hf14f5370__0[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    __Vlvbound_hf14f5370__0[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    __Vlvbound_hf14f5370__0[5U] = (0xffffU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]);
    vlSelf->__PVT__commit_out_data[0U] = __Vlvbound_hf14f5370__0[0U];
    vlSelf->__PVT__commit_out_data[1U] = __Vlvbound_hf14f5370__0[1U];
    vlSelf->__PVT__commit_out_data[2U] = __Vlvbound_hf14f5370__0[2U];
    vlSelf->__PVT__commit_out_data[3U] = __Vlvbound_hf14f5370__0[3U];
    vlSelf->__PVT__commit_out_data[4U] = __Vlvbound_hf14f5370__0[4U];
    vlSelf->__PVT__commit_out_data[5U] = __Vlvbound_hf14f5370__0[5U];
    __Vlvbound_h0c1568ef__0 = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    vlSelf->__PVT__commit_out_valid = __Vlvbound_h0c1568ef__0;
}
