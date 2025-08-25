// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_pe_switch__pi38.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_ready = ((((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])
                                      ? (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in)
                                      : (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in)) 
                                    << 1U) | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
                                   [0U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.execute.alu_unit.g_alus[0].pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       << 0x10U) | 
                                      vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[5U]);
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.execute.sfu_unit.pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffffU & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                         << 0x10U));
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit.__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)));
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
    vlSelf->__PVT__pe_req_ready = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr)) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffff0000U 
                                       & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_ready = ((((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])
                                      ? (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in)
                                      : (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in)) 
                                    << 1U) | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
                                   [0U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.execute.alu_unit.g_alus[0].pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       << 0x10U) | 
                                      vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[5U]);
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.execute.sfu_unit.pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffffU & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                         << 0x10U));
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit.__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)));
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
    vlSelf->__PVT__pe_req_ready = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr)) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffff0000U 
                                       & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_ready = ((((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])
                                      ? (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in)
                                      : (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in)) 
                                    << 1U) | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
                                   [0U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.execute.alu_unit.g_alus[0].pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       << 0x10U) | 
                                      vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[5U]);
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.execute.sfu_unit.pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffffU & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                         << 0x10U));
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit.__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)));
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
    vlSelf->__PVT__pe_req_ready = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr)) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffff0000U 
                                       & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_ready = ((((0x80000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])
                                      ? (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in)
                                      : (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in)) 
                                    << 1U) | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
                                   [0U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.execute.alu_unit.g_alus[0].pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       << 0x10U) | 
                                      vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__0__KET__.data[5U]);
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__rsp_buf__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__rsp_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__g_buffers__BRA__0__KET____DOT__buffer.__PVT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__pe_rsp_valid)))) 
                                    | (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                                        & ((IData)(vlSelf->__PVT__pe_rsp_valid) 
                                           >> (1U & 
                                               ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                >> 1U)))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.execute.sfu_unit.pe_switch.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffffU & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                         << 0x10U));
    vlSelf->__PVT__pe_rsp_data[6U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[0U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[7U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[1U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[8U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[2U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[9U] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[3U] 
                                       >> 0x10U) | 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                       << 0x10U));
    vlSelf->__PVT__pe_rsp_data[0xaU] = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[4U] 
                                         >> 0x10U) 
                                        | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__1__KET__.data[5U] 
                                           << 0x10U));
    if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
        } else {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[4U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U];
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[5U] 
                = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U];
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 3U;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                         | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__pe_rsp_valid))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    vlSelf->__PVT__pe_rsp_valid = (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[0U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[1U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[2U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[3U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[4U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U];
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r[5U] 
            = vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[5U];
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if (((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)) 
                | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__pe_rsp_valid) & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1(Vrtlsim_shim_VX_pe_switch__pi38* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_pe_switch__pi38___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__1\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__gather_unit.__PVT__g_out_bufs__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)));
    vlSelf->__PVT__pe_req_valid = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                    << 1U) | ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_select)) 
                                              & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)));
    vlSelf->__PVT__pe_req_ready = ((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr)) 
                                    << 1U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->__PVT__pe_rsp_data[0U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[0U];
    vlSelf->__PVT__pe_rsp_data[1U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[1U];
    vlSelf->__PVT__pe_rsp_data[2U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[2U];
    vlSelf->__PVT__pe_rsp_data[3U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[3U];
    vlSelf->__PVT__pe_rsp_data[4U] = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[4U];
    vlSelf->__PVT__pe_rsp_data[5U] = ((0xffff0000U 
                                       & vlSelf->__PVT__pe_rsp_data[5U]) 
                                      | vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U]);
}
