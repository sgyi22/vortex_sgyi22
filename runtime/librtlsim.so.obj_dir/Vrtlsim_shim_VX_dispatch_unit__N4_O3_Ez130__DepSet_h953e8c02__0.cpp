// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130.h"
#include "Vrtlsim_shim__Syms.h"

extern const VlWide<15>/*479:0*/ Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0;

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__0__Vfuncout;
    __Vfunc_wis_to_wid__0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__0__wis;
    __Vfunc_wis_to_wid__0__wis = 0;
    // Body
    __Vfunc_wis_to_wid__0__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__0__Vfuncout = __Vfunc_wis_to_wid__0__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__0__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__1__Vfuncout;
    __Vfunc_wis_to_wid__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__1__wis;
    __Vfunc_wis_to_wid__1__wis = 0;
    // Body
    __Vfunc_wis_to_wid__1__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__1__Vfuncout = __Vfunc_wis_to_wid__1__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__1__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__2__Vfuncout;
    __Vfunc_wis_to_wid__2__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__2__wis;
    __Vfunc_wis_to_wid__2__wis = 0;
    // Body
    __Vfunc_wis_to_wid__2__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__2__Vfuncout = __Vfunc_wis_to_wid__2__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__2__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__3__Vfuncout;
    __Vfunc_wis_to_wid__3__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__3__wis;
    __Vfunc_wis_to_wid__3__wis = 0;
    // Body
    __Vfunc_wis_to_wid__3__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__3__Vfuncout = __Vfunc_wis_to_wid__3__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__3__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__4__Vfuncout;
    __Vfunc_wis_to_wid__4__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__4__wis;
    __Vfunc_wis_to_wid__4__wis = 0;
    // Body
    __Vfunc_wis_to_wid__4__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__4__Vfuncout = __Vfunc_wis_to_wid__4__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__4__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__5__Vfuncout;
    __Vfunc_wis_to_wid__5__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__5__wis;
    __Vfunc_wis_to_wid__5__wis = 0;
    // Body
    __Vfunc_wis_to_wid__5__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__5__Vfuncout = __Vfunc_wis_to_wid__5__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__5__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__6__Vfuncout;
    __Vfunc_wis_to_wid__6__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__6__wis;
    __Vfunc_wis_to_wid__6__wis = 0;
    // Body
    __Vfunc_wis_to_wid__6__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__6__Vfuncout = __Vfunc_wis_to_wid__6__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__6__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__1__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__g_blocks__BRA__0__KET____DOT__block_wid;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid = 0;
    CData/*0:0*/ __Vlvbound_hfbb1a722__0;
    __Vlvbound_hfbb1a722__0 = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__7__Vfuncout;
    __Vfunc_wis_to_wid__7__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__7__wis;
    __Vfunc_wis_to_wid__7__wis = 0;
    // Body
    __Vfunc_wis_to_wid__7__wis = (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                                        >> 0x15U));
    __Vfunc_wis_to_wid__7__Vfuncout = __Vfunc_wis_to_wid__7__wis;
    __PVT__g_blocks__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__7__Vfuncout;
    if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
        } else {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU];
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU];
        }
    }
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
        = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU];
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
        = (3U | (0xfffffff8U & vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]));
    if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
         & (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[6U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[7U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[8U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[9U] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xaU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xbU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xcU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xdU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU];
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0xeU] 
            = vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                         | (~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             | (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0U] 
        = (3U | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
                 << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[1U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[2U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[1U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[3U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[2U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[4U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[3U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[5U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[4U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[6U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[5U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[7U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[6U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[6U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[8U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[7U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[7U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[9U] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[8U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[8U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xaU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[9U] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[9U]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xbU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xaU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xaU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xcU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xbU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xbU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xdU] 
        = (((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xcU] 
             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xcU]) 
            >> 0x1dU) | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                          & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                         << 3U));
    vlSelf->__Vcellinp__g_blocks__BRA__0__KET____DOT__buf_out__data_in[0xeU] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU] 
                          << 3U)) | (((IData)(__PVT__g_blocks__BRA__0__KET____DOT__block_wid) 
                                      << 0x18U) | (
                                                   ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xdU] 
                                                     & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xdU]) 
                                                    >> 0x1dU) 
                                                   | ((Vrtlsim_shim__ConstPool__CONST_h9eccd8e6_0[0xeU] 
                                                       & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__2__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0xeU]) 
                                                      << 3U))));
    __Vlvbound_hfbb1a722__0 = vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__PVT__ready_in = __Vlvbound_hfbb1a722__0;
}

VL_INLINE_OPT void Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1(Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_ready) 
                    >> (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select))));
}
