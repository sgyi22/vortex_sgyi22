// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_lsu_adapter__pi18.h"
#include "Vrtlsim_shim__Syms.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0\n"); );
    // Init
    VlWide<9>/*279:0*/ __PVT__req_data_out;
    VL_ZERO_W(280, __PVT__req_data_out);
    CData/*7:0*/ __PVT__req_tag_out;
    __PVT__req_tag_out = 0;
    // Body
    vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n 
        = ((~ (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                           << 2U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      << 1U) | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))));
    __PVT__req_data_out[0U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                             >> 2U));
    __PVT__req_data_out[1U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             >> 2U));
    __PVT__req_data_out[2U] = ((0xffffffc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 4U)) 
                               | (0x3fU & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                           >> 2U)));
    __PVT__req_data_out[3U] = (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                          << 4U)) | 
                                (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                 >> 0x1cU)) | (0xffffffc0U 
                                               & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                  << 4U)));
    __PVT__req_data_out[4U] = ((0xfffff000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0xaU)) 
                               | (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x1cU)) | 
                                  (0xfc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U))));
    __PVT__req_data_out[5U] = (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                           << 0xaU)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x16U)) | (0xfffff000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0xaU)));
    __PVT__req_data_out[6U] = ((0xfffc0000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0x10U)) 
                               | (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                              << 0xaU)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x16U)) | 
                                  (0x3f000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                               << 0xaU))));
    __PVT__req_data_out[7U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x10U)) | (0xfffc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0x10U)));
    __PVT__req_data_out[8U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                   >> 0x10U)) | (0xfc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                    << 0x10U)));
    __PVT__req_tag_out = ((0xc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                    << 6U)) | ((0x30U 
                                                & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                   << 4U)) 
                                               | ((0xcU 
                                                   & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                      << 2U)) 
                                                  | (3U 
                                                     & vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[0U] 
        = (((__PVT__req_data_out[7U] << 0x10U) | (0xfffcU 
                                                  & (__PVT__req_data_out[6U] 
                                                     >> 0x10U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 6U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[7U] >> 0x10U)) 
           | ((__PVT__req_data_out[8U] << 0x10U) | 
              (0xfffcU & (__PVT__req_data_out[7U] >> 0x10U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[8U] >> 0x10U)) 
           | (0xfcU & (__PVT__req_data_out[8U] >> 0x10U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[0U] 
        = ((__PVT__req_data_out[0U] << 2U) | (3U & (IData)(__PVT__req_tag_out)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[1U] 
        = ((__PVT__req_data_out[0U] >> 0x1eU) | (__PVT__req_data_out[1U] 
                                                 << 2U));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[2U] 
        = ((__PVT__req_data_out[1U] >> 0x1eU) | (0xfcU 
                                                 & (__PVT__req_data_out[2U] 
                                                    << 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[0U] 
        = (((__PVT__req_data_out[3U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[2U] 
                                                     >> 4U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[3U] >> 4U)) | 
           ((__PVT__req_data_out[4U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[3U] 
                                                     >> 4U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[4U] >> 4U)) | 
           (0xfcU & (__PVT__req_data_out[4U] >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[0U] 
        = (((__PVT__req_data_out[5U] << 0x16U) | (0x3ffffcU 
                                                  & (__PVT__req_data_out[4U] 
                                                     >> 0xaU))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[5U] >> 0xaU)) 
           | ((__PVT__req_data_out[6U] << 0x16U) | 
              (0x3ffffcU & (__PVT__req_data_out[5U] 
                            >> 0xaU))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[6U] >> 0xaU)) 
           | (0xfcU & (__PVT__req_data_out[6U] >> 0xaU)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Body
    vlSelf->__PVT__rsp_valid_out = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.valid_out;
    vlSelf->__PVT__rsp_data_out[0U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                        << 0x1eU) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U] 
                                        >> 2U));
    vlSelf->__PVT__rsp_data_out[1U] = (IData)((((QData)((IData)(
                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    >> 6U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                     >> 4U))))));
    vlSelf->__PVT__rsp_data_out[2U] = (IData)(((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                   << 0x1aU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                     >> 6U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                      >> 4U))))) 
                                               >> 0x20U));
    vlSelf->__PVT__rsp_data_out[3U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[4U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                        >> 8U));
    vlSelf->__PVT__rsp_tag_out = ((0xc0U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | ((0x30U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U]) 
                                     | ((0xcU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U]) 
                                        | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U]))));
    vlSelf->__PVT__rsp_tag_out = ((0x3fU & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | (0xc0U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x17U) & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x18U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 1U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x19U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x1aU) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 3U)));
    vlSelf->__Vcellout__stream_unpack__ready_in = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                      >> 0x17U)) 
                                                                  & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n))))));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                   >> 0x1eU)))) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                ((0x78U 
                                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                     >> 0xbU)) 
                                                                 | (7U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 2U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffff80U 
                                       & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                           << 9U) | 
                                          (0x180U & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                            >> 0x17U)))) 
                                      | (IData)(((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 2U)))))) 
                                                 >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0xffffffc0U 
                                       & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((0x20U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                   >> 0x11U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                             >> 0x17U))));
    vlSelf->__PVT__req_data_in[2U] = ((0x3fU & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xfU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 5U))))))) 
                                         << 6U));
    vlSelf->__PVT__req_data_in[3U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0xfU)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 5U))))))) 
                                       >> 0x1aU) | 
                                      ((0xffffe000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            << 0x11U) 
                                           | (0x1e000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                                 >> 0xfU)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xfU)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 5U)))))) 
                                                   >> 0x20U)) 
                                          << 6U)));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffff000U 
                                       & vlSelf->__PVT__req_data_in[4U]) 
                                      | (((0x3fU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            >> 0xfU)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0xfU)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 5U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 0xbU)) 
                                            | (0x7c0U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                  >> 0xfU)))));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffU & vlSelf->__PVT__req_data_in[4U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x13U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 8U))))))) 
                                         << 0xcU));
    vlSelf->__PVT__req_data_in[5U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x13U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 8U))))))) 
                                       >> 0x14U) | 
                                      ((0xfff80000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            << 0x19U) 
                                           | (0x1f80000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                 >> 7U)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0x13U)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 8U)))))) 
                                                   >> 0x20U)) 
                                          << 0xcU)));
    vlSelf->__PVT__req_data_in[6U] = ((0xfffc0000U 
                                       & vlSelf->__PVT__req_data_in[6U]) 
                                      | (((0xfffU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            >> 7U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0x13U)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 8U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x14U)) 
                                         | ((0x20000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 5U)) 
                                            | (0x1f000U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                  >> 7U)))));
    vlSelf->__PVT__req_data_in[6U] = ((0x3ffffU & vlSelf->__PVT__req_data_in[6U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x17U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xbU))))))) 
                                         << 0x12U));
    vlSelf->__PVT__req_data_in[7U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x17U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU))))))) 
                                       >> 0xeU) | (
                                                   (0xfe000000U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                 << 7U) 
                                                                | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
    vlSelf->__PVT__req_data_in[8U] = (0xffffffU & (
                                                   ((0x3ffffU 
                                                     & ((0x3fffeU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                            << 1U)) 
                                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                           >> 0x1fU))) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 7U) 
                                                                 | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                                >> 0x20U)) 
                                                       >> 0xeU)) 
                                                   | (0xfc0000U 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                         << 1U))));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSelf->__PVT__rsp_valid_out));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 1U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 2U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 3U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = ((vlSelf->__PVT__req_data_in[0U] << 2U) | 
           (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = ((vlSelf->__PVT__req_data_in[0U] >> 0x1eU) 
           | (vlSelf->__PVT__req_data_in[1U] << 2U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((vlSelf->__PVT__req_data_in[1U] >> 0x1eU) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[2U] 
                       << 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[3U] << 0x1cU) 
            | (0xffffffcU & (vlSelf->__PVT__req_data_in[2U] 
                             >> 4U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[3U] >> 4U)) 
           | ((vlSelf->__PVT__req_data_in[4U] << 0x1cU) 
              | (0xffffffcU & (vlSelf->__PVT__req_data_in[3U] 
                               >> 4U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[4U] >> 4U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[4U] 
                       >> 4U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[5U] << 0x16U) 
            | (0x3ffffcU & (vlSelf->__PVT__req_data_in[4U] 
                            >> 0xaU))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[5U] >> 0xaU)) 
           | ((vlSelf->__PVT__req_data_in[6U] << 0x16U) 
              | (0x3ffffcU & (vlSelf->__PVT__req_data_in[5U] 
                              >> 0xaU))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[6U] >> 0xaU)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[6U] 
                       >> 0xaU)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[7U] << 0x10U) 
            | (0xfffcU & (vlSelf->__PVT__req_data_in[6U] 
                          >> 0x10U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[7U] >> 0x10U)) 
           | ((vlSelf->__PVT__req_data_in[8U] << 0x10U) 
              | (0xfffcU & (vlSelf->__PVT__req_data_in[7U] 
                            >> 0x10U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[8U] >> 0x10U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[8U] 
                       >> 0x10U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Init
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_1;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_2;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_3;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_4;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 = 0;
    // Body
    vlSelf->__Vcellout__stream_pack__tag_out = (3U 
                                                & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                                                   >> 
                                                   (7U 
                                                    & VL_SHIFTL_III(3,3,32, 
                                                                    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                    [0U], 1U))));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 6U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 4U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 2U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 
        = ((1U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
           == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    vlSelf->__Vcellout__stream_pack__mask_out = ((IData)(vlSelf->__PVT__rsp_valid_out) 
                                                 & (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4) 
                                                     << 3U) 
                                                    | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3) 
                                                        << 2U) 
                                                       | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2) 
                                                           << 1U) 
                                                          | (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
    vlSelf->__PVT__rsp_ready_out = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4)) 
                                     << 3U) | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3)) 
                                                << 2U) 
                                               | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                     & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0\n"); );
    // Init
    VlWide<9>/*279:0*/ __PVT__req_data_out;
    VL_ZERO_W(280, __PVT__req_data_out);
    CData/*7:0*/ __PVT__req_tag_out;
    __PVT__req_tag_out = 0;
    // Body
    vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n 
        = ((~ (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                           << 2U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      << 1U) | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))));
    __PVT__req_data_out[0U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                             >> 2U));
    __PVT__req_data_out[1U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             >> 2U));
    __PVT__req_data_out[2U] = ((0xffffffc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 4U)) 
                               | (0x3fU & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                           >> 2U)));
    __PVT__req_data_out[3U] = (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                          << 4U)) | 
                                (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                 >> 0x1cU)) | (0xffffffc0U 
                                               & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                  << 4U)));
    __PVT__req_data_out[4U] = ((0xfffff000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0xaU)) 
                               | (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x1cU)) | 
                                  (0xfc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U))));
    __PVT__req_data_out[5U] = (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                           << 0xaU)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x16U)) | (0xfffff000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0xaU)));
    __PVT__req_data_out[6U] = ((0xfffc0000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0x10U)) 
                               | (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                              << 0xaU)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x16U)) | 
                                  (0x3f000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                               << 0xaU))));
    __PVT__req_data_out[7U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x10U)) | (0xfffc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0x10U)));
    __PVT__req_data_out[8U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                   >> 0x10U)) | (0xfc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                    << 0x10U)));
    __PVT__req_tag_out = ((0xc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                    << 6U)) | ((0x30U 
                                                & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                   << 4U)) 
                                               | ((0xcU 
                                                   & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                      << 2U)) 
                                                  | (3U 
                                                     & vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[0U] 
        = (((__PVT__req_data_out[7U] << 0x10U) | (0xfffcU 
                                                  & (__PVT__req_data_out[6U] 
                                                     >> 0x10U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 6U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[7U] >> 0x10U)) 
           | ((__PVT__req_data_out[8U] << 0x10U) | 
              (0xfffcU & (__PVT__req_data_out[7U] >> 0x10U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[8U] >> 0x10U)) 
           | (0xfcU & (__PVT__req_data_out[8U] >> 0x10U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[0U] 
        = ((__PVT__req_data_out[0U] << 2U) | (3U & (IData)(__PVT__req_tag_out)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[1U] 
        = ((__PVT__req_data_out[0U] >> 0x1eU) | (__PVT__req_data_out[1U] 
                                                 << 2U));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[2U] 
        = ((__PVT__req_data_out[1U] >> 0x1eU) | (0xfcU 
                                                 & (__PVT__req_data_out[2U] 
                                                    << 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[0U] 
        = (((__PVT__req_data_out[3U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[2U] 
                                                     >> 4U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[3U] >> 4U)) | 
           ((__PVT__req_data_out[4U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[3U] 
                                                     >> 4U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[4U] >> 4U)) | 
           (0xfcU & (__PVT__req_data_out[4U] >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[0U] 
        = (((__PVT__req_data_out[5U] << 0x16U) | (0x3ffffcU 
                                                  & (__PVT__req_data_out[4U] 
                                                     >> 0xaU))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[5U] >> 0xaU)) 
           | ((__PVT__req_data_out[6U] << 0x16U) | 
              (0x3ffffcU & (__PVT__req_data_out[5U] 
                            >> 0xaU))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[6U] >> 0xaU)) 
           | (0xfcU & (__PVT__req_data_out[6U] >> 0xaU)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Body
    vlSelf->__PVT__rsp_valid_out = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.valid_out;
    vlSelf->__PVT__rsp_data_out[0U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                        << 0x1eU) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U] 
                                        >> 2U));
    vlSelf->__PVT__rsp_data_out[1U] = (IData)((((QData)((IData)(
                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    >> 6U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                     >> 4U))))));
    vlSelf->__PVT__rsp_data_out[2U] = (IData)(((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                   << 0x1aU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                     >> 6U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                      >> 4U))))) 
                                               >> 0x20U));
    vlSelf->__PVT__rsp_data_out[3U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[4U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                        >> 8U));
    vlSelf->__PVT__rsp_tag_out = ((0xc0U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | ((0x30U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U]) 
                                     | ((0xcU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U]) 
                                        | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U]))));
    vlSelf->__PVT__rsp_tag_out = ((0x3fU & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | (0xc0U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x17U) & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x18U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 1U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x19U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x1aU) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 3U)));
    vlSelf->__Vcellout__stream_unpack__ready_in = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                      >> 0x17U)) 
                                                                  & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n))))));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                   >> 0x1eU)))) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                ((0x78U 
                                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                     >> 0xbU)) 
                                                                 | (7U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 2U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffff80U 
                                       & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                           << 9U) | 
                                          (0x180U & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                            >> 0x17U)))) 
                                      | (IData)(((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 2U)))))) 
                                                 >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0xffffffc0U 
                                       & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((0x20U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                   >> 0x11U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                             >> 0x17U))));
    vlSelf->__PVT__req_data_in[2U] = ((0x3fU & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xfU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 5U))))))) 
                                         << 6U));
    vlSelf->__PVT__req_data_in[3U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0xfU)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 5U))))))) 
                                       >> 0x1aU) | 
                                      ((0xffffe000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            << 0x11U) 
                                           | (0x1e000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                                 >> 0xfU)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xfU)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 5U)))))) 
                                                   >> 0x20U)) 
                                          << 6U)));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffff000U 
                                       & vlSelf->__PVT__req_data_in[4U]) 
                                      | (((0x3fU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            >> 0xfU)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0xfU)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 5U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 0xbU)) 
                                            | (0x7c0U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                  >> 0xfU)))));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffU & vlSelf->__PVT__req_data_in[4U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x13U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 8U))))))) 
                                         << 0xcU));
    vlSelf->__PVT__req_data_in[5U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x13U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 8U))))))) 
                                       >> 0x14U) | 
                                      ((0xfff80000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            << 0x19U) 
                                           | (0x1f80000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                 >> 7U)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0x13U)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 8U)))))) 
                                                   >> 0x20U)) 
                                          << 0xcU)));
    vlSelf->__PVT__req_data_in[6U] = ((0xfffc0000U 
                                       & vlSelf->__PVT__req_data_in[6U]) 
                                      | (((0xfffU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            >> 7U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0x13U)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 8U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x14U)) 
                                         | ((0x20000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 5U)) 
                                            | (0x1f000U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                  >> 7U)))));
    vlSelf->__PVT__req_data_in[6U] = ((0x3ffffU & vlSelf->__PVT__req_data_in[6U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x17U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xbU))))))) 
                                         << 0x12U));
    vlSelf->__PVT__req_data_in[7U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x17U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU))))))) 
                                       >> 0xeU) | (
                                                   (0xfe000000U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                 << 7U) 
                                                                | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
    vlSelf->__PVT__req_data_in[8U] = (0xffffffU & (
                                                   ((0x3ffffU 
                                                     & ((0x3fffeU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                            << 1U)) 
                                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                           >> 0x1fU))) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 7U) 
                                                                 | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                                >> 0x20U)) 
                                                       >> 0xeU)) 
                                                   | (0xfc0000U 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                         << 1U))));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSelf->__PVT__rsp_valid_out));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 1U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 2U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 3U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = ((vlSelf->__PVT__req_data_in[0U] << 2U) | 
           (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = ((vlSelf->__PVT__req_data_in[0U] >> 0x1eU) 
           | (vlSelf->__PVT__req_data_in[1U] << 2U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((vlSelf->__PVT__req_data_in[1U] >> 0x1eU) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[2U] 
                       << 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[3U] << 0x1cU) 
            | (0xffffffcU & (vlSelf->__PVT__req_data_in[2U] 
                             >> 4U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[3U] >> 4U)) 
           | ((vlSelf->__PVT__req_data_in[4U] << 0x1cU) 
              | (0xffffffcU & (vlSelf->__PVT__req_data_in[3U] 
                               >> 4U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[4U] >> 4U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[4U] 
                       >> 4U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[5U] << 0x16U) 
            | (0x3ffffcU & (vlSelf->__PVT__req_data_in[4U] 
                            >> 0xaU))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[5U] >> 0xaU)) 
           | ((vlSelf->__PVT__req_data_in[6U] << 0x16U) 
              | (0x3ffffcU & (vlSelf->__PVT__req_data_in[5U] 
                              >> 0xaU))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[6U] >> 0xaU)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[6U] 
                       >> 0xaU)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[7U] << 0x10U) 
            | (0xfffcU & (vlSelf->__PVT__req_data_in[6U] 
                          >> 0x10U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[7U] >> 0x10U)) 
           | ((vlSelf->__PVT__req_data_in[8U] << 0x10U) 
              | (0xfffcU & (vlSelf->__PVT__req_data_in[7U] 
                            >> 0x10U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[8U] >> 0x10U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[8U] 
                       >> 0x10U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Init
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_1;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_2;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_3;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_4;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 = 0;
    // Body
    vlSelf->__Vcellout__stream_pack__tag_out = (3U 
                                                & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                                                   >> 
                                                   (7U 
                                                    & VL_SHIFTL_III(3,3,32, 
                                                                    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                    [0U], 1U))));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 6U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 4U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 2U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 
        = ((1U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
           == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    vlSelf->__Vcellout__stream_pack__mask_out = ((IData)(vlSelf->__PVT__rsp_valid_out) 
                                                 & (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4) 
                                                     << 3U) 
                                                    | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3) 
                                                        << 2U) 
                                                       | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2) 
                                                           << 1U) 
                                                          | (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
    vlSelf->__PVT__rsp_ready_out = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4)) 
                                     << 3U) | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3)) 
                                                << 2U) 
                                               | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                     & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0\n"); );
    // Init
    VlWide<9>/*279:0*/ __PVT__req_data_out;
    VL_ZERO_W(280, __PVT__req_data_out);
    CData/*7:0*/ __PVT__req_tag_out;
    __PVT__req_tag_out = 0;
    // Body
    vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n 
        = ((~ (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                           << 2U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      << 1U) | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))));
    __PVT__req_data_out[0U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                             >> 2U));
    __PVT__req_data_out[1U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             >> 2U));
    __PVT__req_data_out[2U] = ((0xffffffc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 4U)) 
                               | (0x3fU & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                           >> 2U)));
    __PVT__req_data_out[3U] = (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                          << 4U)) | 
                                (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                 >> 0x1cU)) | (0xffffffc0U 
                                               & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                  << 4U)));
    __PVT__req_data_out[4U] = ((0xfffff000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0xaU)) 
                               | (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x1cU)) | 
                                  (0xfc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U))));
    __PVT__req_data_out[5U] = (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                           << 0xaU)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x16U)) | (0xfffff000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0xaU)));
    __PVT__req_data_out[6U] = ((0xfffc0000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0x10U)) 
                               | (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                              << 0xaU)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x16U)) | 
                                  (0x3f000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                               << 0xaU))));
    __PVT__req_data_out[7U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x10U)) | (0xfffc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0x10U)));
    __PVT__req_data_out[8U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                   >> 0x10U)) | (0xfc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                    << 0x10U)));
    __PVT__req_tag_out = ((0xc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                    << 6U)) | ((0x30U 
                                                & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                   << 4U)) 
                                               | ((0xcU 
                                                   & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                      << 2U)) 
                                                  | (3U 
                                                     & vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[0U] 
        = (((__PVT__req_data_out[7U] << 0x10U) | (0xfffcU 
                                                  & (__PVT__req_data_out[6U] 
                                                     >> 0x10U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 6U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[7U] >> 0x10U)) 
           | ((__PVT__req_data_out[8U] << 0x10U) | 
              (0xfffcU & (__PVT__req_data_out[7U] >> 0x10U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[8U] >> 0x10U)) 
           | (0xfcU & (__PVT__req_data_out[8U] >> 0x10U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[0U] 
        = ((__PVT__req_data_out[0U] << 2U) | (3U & (IData)(__PVT__req_tag_out)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[1U] 
        = ((__PVT__req_data_out[0U] >> 0x1eU) | (__PVT__req_data_out[1U] 
                                                 << 2U));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[2U] 
        = ((__PVT__req_data_out[1U] >> 0x1eU) | (0xfcU 
                                                 & (__PVT__req_data_out[2U] 
                                                    << 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[0U] 
        = (((__PVT__req_data_out[3U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[2U] 
                                                     >> 4U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[3U] >> 4U)) | 
           ((__PVT__req_data_out[4U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[3U] 
                                                     >> 4U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[4U] >> 4U)) | 
           (0xfcU & (__PVT__req_data_out[4U] >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[0U] 
        = (((__PVT__req_data_out[5U] << 0x16U) | (0x3ffffcU 
                                                  & (__PVT__req_data_out[4U] 
                                                     >> 0xaU))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[5U] >> 0xaU)) 
           | ((__PVT__req_data_out[6U] << 0x16U) | 
              (0x3ffffcU & (__PVT__req_data_out[5U] 
                            >> 0xaU))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[6U] >> 0xaU)) 
           | (0xfcU & (__PVT__req_data_out[6U] >> 0xaU)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Body
    vlSelf->__PVT__rsp_valid_out = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.valid_out;
    vlSelf->__PVT__rsp_data_out[0U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                        << 0x1eU) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U] 
                                        >> 2U));
    vlSelf->__PVT__rsp_data_out[1U] = (IData)((((QData)((IData)(
                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    >> 6U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                     >> 4U))))));
    vlSelf->__PVT__rsp_data_out[2U] = (IData)(((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                   << 0x1aU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                     >> 6U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                      >> 4U))))) 
                                               >> 0x20U));
    vlSelf->__PVT__rsp_data_out[3U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[4U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                        >> 8U));
    vlSelf->__PVT__rsp_tag_out = ((0xc0U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | ((0x30U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U]) 
                                     | ((0xcU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U]) 
                                        | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U]))));
    vlSelf->__PVT__rsp_tag_out = ((0x3fU & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | (0xc0U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x17U) & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x18U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 1U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x19U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x1aU) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 3U)));
    vlSelf->__Vcellout__stream_unpack__ready_in = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                      >> 0x17U)) 
                                                                  & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n))))));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                   >> 0x1eU)))) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                ((0x78U 
                                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                     >> 0xbU)) 
                                                                 | (7U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 2U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffff80U 
                                       & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                           << 9U) | 
                                          (0x180U & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                            >> 0x17U)))) 
                                      | (IData)(((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 2U)))))) 
                                                 >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0xffffffc0U 
                                       & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((0x20U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                   >> 0x11U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                             >> 0x17U))));
    vlSelf->__PVT__req_data_in[2U] = ((0x3fU & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xfU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 5U))))))) 
                                         << 6U));
    vlSelf->__PVT__req_data_in[3U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0xfU)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 5U))))))) 
                                       >> 0x1aU) | 
                                      ((0xffffe000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            << 0x11U) 
                                           | (0x1e000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                                 >> 0xfU)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xfU)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 5U)))))) 
                                                   >> 0x20U)) 
                                          << 6U)));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffff000U 
                                       & vlSelf->__PVT__req_data_in[4U]) 
                                      | (((0x3fU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            >> 0xfU)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0xfU)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 5U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 0xbU)) 
                                            | (0x7c0U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                  >> 0xfU)))));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffU & vlSelf->__PVT__req_data_in[4U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x13U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 8U))))))) 
                                         << 0xcU));
    vlSelf->__PVT__req_data_in[5U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x13U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 8U))))))) 
                                       >> 0x14U) | 
                                      ((0xfff80000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            << 0x19U) 
                                           | (0x1f80000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                 >> 7U)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0x13U)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 8U)))))) 
                                                   >> 0x20U)) 
                                          << 0xcU)));
    vlSelf->__PVT__req_data_in[6U] = ((0xfffc0000U 
                                       & vlSelf->__PVT__req_data_in[6U]) 
                                      | (((0xfffU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            >> 7U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0x13U)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 8U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x14U)) 
                                         | ((0x20000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 5U)) 
                                            | (0x1f000U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                  >> 7U)))));
    vlSelf->__PVT__req_data_in[6U] = ((0x3ffffU & vlSelf->__PVT__req_data_in[6U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x17U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xbU))))))) 
                                         << 0x12U));
    vlSelf->__PVT__req_data_in[7U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x17U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU))))))) 
                                       >> 0xeU) | (
                                                   (0xfe000000U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                 << 7U) 
                                                                | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
    vlSelf->__PVT__req_data_in[8U] = (0xffffffU & (
                                                   ((0x3ffffU 
                                                     & ((0x3fffeU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                            << 1U)) 
                                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                           >> 0x1fU))) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 7U) 
                                                                 | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                                >> 0x20U)) 
                                                       >> 0xeU)) 
                                                   | (0xfc0000U 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                         << 1U))));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSelf->__PVT__rsp_valid_out));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 1U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 2U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 3U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = ((vlSelf->__PVT__req_data_in[0U] << 2U) | 
           (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = ((vlSelf->__PVT__req_data_in[0U] >> 0x1eU) 
           | (vlSelf->__PVT__req_data_in[1U] << 2U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((vlSelf->__PVT__req_data_in[1U] >> 0x1eU) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[2U] 
                       << 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[3U] << 0x1cU) 
            | (0xffffffcU & (vlSelf->__PVT__req_data_in[2U] 
                             >> 4U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[3U] >> 4U)) 
           | ((vlSelf->__PVT__req_data_in[4U] << 0x1cU) 
              | (0xffffffcU & (vlSelf->__PVT__req_data_in[3U] 
                               >> 4U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[4U] >> 4U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[4U] 
                       >> 4U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[5U] << 0x16U) 
            | (0x3ffffcU & (vlSelf->__PVT__req_data_in[4U] 
                            >> 0xaU))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[5U] >> 0xaU)) 
           | ((vlSelf->__PVT__req_data_in[6U] << 0x16U) 
              | (0x3ffffcU & (vlSelf->__PVT__req_data_in[5U] 
                              >> 0xaU))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[6U] >> 0xaU)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[6U] 
                       >> 0xaU)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[7U] << 0x10U) 
            | (0xfffcU & (vlSelf->__PVT__req_data_in[6U] 
                          >> 0x10U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[7U] >> 0x10U)) 
           | ((vlSelf->__PVT__req_data_in[8U] << 0x10U) 
              | (0xfffcU & (vlSelf->__PVT__req_data_in[7U] 
                            >> 0x10U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[8U] >> 0x10U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[8U] 
                       >> 0x10U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Init
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_1;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_2;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_3;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_4;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 = 0;
    // Body
    vlSelf->__Vcellout__stream_pack__tag_out = (3U 
                                                & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                                                   >> 
                                                   (7U 
                                                    & VL_SHIFTL_III(3,3,32, 
                                                                    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                    [0U], 1U))));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 6U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 4U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 2U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 
        = ((1U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
           == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    vlSelf->__Vcellout__stream_pack__mask_out = ((IData)(vlSelf->__PVT__rsp_valid_out) 
                                                 & (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4) 
                                                     << 3U) 
                                                    | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3) 
                                                        << 2U) 
                                                       | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2) 
                                                           << 1U) 
                                                          | (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
    vlSelf->__PVT__rsp_ready_out = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4)) 
                                     << 3U) | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3)) 
                                                << 2U) 
                                               | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                     & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0\n"); );
    // Init
    VlWide<9>/*279:0*/ __PVT__req_data_out;
    VL_ZERO_W(280, __PVT__req_data_out);
    CData/*7:0*/ __PVT__req_tag_out;
    __PVT__req_tag_out = 0;
    // Body
    vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n 
        = ((~ (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                           << 2U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      << 1U) | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     << 3U) | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r))));
    __PVT__req_data_out[0U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                             >> 2U));
    __PVT__req_data_out[1U] = ((vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                << 0x1eU) | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             >> 2U));
    __PVT__req_data_out[2U] = ((0xffffffc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 4U)) 
                               | (0x3fU & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                           >> 2U)));
    __PVT__req_data_out[3U] = (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                          << 4U)) | 
                                (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                 >> 0x1cU)) | (0xffffffc0U 
                                               & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                  << 4U)));
    __PVT__req_data_out[4U] = ((0xfffff000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0xaU)) 
                               | (((0x30U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x1cU)) | 
                                  (0xfc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 4U))));
    __PVT__req_data_out[5U] = (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                           << 0xaU)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x16U)) | (0xfffff000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0xaU)));
    __PVT__req_data_out[6U] = ((0xfffc0000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                               << 0x10U)) 
                               | (((0xc00U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                              << 0xaU)) 
                                   | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                      >> 0x16U)) | 
                                  (0x3f000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                               << 0xaU))));
    __PVT__req_data_out[7U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                   >> 0x10U)) | (0xfffc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    << 0x10U)));
    __PVT__req_data_out[8U] = (((0x30000U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                             << 0x10U)) 
                                | (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                   >> 0x10U)) | (0xfc0000U 
                                                 & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                    << 0x10U)));
    __PVT__req_tag_out = ((0xc0U & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                    << 6U)) | ((0x30U 
                                                & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                   << 4U)) 
                                               | ((0xcU 
                                                   & (vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                      << 2U)) 
                                                  | (3U 
                                                     & vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[0U] 
        = (((__PVT__req_data_out[7U] << 0x10U) | (0xfffcU 
                                                  & (__PVT__req_data_out[6U] 
                                                     >> 0x10U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 6U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[7U] >> 0x10U)) 
           | ((__PVT__req_data_out[8U] << 0x10U) | 
              (0xfffcU & (__PVT__req_data_out[7U] >> 0x10U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[8U] >> 0x10U)) 
           | (0xfcU & (__PVT__req_data_out[8U] >> 0x10U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[0U] 
        = ((__PVT__req_data_out[0U] << 2U) | (3U & (IData)(__PVT__req_tag_out)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[1U] 
        = ((__PVT__req_data_out[0U] >> 0x1eU) | (__PVT__req_data_out[1U] 
                                                 << 2U));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__.req_data[2U] 
        = ((__PVT__req_data_out[1U] >> 0x1eU) | (0xfcU 
                                                 & (__PVT__req_data_out[2U] 
                                                    << 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[0U] 
        = (((__PVT__req_data_out[3U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[2U] 
                                                     >> 4U))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 2U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[3U] >> 4U)) | 
           ((__PVT__req_data_out[4U] << 0x1cU) | (0xffffffcU 
                                                  & (__PVT__req_data_out[3U] 
                                                     >> 4U))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[4U] >> 4U)) | 
           (0xfcU & (__PVT__req_data_out[4U] >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[0U] 
        = (((__PVT__req_data_out[5U] << 0x16U) | (0x3ffffcU 
                                                  & (__PVT__req_data_out[4U] 
                                                     >> 0xaU))) 
           | (3U & ((IData)(__PVT__req_tag_out) >> 4U)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[1U] 
        = ((3U & (__PVT__req_data_out[5U] >> 0xaU)) 
           | ((__PVT__req_data_out[6U] << 0x16U) | 
              (0x3ffffcU & (__PVT__req_data_out[5U] 
                            >> 0xaU))));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__.req_data[2U] 
        = ((3U & (__PVT__req_data_out[6U] >> 0xaU)) 
           | (0xfcU & (__PVT__req_data_out[6U] >> 0xaU)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Body
    vlSelf->__PVT__rsp_valid_out = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.valid_out;
    vlSelf->__PVT__rsp_data_out[0U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                        << 0x1eU) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U] 
                                        >> 2U));
    vlSelf->__PVT__rsp_data_out[1U] = (IData)((((QData)((IData)(
                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    >> 6U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                     >> 4U))))));
    vlSelf->__PVT__rsp_data_out[2U] = (IData)(((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                                                   << 0x1aU) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                     >> 6U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U] 
                                                                      >> 4U))))) 
                                               >> 0x20U));
    vlSelf->__PVT__rsp_data_out[3U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[4U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U] 
                                        >> 8U));
    vlSelf->__PVT__rsp_tag_out = ((0xc0U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | ((0x30U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[2U]) 
                                     | ((0xcU & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[1U]) 
                                        | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[0U]))));
    vlSelf->__PVT__rsp_tag_out = ((0x3fU & (IData)(vlSelf->__PVT__rsp_tag_out)) 
                                  | (0xc0U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar.data_out[3U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x17U) & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x18U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 1U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x19U) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__valid_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__Vcellinp__req_local_buf__valid_in) 
           & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
               >> 0x1aU) & ((IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r) 
                            >> 3U)));
    vlSelf->__Vcellout__stream_unpack__ready_in = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                                      >> 0x17U)) 
                                                                  & (IData)(vlSelf->__PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n))))));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                   >> 0x1eU)))) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                ((0x78U 
                                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                     >> 0xbU)) 
                                                                 | (7U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 2U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffff80U 
                                       & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                           << 9U) | 
                                          (0x180U & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                            >> 0x17U)))) 
                                      | (IData)(((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 2U)))))) 
                                                 >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0xffffffc0U 
                                       & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((0x20U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                   >> 0x11U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                             >> 0x17U))));
    vlSelf->__PVT__req_data_in[2U] = ((0x3fU & vlSelf->__PVT__req_data_in[2U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xfU)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 5U))))))) 
                                         << 6U));
    vlSelf->__PVT__req_data_in[3U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0xfU)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 5U))))))) 
                                       >> 0x1aU) | 
                                      ((0xffffe000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            << 0x11U) 
                                           | (0x1e000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[5U] 
                                                 >> 0xfU)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xfU)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 5U)))))) 
                                                   >> 0x20U)) 
                                          << 6U)));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffff000U 
                                       & vlSelf->__PVT__req_data_in[4U]) 
                                      | (((0x3fU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                            >> 0xfU)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[1U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0xfU)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 5U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 0xbU)) 
                                            | (0x7c0U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                  >> 0xfU)))));
    vlSelf->__PVT__req_data_in[4U] = ((0xfffU & vlSelf->__PVT__req_data_in[4U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x13U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 8U))))))) 
                                         << 0xcU));
    vlSelf->__PVT__req_data_in[5U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x13U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 8U))))))) 
                                       >> 0x14U) | 
                                      ((0xfff80000U 
                                        & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            << 0x19U) 
                                           | (0x1f80000U 
                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[6U] 
                                                 >> 7U)))) 
                                       | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                         >> 0x1eU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x78U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0x13U)) 
                                                                       | (7U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                             >> 8U)))))) 
                                                   >> 0x20U)) 
                                          << 0xcU)));
    vlSelf->__PVT__req_data_in[6U] = ((0xfffc0000U 
                                       & vlSelf->__PVT__req_data_in[6U]) 
                                      | (((0xfffU & 
                                           (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                            >> 7U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[2U] 
                                                                            >> 0x1eU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         ((0x78U 
                                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                              >> 0x13U)) 
                                                                          | (7U 
                                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 8U)))))) 
                                                      >> 0x20U)) 
                                             >> 0x14U)) 
                                         | ((0x20000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                >> 5U)) 
                                            | (0x1f000U 
                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                  >> 7U)))));
    vlSelf->__PVT__req_data_in[6U] = ((0x3ffffU & vlSelf->__PVT__req_data_in[6U]) 
                                      | ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                       >> 0x1eU)))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    ((0x78U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0x17U)) 
                                                                     | (7U 
                                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                           >> 0xbU))))))) 
                                         << 0x12U));
    vlSelf->__PVT__req_data_in[7U] = (((IData)((((QData)((IData)(
                                                                 ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                   << 2U) 
                                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                     >> 0x1eU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  ((0x78U 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                       >> 0x17U)) 
                                                                   | (7U 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                         >> 0xbU))))))) 
                                       >> 0xeU) | (
                                                   (0xfe000000U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                       << 1U)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                 << 7U) 
                                                                | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
    vlSelf->__PVT__req_data_in[8U] = (0xffffffU & (
                                                   ((0x3ffffU 
                                                     & ((0x3fffeU 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                            << 1U)) 
                                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[7U] 
                                                           >> 0x1fU))) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[4U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 7U) 
                                                                 | (QData)((IData)(
                                                                                ((0x78U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U)) 
                                                                                | (7U 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0xbU)))))) 
                                                                >> 0x20U)) 
                                                       >> 0xeU)) 
                                                   | (0xfc0000U 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[8U] 
                                                         << 1U))));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSelf->__PVT__rsp_valid_out));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 1U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 2U));
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSelf->__PVT__rsp_valid_out) 
                 >> 3U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = ((vlSelf->__PVT__req_data_in[0U] << 2U) | 
           (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = ((vlSelf->__PVT__req_data_in[0U] >> 0x1eU) 
           | (vlSelf->__PVT__req_data_in[1U] << 2U));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = ((vlSelf->__PVT__req_data_in[1U] >> 0x1eU) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[2U] 
                       << 2U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[3U] << 0x1cU) 
            | (0xffffffcU & (vlSelf->__PVT__req_data_in[2U] 
                             >> 4U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[3U] >> 4U)) 
           | ((vlSelf->__PVT__req_data_in[4U] << 0x1cU) 
              | (0xffffffcU & (vlSelf->__PVT__req_data_in[3U] 
                               >> 4U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[4U] >> 4U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[4U] 
                       >> 4U)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[5U] << 0x16U) 
            | (0x3ffffcU & (vlSelf->__PVT__req_data_in[4U] 
                            >> 0xaU))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[5U] >> 0xaU)) 
           | ((vlSelf->__PVT__req_data_in[6U] << 0x16U) 
              | (0x3ffffcU & (vlSelf->__PVT__req_data_in[5U] 
                              >> 0xaU))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[6U] >> 0xaU)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[6U] 
                       >> 0xaU)));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[0U] 
        = (((vlSelf->__PVT__req_data_in[7U] << 0x10U) 
            | (0xfffcU & (vlSelf->__PVT__req_data_in[6U] 
                          >> 0x10U))) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb_if__BRA__0__KET__.req_data[0U]));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[1U] 
        = ((3U & (vlSelf->__PVT__req_data_in[7U] >> 0x10U)) 
           | ((vlSelf->__PVT__req_data_in[8U] << 0x10U) 
              | (0xfffcU & (vlSelf->__PVT__req_data_in[7U] 
                            >> 0x10U))));
    vlSelf->stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in[2U] 
        = ((3U & (vlSelf->__PVT__req_data_in[8U] >> 0x10U)) 
           | (0xfcU & (vlSelf->__PVT__req_data_in[8U] 
                       >> 0x10U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__1\n"); );
    // Init
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_1;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_2;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_3;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 = 0;
    CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h305aea41_0_4;
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 = 0;
    // Body
    vlSelf->__Vcellout__stream_pack__tag_out = (3U 
                                                & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                                                   >> 
                                                   (7U 
                                                    & VL_SHIFTL_III(3,3,32, 
                                                                    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                                    [0U], 1U))));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_4 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 6U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_3 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 4U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_2 
        = ((1U & ((IData)(vlSelf->__PVT__rsp_tag_out) 
                  >> 2U)) == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    stream_pack__DOT____VdfgRegularize_h305aea41_0_1 
        = ((1U & (IData)(vlSelf->__PVT__rsp_tag_out)) 
           == (1U & (IData)(vlSelf->__Vcellout__stream_pack__tag_out)));
    vlSelf->__Vcellout__stream_pack__mask_out = ((IData)(vlSelf->__PVT__rsp_valid_out) 
                                                 & (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4) 
                                                     << 3U) 
                                                    | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3) 
                                                        << 2U) 
                                                       | (((IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2) 
                                                           << 1U) 
                                                          | (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
    vlSelf->__PVT__rsp_ready_out = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                      & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_4)) 
                                     << 3U) | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                 & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_3)) 
                                                << 2U) 
                                               | ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                    & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_2)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__lmem_arb__DOT__g_passthru__DOT__req_arb__DOT__g_passthru__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                     & (IData)(stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
}
