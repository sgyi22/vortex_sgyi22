// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_lsu_adapter__pi18.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_lsu_adapter__pi18___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__0\n"); );
    // Body
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[0U] 
        = (vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [1U] | vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [2U]);
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[1U] 
        = (vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [3U] | vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [4U]);
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n[2U] 
        = (vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [5U] | vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__s_n
           [6U]);
}

VL_INLINE_OPT void Vrtlsim_shim_VX_lsu_adapter__pi18___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__2(Vrtlsim_shim_VX_lsu_adapter__pi18* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrtlsim_shim_VX_lsu_adapter__pi18___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__2\n"); );
    // Body
    vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__higher_pri_regs 
        = ((8U & (((IData)(vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__higher_pri_regs) 
                   | (IData)(vlSelf->__PVT__rsp_valid_out)) 
                  << 1U)) | ((4U & (((IData)(vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__higher_pri_regs) 
                                     | (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    << 1U)) | (2U & 
                                               (((IData)(vlSelf->__PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__priority_encoder__DOT__g_model1__DOT__higher_pri_regs) 
                                                 | (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                                << 1U))));
}
