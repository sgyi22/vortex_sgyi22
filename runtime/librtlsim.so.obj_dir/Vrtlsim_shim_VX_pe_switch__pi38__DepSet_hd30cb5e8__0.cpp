// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_pe_switch__pi38.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs 
        = (2U & (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs) 
                  | (IData)(vlSelf->__PVT__pe_rsp_valid)) 
                 << 1U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs 
        = (2U & (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs) 
                  | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs)) 
                 << 1U));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__2(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__2\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__pe_rsp_valid)));
    if ((0x15fU >= (0x1ffU & ((IData)(0xb0U) * (1U 
                                                & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                   >> 1U)))))) {
        __Vtemp_4[0U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(1U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            (0xfU & (((IData)(0xb0U) 
                                      * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0xb0U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 1U))))));
        __Vtemp_4[1U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(2U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(1U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[2U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(3U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(2U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[3U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(4U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(3U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[4U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(5U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(4U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[5U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(6U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(5U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
    } else {
        __Vtemp_4[0U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[0U];
        __Vtemp_4[1U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[1U];
        __Vtemp_4[2U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[2U];
        __Vtemp_4[3U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[3U];
        __Vtemp_4[4U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[4U];
        __Vtemp_4[5U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[5U];
    }
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_4[0U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U] 
        = ((0x10000U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                        << 0xfU)) | (0xffffU & __Vtemp_4[5U]));
    vlSelf->__PVT__pe_rsp_ready = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                   & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__2(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__2\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_4;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__pe_rsp_valid)));
    vlSelf->__PVT__pe_rsp_ready = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                   & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot));
    if ((0x15fU >= (0x1ffU & ((IData)(0xb0U) * (1U 
                                                & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                   >> 1U)))))) {
        __Vtemp_4[0U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(1U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            (0xfU & (((IData)(0xb0U) 
                                      * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0xb0U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 1U))))));
        __Vtemp_4[1U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(2U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(1U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[2U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(3U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(2U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[3U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(4U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(3U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[4U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(5U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(4U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[5U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->__PVT__pe_rsp_data[
                                   ((IData)(6U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->__PVT__pe_rsp_data[
                            ((IData)(5U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                  >> 1U))))));
    } else {
        __Vtemp_4[0U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[0U];
        __Vtemp_4[1U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[1U];
        __Vtemp_4[2U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[2U];
        __Vtemp_4[3U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[3U];
        __Vtemp_4[4U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[4U];
        __Vtemp_4[5U] = vlSelf->rsp_arb__DOT____Vxrand_h519368a0__0[5U];
    }
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_4[0U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U] 
        = ((0x10000U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                        << 0xfU)) | (0xffffU & __Vtemp_4[5U]));
}
