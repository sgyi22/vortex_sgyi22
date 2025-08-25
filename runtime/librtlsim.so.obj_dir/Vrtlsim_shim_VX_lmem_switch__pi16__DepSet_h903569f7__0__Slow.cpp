// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_lmem_switch__pi16.h"
#include "Vrtlsim_shim__Syms.h"

extern const VlWide<9>/*287:0*/ Vrtlsim_shim__ConstPool__CONST_h4d051b67_0;

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out)));
    vlSelf->__PVT__is_addr_local_mask = ((8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | (8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xaU)));
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    __Vtemp_3[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[0U];
    __Vtemp_3[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[1U];
    __Vtemp_3[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[2U];
    __Vtemp_3[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[3U];
    __Vtemp_3[4U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 6U) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[4U]);
    __Vtemp_3[5U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 6U));
    __Vtemp_3[6U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                   << 6U));
    __Vtemp_3[7U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                   << 6U));
    __Vtemp_3[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                   << 6U));
    if ((0x10bU >= (0x1ffU & ((IData)(0x86U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_6[0U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(1U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[(0xfU & (((IData)(0x86U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                               >> 5U))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[1U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(2U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(1U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[2U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(3U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(2U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[3U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(4U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(3U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[4U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(4U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_6[0U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[0U];
        __Vtemp_6[1U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[1U];
        __Vtemp_6[2U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[2U];
        __Vtemp_6[3U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[3U];
        __Vtemp_6[4U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[4U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = __Vtemp_6[0U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_6[1U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_6[2U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_6[3U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 7U) | ((0x40U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                << 6U)) | (0x3fU & 
                                           __Vtemp_6[4U])));
    vlSelf->__PVT__is_addr_global = (0U != (0xfU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               << 9U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                                 >> 0x17U)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                             << 9U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    vlSelf->__Vcellinp__req_local_buf__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[8U] 
        = ((0xff800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                           & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                              << 0x17U))) | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x1bU) | ((0x7800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                        & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                           << 0x17U))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                   >> 1U)));
    vlSelf->__PVT__is_addr_local_mask = ((8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | (8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xaU)));
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    __Vtemp_3[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[0U];
    __Vtemp_3[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[1U];
    __Vtemp_3[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[2U];
    __Vtemp_3[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[3U];
    __Vtemp_3[4U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 6U) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[4U]);
    __Vtemp_3[5U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 6U));
    __Vtemp_3[6U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                   << 6U));
    __Vtemp_3[7U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                   << 6U));
    __Vtemp_3[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                   << 6U));
    if ((0x10bU >= (0x1ffU & ((IData)(0x86U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_6[0U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(1U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[(0xfU & (((IData)(0x86U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                               >> 5U))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[1U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(2U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(1U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[2U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(3U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(2U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[3U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(4U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(3U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[4U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(4U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_6[0U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[0U];
        __Vtemp_6[1U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[1U];
        __Vtemp_6[2U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[2U];
        __Vtemp_6[3U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[3U];
        __Vtemp_6[4U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[4U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = __Vtemp_6[0U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_6[1U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_6[2U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_6[3U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 7U) | ((0x40U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                << 6U)) | (0x3fU & 
                                           __Vtemp_6[4U])));
    vlSelf->__PVT__is_addr_global = (0U != (0xfU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               << 9U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                                 >> 0x17U)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                             << 9U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    vlSelf->__Vcellinp__req_local_buf__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[8U] 
        = ((0xff800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                           & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                              << 0x17U))) | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x1bU) | ((0x7800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                        & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                           << 0x17U))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                   >> 2U)));
    vlSelf->__PVT__is_addr_local_mask = ((8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | (8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xaU)));
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    __Vtemp_3[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[0U];
    __Vtemp_3[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[1U];
    __Vtemp_3[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[2U];
    __Vtemp_3[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[3U];
    __Vtemp_3[4U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 6U) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[4U]);
    __Vtemp_3[5U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 6U));
    __Vtemp_3[6U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                   << 6U));
    __Vtemp_3[7U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                   << 6U));
    __Vtemp_3[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                   << 6U));
    if ((0x10bU >= (0x1ffU & ((IData)(0x86U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_6[0U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(1U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[(0xfU & (((IData)(0x86U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                               >> 5U))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[1U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(2U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(1U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[2U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(3U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(2U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[3U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(4U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(3U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[4U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(4U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_6[0U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[0U];
        __Vtemp_6[1U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[1U];
        __Vtemp_6[2U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[2U];
        __Vtemp_6[3U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[3U];
        __Vtemp_6[4U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[4U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = __Vtemp_6[0U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_6[1U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_6[2U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_6[3U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 7U) | ((0x40U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                << 6U)) | (0x3fU & 
                                           __Vtemp_6[4U])));
    vlSelf->__PVT__is_addr_global = (0U != (0xfU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               << 9U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                                 >> 0x17U)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                             << 9U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    vlSelf->__Vcellinp__req_local_buf__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[8U] 
        = ((0xff800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                           & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                              << 0x17U))) | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x1bU) | ((0x7800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                        & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                           << 0x17U))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U])));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0(Vrtlsim_shim_VX_lmem_switch__pi16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lmem_switch__pi16___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__0\n"); );
    // Init
    CData/*0:0*/ __Vcellinp__req_global_buf__valid_in;
    __Vcellinp__req_global_buf__valid_in = 0;
    VlWide<9>/*287:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    vlSelf->__Vcellinp__rsp_arb__valid_in = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__rsp_valid_out) 
                                                   >> 3U)));
    vlSelf->__PVT__is_addr_local_mask = ((8U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | ((4U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 8U)) 
                                            | ((2U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                   >> 6U)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__is_addr_local_mask = ((7U & (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                         | (8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U] 
                                                  >> 0xaU)));
    vlSelf->__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready[1U] 
        = vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__in_req_ready_n;
    __Vtemp_3[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[0U];
    __Vtemp_3[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[1U];
    __Vtemp_3[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[2U];
    __Vtemp_3[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[3U];
    __Vtemp_3[4U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      << 6U) | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.rsp_data[4U]);
    __Vtemp_3[5U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                                   << 6U));
    __Vtemp_3[6U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                                   << 6U));
    __Vtemp_3[7U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                                   << 6U));
    __Vtemp_3[8U] = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                        ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U]
                        : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U]) 
                      >> 0x1aU) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                                     ? vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U]
                                     : vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U]) 
                                   << 6U));
    if ((0x10bU >= (0x1ffU & ((IData)(0x86U) * (1U 
                                                & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))) {
        __Vtemp_6[0U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(1U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[(0xfU & (((IData)(0x86U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                               >> 5U))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[1U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(2U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(1U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[2U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(3U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(2U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[3U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(4U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(3U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
        __Vtemp_6[4U] = (((0U == (0x1fU & ((IData)(0x86U) 
                                           * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))))))
                           ? 0U : (__Vtemp_3[((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0x86U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                    >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))))) 
                         | (__Vtemp_3[((IData)(4U) 
                                       + (0xfU & (((IData)(0x86U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x86U) 
                                         * (1U & (~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)))))));
    } else {
        __Vtemp_6[0U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[0U];
        __Vtemp_6[1U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[1U];
        __Vtemp_6[2U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[2U];
        __Vtemp_6[3U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[3U];
        __Vtemp_6[4U] = vlSelf->rsp_arb__DOT____Vxrand_he19c0b17__0[4U];
    }
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = __Vtemp_6[0U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = __Vtemp_6[1U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = __Vtemp_6[2U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = __Vtemp_6[3U];
    vlSelf->rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in))) 
            << 7U) | ((0x40U & ((~ (IData)(vlSelf->__Vcellinp__rsp_arb__valid_in)) 
                                << 6U)) | (0x3fU & 
                                           __Vtemp_6[4U])));
    vlSelf->__PVT__is_addr_global = (0U != (0xfU & 
                                            (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               << 9U) 
                                              | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                                 >> 0x17U)) 
                                             & (~ (IData)(vlSelf->__PVT__is_addr_local_mask)))));
    vlSelf->__PVT__is_addr_local = (0U != (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                             << 9U) 
                                            | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                               >> 0x17U)) 
                                           & (IData)(vlSelf->__PVT__is_addr_local_mask)));
    vlSelf->__Vcellinp__req_local_buf__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->__Vcellinp__req_local_buf__data_in[8U] 
        = ((0xff800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                           & ((IData)(vlSelf->__PVT__is_addr_local_mask) 
                              << 0x17U))) | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U]));
    __Vcellinp__req_global_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (IData)(vlSelf->__PVT__is_addr_global));
    vlSelf->__Vcellinp__req_local_buf__valid_in = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   & (IData)(vlSelf->__PVT__is_addr_local));
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[0U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[0U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[1U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[1U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[2U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[2U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[3U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[3U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[4U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[4U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[5U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[5U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[6U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[6U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[7U] 
           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[7U]);
    vlSelf->req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = (((IData)(__Vcellinp__req_global_buf__valid_in) 
            << 0x1bU) | ((0x7800000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U] 
                                        & ((~ (IData)(vlSelf->__PVT__is_addr_local_mask)) 
                                           << 0x17U))) 
                         | (Vrtlsim_shim__ConstPool__CONST_h4d051b67_0[8U] 
                            & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_data[8U])));
}
