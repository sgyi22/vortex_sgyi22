// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim__Syms.h"
#include "Vrtlsim_shim___024root.h"

void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed_a, CData/*0:0*/ is_signed_b, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &resultl, IData/*31:0*/ &resulth);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &quotient, IData/*31:0*/ &remainder);

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_sequent__TOP__12(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_sequent__TOP__12\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    // Body
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bank_rsp_valid 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.valid_out) 
            >> 1U) & ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[3U] 
                          >> 1U)) & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT____VdfgRegularize_h49489bd9_0_13)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bank_rsp_valid 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.valid_out) 
            >> 2U) & ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[4U] 
                          >> 0x12U)) & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT____VdfgRegularize_h49489bd9_0_16)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bank_rsp_valid 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.valid_out) 
            >> 3U) & ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[6U] 
                          >> 3U)) & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT____VdfgRegularize_h49489bd9_0_19)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_valid_in) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_ready_in));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable)) 
            & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip) 
               | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready 
        = ((((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready) 
             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip)) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip))) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0U;
    if ((0U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                      >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
    } else if ((1U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                             >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 2U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 4U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 6U))))));
    } else {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0xfU;
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
        = (((QData)((IData)((7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                   >> 0x18U)))) << 0x35U) 
           | (((QData)((IData)(((0xfffffffeU & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                 << 0xcU) 
                                                | (0xffeU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x14U)))) 
                                | (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                         >> 0xbU))))) 
               << 0x15U) | (QData)((IData)(((0x1f8000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                << 0xaU)) 
                                            | ((0x7800U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 6U)) 
                                               | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]) 
                                                     | (3U 
                                                        == 
                                                        (3U 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                            >> 0x13U)))))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                         >> 3U));
    if ((1U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 5U)));
    } else if ((2U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0xdU)));
    } else if ((3U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first 
        = ((7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))) 
           >= (7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable)) 
            & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip) 
               | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready 
        = ((((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready) 
             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip)) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip))) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0U;
    if ((0U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                      >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
    } else if ((1U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                             >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 2U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 4U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 6U))))));
    } else {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0xfU;
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
        = (((QData)((IData)((7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                   >> 0x18U)))) << 0x35U) 
           | (((QData)((IData)(((0xfffffffeU & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                 << 0xcU) 
                                                | (0xffeU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x14U)))) 
                                | (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                         >> 0xbU))))) 
               << 0x15U) | (QData)((IData)(((0x1f8000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                << 0xaU)) 
                                            | ((0x7800U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 6U)) 
                                               | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]) 
                                                     | (3U 
                                                        == 
                                                        (3U 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                            >> 0x13U)))))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                         >> 3U));
    if ((1U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 5U)));
    } else if ((2U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0xdU)));
    } else if ((3U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first 
        = ((7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))) 
           >= (7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable)) 
            & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip) 
               | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready 
        = ((((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready) 
             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip)) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip))) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0U;
    if ((0U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                      >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
    } else if ((1U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                             >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 2U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 4U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 6U))))));
    } else {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0xfU;
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
        = (((QData)((IData)((7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                   >> 0x18U)))) << 0x35U) 
           | (((QData)((IData)(((0xfffffffeU & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                 << 0xcU) 
                                                | (0xffeU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x14U)))) 
                                | (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                         >> 0xbU))))) 
               << 0x15U) | (QData)((IData)(((0x1f8000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                << 0xaU)) 
                                            | ((0x7800U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 6U)) 
                                               | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]) 
                                                     | (3U 
                                                        == 
                                                        (3U 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                            >> 0x13U)))))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                         >> 3U));
    if ((1U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 5U)));
    } else if ((2U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0xdU)));
    } else if ((3U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first 
        = ((7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))) 
           >= (7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable)) 
            & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip) 
               | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready 
        = ((((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready) 
             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip)) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid 
        = ((((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__buf_out__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
             & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip))) 
            & (~ ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_enable) 
                  & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))))) 
           & (~ (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__fence_lock)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0U;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0U;
    if ((0U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                      >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
    } else if ((1U == (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                             >> 0x11U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 2U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 2U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 4U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 4U))))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (2U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                >> 6U)))));
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
               | (0xfU & ((IData)(1U) << (1U | (2U 
                                                & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   >> 6U))))));
    } else {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w = 0xfU;
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w = 0xfU;
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
        = (((QData)((IData)((7U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                   >> 0x18U)))) << 0x35U) 
           | (((QData)((IData)(((0xfffffffeU & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                 << 0xcU) 
                                                | (0xffeU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x14U)))) 
                                | (1U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                         >> 0xbU))))) 
               << 0x15U) | (QData)((IData)(((0x1f8000U 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                << 0xaU)) 
                                            | ((0x7800U 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 6U)) 
                                               | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]) 
                                                     | (3U 
                                                        == 
                                                        (3U 
                                                         & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                            >> 0x13U)))))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                         >> 3U));
    if ((1U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 5U)));
    } else if ((2U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0xdU)));
    } else if ((3U == (3U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 2U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 4U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
        = ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
            << 0x1dU) | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                         >> 3U));
    if ((1U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                      >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffffff00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 5U)));
    } else if ((2U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xffff0000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0xdU)));
    } else if ((3U == (3U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_align) 
                             >> 6U)))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
            = ((0xffffffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U]) 
               | (0xff000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                 << 0x15U)));
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first 
        = ((7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))) 
           >= (7U & VL_COUNTONES_I((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               << 2U)) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out)) 
                      | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[1U] 
                               >> 0x11U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 2U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[3U] 
                                                >> 2U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 4U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[4U] 
                                                >> 0x13U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               << 2U)) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out)) 
                      | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[1U] 
                               >> 0x11U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 2U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[3U] 
                                                >> 2U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 4U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[4U] 
                                                >> 0x13U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               << 2U)) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out)) 
                      | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[1U] 
                               >> 0x11U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 2U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[3U] 
                                                >> 2U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 4U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[4U] 
                                                >> 0x13U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__0__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               << 2U)) | (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__1__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out)) 
                      | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[1U] 
                               >> 0x11U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__2__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 2U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[3U] 
                                                >> 2U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bram_buf__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in 
        = (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__g_data_store__BRA__3__KET____DOT__bank_rsp_valid) 
            << 4U) | ((0xcU & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.sel_out) 
                               >> 4U)) | (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar.data_out[4U] 
                                                >> 0x13U))));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__4__resultl, vlSelf->__Vtask_dpi_imul__4__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__4__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__4__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__5__resultl, vlSelf->__Vtask_dpi_imul__5__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__5__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__5__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__6__resultl, vlSelf->__Vtask_dpi_imul__6__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__6__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__6__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__7__resultl, vlSelf->__Vtask_dpi_imul__7__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__7__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__7__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[0U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__8__quotient, vlSelf->__Vtask_dpi_idiv__8__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__8__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__8__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[1U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__9__quotient, vlSelf->__Vtask_dpi_idiv__9__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__9__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__9__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[2U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__10__quotient, vlSelf->__Vtask_dpi_idiv__10__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__10__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__10__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[3U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__11__quotient, vlSelf->__Vtask_dpi_idiv__11__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__11__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__11__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__17__resultl, vlSelf->__Vtask_dpi_imul__17__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__17__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__17__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__18__resultl, vlSelf->__Vtask_dpi_imul__18__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__18__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__18__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__19__resultl, vlSelf->__Vtask_dpi_imul__19__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__19__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__19__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__20__resultl, vlSelf->__Vtask_dpi_imul__20__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__20__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__20__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[0U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__21__quotient, vlSelf->__Vtask_dpi_idiv__21__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__21__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__21__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[1U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__22__quotient, vlSelf->__Vtask_dpi_idiv__22__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__22__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__22__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[2U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__23__quotient, vlSelf->__Vtask_dpi_idiv__23__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__23__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__23__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[3U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__24__quotient, vlSelf->__Vtask_dpi_idiv__24__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__24__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__24__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__30__resultl, vlSelf->__Vtask_dpi_imul__30__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__30__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__30__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__31__resultl, vlSelf->__Vtask_dpi_imul__31__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__31__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__31__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__32__resultl, vlSelf->__Vtask_dpi_imul__32__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__32__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__32__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__33__resultl, vlSelf->__Vtask_dpi_imul__33__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__33__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__33__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[0U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__34__quotient, vlSelf->__Vtask_dpi_idiv__34__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__34__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__34__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[1U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__35__quotient, vlSelf->__Vtask_dpi_idiv__35__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__35__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__35__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[2U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__36__quotient, vlSelf->__Vtask_dpi_idiv__36__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__36__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__36__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[3U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__37__quotient, vlSelf->__Vtask_dpi_idiv__37__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__37__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__37__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__43__resultl, vlSelf->__Vtask_dpi_imul__43__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__43__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__43__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__44__resultl, vlSelf->__Vtask_dpi_imul__44__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__44__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__44__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__45__resultl, vlSelf->__Vtask_dpi_imul__45__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__45__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__2__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__45__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__mul_fire_in, 
                                                                 (1U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                     >> 3U)), 
                                                                 ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                     >> 3U)), vlSelf->__Vtask_dpi_imul__46__resultl, vlSelf->__Vtask_dpi_imul__46__resulth);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__46__resultl;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_mul_result_tmp__BRA__3__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__46__resulth;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[0U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[0U], vlSelf->__Vtask_dpi_idiv__47__quotient, vlSelf->__Vtask_dpi_idiv__47__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__47__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__47__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[1U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[1U], vlSelf->__Vtask_dpi_idiv__48__quotient, vlSelf->__Vtask_dpi_idiv__48__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__48__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__48__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[2U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[2U], vlSelf->__Vtask_dpi_idiv__49__quotient, vlSelf->__Vtask_dpi_idiv__49__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__49__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__2__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__49__remainder;
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_fire_in, 
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))), 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in1[3U], 
                                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__div_in2[3U], vlSelf->__Vtask_dpi_idiv__50__quotient, vlSelf->__Vtask_dpi_idiv__50__remainder);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__50__quotient;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__muldiv_unit__DOT__g_div_result_in__BRA__3__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__50__remainder;
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__reqq_valid_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_ready));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push 
        = ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
               >> 0x19U)) & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
                             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[0U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            << 2U) | ((2U & ((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
                                      >> 0x37U)) << 1U)) 
                      | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[1U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[2U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[3U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[4U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            << 0xeU) | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_flags) 
                         << 2U) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                                   >> 0x1eU)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[5U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            >> 0x12U) | ((IData)(((((QData)((IData)(
                                                    (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                     >> 2U))) 
                                    << 0x1eU) | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                 >> 2U)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[6U] 
        = (((0x3c00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                        << 8U)) | ((IData)(((((QData)((IData)(
                                                              (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                               >> 2U))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                >> 2U)))) 
                                            >> 0x20U)) 
                                   >> 0x12U)) | (0xffffc000U 
                                                 & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                                    << 8U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[7U] 
        = (((0x3f00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                        << 6U)) | (0x3ffU & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                             >> 0x18U))) 
           | (0xffffc000U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                             << 6U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[8U] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                          << 1U)) | ((0x3c00000U & 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                       << 2U)) | ((0xffffffc0U 
                                                   & (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
                                                       << 0x12U) 
                                                      | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
                                                             << 0xaU) 
                                                            | ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
                                                               << 6U))))) 
                                                  | (0xffU 
                                                     & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                                                        >> 0x1aU)))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x1f800000000ULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | (((QData)((IData)(((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                 ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)
                                 : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)))) 
               << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                            & ((IData)(2U) 
                                               + ((
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x15U))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x7ffffffffULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | ((QData)((IData)((((2U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                >> 0x11U))) 
                                << 5U) | ((((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)) 
                                            & (0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))) 
                                           << 4U) | 
                                          ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                            ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                            : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)))))) 
              << 0x23U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__reqq_valid_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_ready));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push 
        = ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
               >> 0x19U)) & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
                             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[0U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            << 2U) | ((2U & ((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
                                      >> 0x37U)) << 1U)) 
                      | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[1U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[2U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[3U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[4U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            << 0xeU) | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_flags) 
                         << 2U) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                                   >> 0x1eU)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[5U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            >> 0x12U) | ((IData)(((((QData)((IData)(
                                                    (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                     >> 2U))) 
                                    << 0x1eU) | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                 >> 2U)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[6U] 
        = (((0x3c00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                        << 8U)) | ((IData)(((((QData)((IData)(
                                                              (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                               >> 2U))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                >> 2U)))) 
                                            >> 0x20U)) 
                                   >> 0x12U)) | (0xffffc000U 
                                                 & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                                    << 8U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[7U] 
        = (((0x3f00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                        << 6U)) | (0x3ffU & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                             >> 0x18U))) 
           | (0xffffc000U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                             << 6U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[8U] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                          << 1U)) | ((0x3c00000U & 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                       << 2U)) | ((0xffffffc0U 
                                                   & (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
                                                       << 0x12U) 
                                                      | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
                                                             << 0xaU) 
                                                            | ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
                                                               << 6U))))) 
                                                  | (0xffU 
                                                     & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                                                        >> 0x1aU)))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x1f800000000ULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | (((QData)((IData)(((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                 ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)
                                 : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)))) 
               << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                            & ((IData)(2U) 
                                               + ((
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x15U))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x7ffffffffULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | ((QData)((IData)((((2U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                >> 0x11U))) 
                                << 5U) | ((((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)) 
                                            & (0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))) 
                                           << 4U) | 
                                          ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                            ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                            : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)))))) 
              << 0x23U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__reqq_valid_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_ready));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push 
        = ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
               >> 0x19U)) & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
                             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[0U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            << 2U) | ((2U & ((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
                                      >> 0x37U)) << 1U)) 
                      | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[1U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[2U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[3U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[4U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            << 0xeU) | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_flags) 
                         << 2U) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                                   >> 0x1eU)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[5U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            >> 0x12U) | ((IData)(((((QData)((IData)(
                                                    (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                     >> 2U))) 
                                    << 0x1eU) | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                 >> 2U)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[6U] 
        = (((0x3c00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                        << 8U)) | ((IData)(((((QData)((IData)(
                                                              (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                               >> 2U))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                >> 2U)))) 
                                            >> 0x20U)) 
                                   >> 0x12U)) | (0xffffc000U 
                                                 & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                                    << 8U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[7U] 
        = (((0x3f00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                        << 6U)) | (0x3ffU & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                             >> 0x18U))) 
           | (0xffffc000U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                             << 6U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[8U] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                          << 1U)) | ((0x3c00000U & 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                       << 2U)) | ((0xffffffc0U 
                                                   & (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
                                                       << 0x12U) 
                                                      | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
                                                             << 0xaU) 
                                                            | ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
                                                               << 6U))))) 
                                                  | (0xffU 
                                                     & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                                                        >> 0x1aU)))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x1f800000000ULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | (((QData)((IData)(((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                 ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)
                                 : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)))) 
               << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                            & ((IData)(2U) 
                                               + ((
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x15U))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x7ffffffffULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | ((QData)((IData)((((2U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                >> 0x11U))) 
                                << 5U) | ((((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)) 
                                            & (0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))) 
                                           << 4U) | 
                                          ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                            ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                            : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)))))) 
              << 0x23U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__no_rsp_buf_valid));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__reqq_valid_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_ready));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push 
        = ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
               >> 0x19U)) & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_valid) 
                             & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[0U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            << 2U) | ((2U & ((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_tag 
                                      >> 0x37U)) << 1U)) 
                      | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[1U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[0U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[2U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[1U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[3U] 
        = ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[2U] 
            >> 0x1eU) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                         << 2U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[4U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            << 0xeU) | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_flags) 
                         << 2U) | (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_data[3U] 
                                   >> 0x1eU)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[5U] 
        = (((IData)((((QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                       >> 2U))) << 0x1eU) 
                     | (QData)((IData)((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                        >> 2U))))) 
            >> 0x12U) | ((IData)(((((QData)((IData)(
                                                    (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                     >> 2U))) 
                                    << 0x1eU) | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                 >> 2U)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[6U] 
        = (((0x3c00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                        << 8U)) | ((IData)(((((QData)((IData)(
                                                              (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[1U] 
                                                               >> 2U))) 
                                              << 0x1eU) 
                                             | (QData)((IData)(
                                                               (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[0U] 
                                                                >> 2U)))) 
                                            >> 0x20U)) 
                                   >> 0x12U)) | (0xffffc000U 
                                                 & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                                    << 8U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[7U] 
        = (((0x3f00U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                        << 6U)) | (0x3ffU & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[2U] 
                                             >> 0x18U))) 
           | (0xffffc000U & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                             << 6U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT____Vcellinp__req_queue__data_in[8U] 
        = ((0x4000000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                          << 1U)) | ((0x3c00000U & 
                                      (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                       << 2U)) | ((0xffffffc0U 
                                                   & (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__3__KET____DOT__mem_req_byteen_w) 
                                                       << 0x12U) 
                                                      | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__2__KET____DOT__mem_req_byteen_w) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__1__KET____DOT__mem_req_byteen_w) 
                                                             << 0xaU) 
                                                            | ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__g_mem_req_byteen_w__BRA__0__KET____DOT__mem_req_byteen_w) 
                                                               << 6U))))) 
                                                  | (0xffU 
                                                     & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__full_addr[3U] 
                                                        >> 0x1aU)))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x1f800000000ULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | (((QData)((IData)(((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                 ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)
                                 : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)))) 
               << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                            & ((IData)(2U) 
                                               + ((
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x15U))))))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
        = ((0x7ffffffffULL & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split) 
           | ((QData)((IData)((((2U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                >> 0x11U))) 
                                << 5U) | ((((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)) 
                                            & (0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n))) 
                                           << 4U) | 
                                          ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_first)
                                            ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                            : (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__else_tmask_n)))))) 
              << 0x23U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots;
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_pop) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
               | (3U & ((IData)(1U) << (1U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[0U]))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    }
    __Vtemp_29[0U] = (IData)(((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                               << 0xbU) | (QData)((IData)(
                                                          ((((3U 
                                                              == 
                                                              (0xfU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                  >> 0x11U))) 
                                                             << 0xaU) 
                                                            | (0x300U 
                                                               & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                  << 8U))) 
                                                           | (((4U 
                                                                == 
                                                                (0xfU 
                                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                    >> 0x11U))) 
                                                               << 7U) 
                                                              | ((0x40U 
                                                                  & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                     << 6U)) 
                                                                 | (((0x18U 
                                                                      & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                          - (IData)(1U)) 
                                                                         << 3U)) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                        << 2U)) 
                                                                    | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                    [
                                                                    (3U 
                                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                        >> 0x18U))]))))))));
    __Vtemp_29[1U] = (((IData)((((QData)((IData)((1U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x11U))))) 
                                 << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                 >> 1U)))))) 
                       << 0x14U) | (IData)((((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               ((((3U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                       >> 0x11U))) 
                                                                  << 0xaU) 
                                                                 | (0x300U 
                                                                    & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                       << 8U))) 
                                                                | (((4U 
                                                                     == 
                                                                     (0xfU 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                         >> 0x11U))) 
                                                                    << 7U) 
                                                                   | ((0x40U 
                                                                       & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                          << 6U)) 
                                                                      | (((0x18U 
                                                                           & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                               - (IData)(1U)) 
                                                                              << 3U)) 
                                                                          | ((1U 
                                                                              == 
                                                                              (3U 
                                                                               & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                             << 2U)) 
                                                                         | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                         [
                                                                         (3U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                             >> 0x18U))]))))))) 
                                            >> 0x20U)));
    __Vtemp_30[2U] = ((0xff000000U & ((((5U == (0xfU 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 0x11U))) 
                                        | (0U == (0xfU 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x11U)))) 
                                       << 0x1cU) | 
                                      (0xf000000U & 
                                       (((5U == (0xfU 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                    >> 0x11U)))
                                          ? ((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))
                                              ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                              : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                        << 0x18U)))) 
                      | (((IData)((((QData)((IData)(
                                                    (1U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                         >> 0x11U))))) 
                                    << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                    >> 1U)))))) 
                          >> 0xcU) | ((IData)(((((QData)((IData)(
                                                                 (1U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                      >> 1U))))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[0U] 
        = __Vtemp_29[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[1U] 
        = __Vtemp_29[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[2U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            << 0x1dU) | __Vtemp_30[2U]);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[3U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            >> 3U) | ((IData)((((0xfffffffffc00ULL 
                                 & (((QData)((IData)(
                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                     << 0x15U) | (0x1ffffffffffc00ULL 
                                                  & ((QData)((IData)(
                                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                     >> 0xbU)))) 
                                | (QData)((IData)((
                                                   (0x3f0U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                       >> 1U)) 
                                                   | ((8U 
                                                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                          >> 8U)) 
                                                      | (7U 
                                                         & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                               >> 0x20U)) << 0x1dU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[4U] 
        = ((IData)((((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                    >> 0x20U)) >> 3U);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots;
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_pop) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
               | (3U & ((IData)(1U) << (1U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[0U]))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    }
    __Vtemp_31[0U] = (IData)(((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                               << 0xbU) | (QData)((IData)(
                                                          ((((3U 
                                                              == 
                                                              (0xfU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                  >> 0x11U))) 
                                                             << 0xaU) 
                                                            | (0x300U 
                                                               & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                  << 8U))) 
                                                           | (((4U 
                                                                == 
                                                                (0xfU 
                                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                    >> 0x11U))) 
                                                               << 7U) 
                                                              | ((0x40U 
                                                                  & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                     << 6U)) 
                                                                 | (((0x18U 
                                                                      & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                          - (IData)(1U)) 
                                                                         << 3U)) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                        << 2U)) 
                                                                    | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                    [
                                                                    (3U 
                                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                        >> 0x18U))]))))))));
    __Vtemp_31[1U] = (((IData)((((QData)((IData)((1U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x11U))))) 
                                 << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                 >> 1U)))))) 
                       << 0x14U) | (IData)((((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               ((((3U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                       >> 0x11U))) 
                                                                  << 0xaU) 
                                                                 | (0x300U 
                                                                    & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                       << 8U))) 
                                                                | (((4U 
                                                                     == 
                                                                     (0xfU 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                         >> 0x11U))) 
                                                                    << 7U) 
                                                                   | ((0x40U 
                                                                       & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                          << 6U)) 
                                                                      | (((0x18U 
                                                                           & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                               - (IData)(1U)) 
                                                                              << 3U)) 
                                                                          | ((1U 
                                                                              == 
                                                                              (3U 
                                                                               & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                             << 2U)) 
                                                                         | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                         [
                                                                         (3U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                             >> 0x18U))]))))))) 
                                            >> 0x20U)));
    __Vtemp_32[2U] = ((0xff000000U & ((((5U == (0xfU 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 0x11U))) 
                                        | (0U == (0xfU 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x11U)))) 
                                       << 0x1cU) | 
                                      (0xf000000U & 
                                       (((5U == (0xfU 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                    >> 0x11U)))
                                          ? ((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))
                                              ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                              : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                        << 0x18U)))) 
                      | (((IData)((((QData)((IData)(
                                                    (1U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                         >> 0x11U))))) 
                                    << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                    >> 1U)))))) 
                          >> 0xcU) | ((IData)(((((QData)((IData)(
                                                                 (1U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                      >> 1U))))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[0U] 
        = __Vtemp_31[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[1U] 
        = __Vtemp_31[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[2U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            << 0x1dU) | __Vtemp_32[2U]);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[3U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            >> 3U) | ((IData)((((0xfffffffffc00ULL 
                                 & (((QData)((IData)(
                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                     << 0x15U) | (0x1ffffffffffc00ULL 
                                                  & ((QData)((IData)(
                                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                     >> 0xbU)))) 
                                | (QData)((IData)((
                                                   (0x3f0U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                       >> 1U)) 
                                                   | ((8U 
                                                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                          >> 8U)) 
                                                      | (7U 
                                                         & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                               >> 0x20U)) << 0x1dU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[4U] 
        = ((IData)((((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                    >> 0x20U)) >> 3U);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots;
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_pop) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
               | (3U & ((IData)(1U) << (1U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[0U]))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    }
    __Vtemp_33[0U] = (IData)(((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                               << 0xbU) | (QData)((IData)(
                                                          ((((3U 
                                                              == 
                                                              (0xfU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                  >> 0x11U))) 
                                                             << 0xaU) 
                                                            | (0x300U 
                                                               & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                  << 8U))) 
                                                           | (((4U 
                                                                == 
                                                                (0xfU 
                                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                    >> 0x11U))) 
                                                               << 7U) 
                                                              | ((0x40U 
                                                                  & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                     << 6U)) 
                                                                 | (((0x18U 
                                                                      & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                          - (IData)(1U)) 
                                                                         << 3U)) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                        << 2U)) 
                                                                    | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                    [
                                                                    (3U 
                                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                        >> 0x18U))]))))))));
    __Vtemp_33[1U] = (((IData)((((QData)((IData)((1U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x11U))))) 
                                 << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                 >> 1U)))))) 
                       << 0x14U) | (IData)((((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               ((((3U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                       >> 0x11U))) 
                                                                  << 0xaU) 
                                                                 | (0x300U 
                                                                    & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                       << 8U))) 
                                                                | (((4U 
                                                                     == 
                                                                     (0xfU 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                         >> 0x11U))) 
                                                                    << 7U) 
                                                                   | ((0x40U 
                                                                       & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                          << 6U)) 
                                                                      | (((0x18U 
                                                                           & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                               - (IData)(1U)) 
                                                                              << 3U)) 
                                                                          | ((1U 
                                                                              == 
                                                                              (3U 
                                                                               & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                             << 2U)) 
                                                                         | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                         [
                                                                         (3U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                             >> 0x18U))]))))))) 
                                            >> 0x20U)));
    __Vtemp_34[2U] = ((0xff000000U & ((((5U == (0xfU 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 0x11U))) 
                                        | (0U == (0xfU 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x11U)))) 
                                       << 0x1cU) | 
                                      (0xf000000U & 
                                       (((5U == (0xfU 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                    >> 0x11U)))
                                          ? ((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))
                                              ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                              : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                        << 0x18U)))) 
                      | (((IData)((((QData)((IData)(
                                                    (1U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                         >> 0x11U))))) 
                                    << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                    >> 1U)))))) 
                          >> 0xcU) | ((IData)(((((QData)((IData)(
                                                                 (1U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                      >> 1U))))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[0U] 
        = __Vtemp_33[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[1U] 
        = __Vtemp_33[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[2U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            << 0x1dU) | __Vtemp_34[2U]);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[3U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            >> 3U) | ((IData)((((0xfffffffffc00ULL 
                                 & (((QData)((IData)(
                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                     << 0x15U) | (0x1ffffffffffc00ULL 
                                                  & ((QData)((IData)(
                                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                     >> 0xbU)))) 
                                | (QData)((IData)((
                                                   (0x3f0U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                       >> 1U)) 
                                                   | ((8U 
                                                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                          >> 8U)) 
                                                      | (7U 
                                                         & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                               >> 0x20U)) << 0x1dU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[4U] 
        = ((IData)((((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                    >> 0x20U)) >> 3U);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots;
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_pop) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
               | (3U & ((IData)(1U) << (1U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[0U]))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__ibuf_push) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    }
    __Vtemp_35[0U] = (IData)(((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                               << 0xbU) | (QData)((IData)(
                                                          ((((3U 
                                                              == 
                                                              (0xfU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                  >> 0x11U))) 
                                                             << 0xaU) 
                                                            | (0x300U 
                                                               & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                  << 8U))) 
                                                           | (((4U 
                                                                == 
                                                                (0xfU 
                                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                    >> 0x11U))) 
                                                               << 7U) 
                                                              | ((0x40U 
                                                                  & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                     << 6U)) 
                                                                 | (((0x18U 
                                                                      & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                          - (IData)(1U)) 
                                                                         << 3U)) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                        << 2U)) 
                                                                    | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                    [
                                                                    (3U 
                                                                     & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                        >> 0x18U))]))))))));
    __Vtemp_35[1U] = (((IData)((((QData)((IData)((1U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                      >> 0x11U))))) 
                                 << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                 >> 1U)))))) 
                       << 0x14U) | (IData)((((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__split 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               ((((3U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                       >> 0x11U))) 
                                                                  << 0xaU) 
                                                                 | (0x300U 
                                                                    & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                       << 8U))) 
                                                                | (((4U 
                                                                     == 
                                                                     (0xfU 
                                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                         >> 0x11U))) 
                                                                    << 7U) 
                                                                   | ((0x40U 
                                                                       & (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data 
                                                                          << 6U)) 
                                                                      | (((0x18U 
                                                                           & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                               - (IData)(1U)) 
                                                                              << 3U)) 
                                                                          | ((1U 
                                                                              == 
                                                                              (3U 
                                                                               & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)) 
                                                                             << 2U)) 
                                                                         | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q_ptr
                                                                         [
                                                                         (3U 
                                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                             >> 0x18U))]))))))) 
                                            >> 0x20U)));
    __Vtemp_36[2U] = ((0xff000000U & ((((5U == (0xfU 
                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                   >> 0x11U))) 
                                        | (0U == (0xfU 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                     >> 0x11U)))) 
                                       << 0x1cU) | 
                                      (0xf000000U & 
                                       (((5U == (0xfU 
                                                 & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                    >> 0x11U)))
                                          ? ((0U != (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n))
                                              ? (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__then_tmask_n)
                                              : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data)
                                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs1_data) 
                                        << 0x18U)))) 
                      | (((IData)((((QData)((IData)(
                                                    (1U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                         >> 0x11U))))) 
                                    << 0x23U) | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                    >> 1U)))))) 
                          >> 0xcU) | ((IData)(((((QData)((IData)(
                                                                 (1U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                                                      >> 0x11U))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__wspawn_wmask)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rs2_data 
                                                                      >> 1U))))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[0U] 
        = __Vtemp_35[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[1U] 
        = __Vtemp_35[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[2U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            << 0x1dU) | __Vtemp_36[2U]);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[3U] 
        = (((IData)(((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]))))))) 
            >> 3U) | ((IData)((((0xfffffffffc00ULL 
                                 & (((QData)((IData)(
                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                     << 0x15U) | (0x1ffffffffffc00ULL 
                                                  & ((QData)((IData)(
                                                                     vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                     >> 0xbU)))) 
                                | (QData)((IData)((
                                                   (0x3f0U 
                                                    & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                       >> 1U)) 
                                                   | ((8U 
                                                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                          >> 8U)) 
                                                      | (7U 
                                                         & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                               >> 0x20U)) << 0x1dU));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellinp__rsp_buf__data_in[4U] 
        = ((IData)((((0xfffffffffc00ULL & (((QData)((IData)(
                                                            vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) 
                                            << 0x15U) 
                                           | (0x1ffffffffffc00ULL 
                                              & ((QData)((IData)(
                                                                 vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU])) 
                                                 >> 0xbU)))) 
                     | (QData)((IData)(((0x3f0U & (
                                                   vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                   >> 1U)) 
                                        | ((8U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                  >> 8U)) 
                                           | (7U & 
                                              vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U])))))) 
                    >> 0x20U)) >> 3U);
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[1U] 
        = (1U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[2U] 
        = (1U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
                 >> 1U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[1U] 
        = (1U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[2U] 
        = (1U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
                 >> 1U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[1U] 
        = (1U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[2U] 
        = (1U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
                 >> 1U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[1U] 
        = (1U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[2U] 
        = (1U & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
                 >> 1U));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_sequent__TOP__13(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_sequent__TOP__13\n"); );
    // Body
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
            >> 1U) & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
            >> 1U) & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
            >> 1U) & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid 
        = (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch.__PVT__pe_req_valid) 
            >> 1U) & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__no_pending_instr));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & ((6U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                              >> 0x11U))) | (0U != vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_data)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & ((6U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                              >> 0x11U))) | (0U != vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_data)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & ((6U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                              >> 0x11U))) | (0U != vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_data)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__fire_in 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable 
        = ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & ((6U == (0xfU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                              >> 0x11U))) | (0U != vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_data)));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr;
    if ((0x80U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
            = (((~ ((IData)(0x1fU) << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))) 
                & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
               | (0xffffffffULL & ((0x1fU & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                      >> 5U)), 3U))) 
                                             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable) {
        if ((1U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0x1fU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0x1fU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        } else if ((2U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(5U) 
                                                 + 
                                                 VL_SHIFTL_III(5,32,32, 
                                                               (3U 
                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                   >> 0x18U)), 3U))))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((7U & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           ((IData)(5U) 
                                            + VL_SHIFTL_III(5,32,32, 
                                                            (3U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                >> 0x18U)), 3U))))));
        } else if ((3U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        }
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr;
    if ((0x80U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
            = (((~ ((IData)(0x1fU) << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))) 
                & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
               | (0xffffffffULL & ((0x1fU & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                      >> 5U)), 3U))) 
                                             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable) {
        if ((1U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0x1fU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0x1fU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        } else if ((2U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(5U) 
                                                 + 
                                                 VL_SHIFTL_III(5,32,32, 
                                                               (3U 
                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                   >> 0x18U)), 3U))))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((7U & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           ((IData)(5U) 
                                            + VL_SHIFTL_III(5,32,32, 
                                                            (3U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                >> 0x18U)), 3U))))));
        } else if ((3U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        }
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr;
    if ((0x80U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
            = (((~ ((IData)(0x1fU) << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))) 
                & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
               | (0xffffffffULL & ((0x1fU & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                      >> 5U)), 3U))) 
                                             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable) {
        if ((1U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0x1fU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0x1fU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        } else if ((2U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(5U) 
                                                 + 
                                                 VL_SHIFTL_III(5,32,32, 
                                                               (3U 
                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                   >> 0x18U)), 3U))))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((7U & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           ((IData)(5U) 
                                            + VL_SHIFTL_III(5,32,32, 
                                                            (3U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                >> 0x18U)), 3U))))));
        } else if ((3U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        }
    }
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
        = vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr;
    if ((0x80U & (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) {
        vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
            = (((~ ((IData)(0x1fU) << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))) 
                & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
               | (0xffffffffULL & ((0x1fU & ((vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                      >> 5U)), 3U))) 
                                             | (IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out))) 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & ((IData)(vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT____Vcellout__g_fpus__BRA__0__KET____DOT__fpu_csr_reg__data_out) 
                                                                 >> 5U)), 3U)))));
    }
    if (vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT____Vcellinp__csr_data__write_enable) {
        if ((1U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0x1fU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0x1fU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        } else if ((2U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(7U) << (0x1fU & ((IData)(5U) 
                                                 + 
                                                 VL_SHIFTL_III(5,32,32, 
                                                               (3U 
                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                   >> 0x18U)), 3U))))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((7U & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           ((IData)(5U) 
                                            + VL_SHIFTL_III(5,32,32, 
                                                            (3U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                                >> 0x18U)), 3U))))));
        } else if ((3U == (0xfffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                     >> 0x11U)))) {
            vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))) 
                    & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr_n) 
                   | (0xffffffffULL & ((0xffU & vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_write_data) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit.__PVT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                                             >> 0x18U)), 3U)))));
        }
    }
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__103(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__103\n"); );
    // Body
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__104(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__104\n"); );
    // Body
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__105(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__105\n"); );
    // Body
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__106(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__106\n"); );
    // Body
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__117(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__117\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xfffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                     >> 0x1eU))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (0xfffffffU 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))));
    __Vtemp_2[1U] = ((0xff000000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                      << 0x1cU) | (0xf000000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                      >> 4U)))) 
                     | (IData)(((((QData)((IData)((0xfffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                         >> 0x1eU))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = ((0xfff00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                      << 0x1aU) | (0x3f00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                                      >> 6U)))) 
                     | (0xfffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                    >> 4U)));
    __Vtemp_2[3U] = (0xffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                >> 6U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0xfffffffU & ((0x6fU >= (0x7fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1cU) 
                                               * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_2[(((IData)(0x1bU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1cU) 
                                                       * 
                                                       vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 * 
                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_2[(3U & (((IData)(0x1cU) 
                                                  * 
                                                  vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h39f4912a__0));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__118(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__118\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xfffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                     >> 0x1eU))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (0xfffffffU 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))));
    __Vtemp_2[1U] = ((0xff000000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                      << 0x1cU) | (0xf000000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                      >> 4U)))) 
                     | (IData)(((((QData)((IData)((0xfffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                         >> 0x1eU))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = ((0xfff00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                      << 0x1aU) | (0x3f00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                                      >> 6U)))) 
                     | (0xfffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                    >> 4U)));
    __Vtemp_2[3U] = (0xffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                >> 6U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0xfffffffU & ((0x6fU >= (0x7fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1cU) 
                                               * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_2[(((IData)(0x1bU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1cU) 
                                                       * 
                                                       vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 * 
                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_2[(3U & (((IData)(0x1cU) 
                                                  * 
                                                  vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h39f4912a__0));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__119(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__119\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xfffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                     >> 0x1eU))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (0xfffffffU 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))));
    __Vtemp_2[1U] = ((0xff000000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                      << 0x1cU) | (0xf000000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                      >> 4U)))) 
                     | (IData)(((((QData)((IData)((0xfffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                         >> 0x1eU))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = ((0xfff00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                      << 0x1aU) | (0x3f00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                                      >> 6U)))) 
                     | (0xfffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                    >> 4U)));
    __Vtemp_2[3U] = (0xffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                >> 6U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0xfffffffU & ((0x6fU >= (0x7fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1cU) 
                                               * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_2[(((IData)(0x1bU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1cU) 
                                                       * 
                                                       vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 * 
                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_2[(3U & (((IData)(0x1cU) 
                                                  * 
                                                  vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h39f4912a__0));
}

VL_ATTR_COLD void Vrtlsim_shim___024root___stl_comb__TOP__120(Vrtlsim_shim___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtlsim_shim___024root___stl_comb__TOP__120\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xfffffffU 
                                               & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                     >> 0x1eU))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (0xfffffffU 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))));
    __Vtemp_2[1U] = ((0xff000000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                      << 0x1cU) | (0xf000000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                      >> 4U)))) 
                     | (IData)(((((QData)((IData)((0xfffffffU 
                                                   & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[6U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U] 
                                                         >> 0x1eU))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[5U])))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = ((0xfff00000U & ((vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                      << 0x1aU) | (0x3f00000U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                                      >> 6U)))) 
                     | (0xfffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[7U] 
                                    >> 4U)));
    __Vtemp_2[3U] = (0xffffU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch.__PVT__req_global_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d[8U] 
                                >> 6U));
    vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0xfffffffU & ((0x6fU >= (0x7fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1cU) 
                                               * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_2[(((IData)(0x1bU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1cU) 
                                                       * 
                                                       vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 * 
                                                 vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_2[(3U & (((IData)(0x1cU) 
                                                  * 
                                                  vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1cU) 
                                             * vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelf->rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h39f4912a__0));
}
