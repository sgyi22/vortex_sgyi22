// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137.h"
#include "Vrtlsim_shim__Syms.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0\n"); );
    // Init
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out = 0;
    // Body
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 2U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 4U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 1U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 2U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in)))) 
                   & ((IData)(1U) << (3U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx)))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 2U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    << 1U)) | (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 1U)) | ((2U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                             | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 1U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
           | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     >> 1U)) | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 2U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  >> 1U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    >> 2U)) | (1U & 
                                               ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0\n"); );
    // Init
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out = 0;
    // Body
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 2U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 4U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 1U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 2U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in)))) 
                   & ((IData)(1U) << (3U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx)))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 2U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    << 1U)) | (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 1U)) | ((2U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                             | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 1U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
           | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     >> 1U)) | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 2U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  >> 1U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    >> 2U)) | (1U & 
                                               ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0\n"); );
    // Init
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out = 0;
    // Body
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 2U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 4U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 1U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 2U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in)))) 
                   & ((IData)(1U) << (3U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx)))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 2U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    << 1U)) | (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 1U)) | ((2U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                             | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 1U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
           | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     >> 1U)) | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 2U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  >> 1U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    >> 2U)) | (1U & 
                                               ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__0\n"); );
    // Init
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out = 0;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out;
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out = 0;
    // Body
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 2U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 4U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in) 
                                     >> 1U)))) & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx) 
                                                      >> 2U)))));
    __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0xfU & ((- (IData)((1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_valid_in)))) 
                   & ((IData)(1U) << (3U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_bank_idx)))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 1U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 2U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 >> 3U));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 2U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    << 1U)) | (1U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  << 1U)) | ((2U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                             | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 1U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & (IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
           | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     >> 1U)) | (1U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                      >> 2U))));
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__reversed 
        = ((4U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  >> 1U)) | ((2U & ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                    >> 2U)) | (1U & 
                                               ((IData)(__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__4\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__5\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__6\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7(Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137___stl_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__7\n"); );
    // Body
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__data_out 
        = (0x3fU & ((0x11U >= (0x1fU & ((IData)(6U) 
                                        * vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                        [0U]))) ? (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_data_in 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       * 
                                                       vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U])))
                     : (IData)(vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand_h8df751e6__0)));
}
