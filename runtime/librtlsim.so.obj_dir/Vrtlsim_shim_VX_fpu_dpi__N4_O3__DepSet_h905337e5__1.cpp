// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_fpu_dpi__N4_O3.h"
#include "Vrtlsim_shim__Syms.h"

void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N4_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__4(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___act_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__4\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__per_core_valid_out)));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                           >> 2U)))) 
                     << 2U));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
        = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xbU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (4U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     >> 2U))));
    vlSelf->__PVT__g_fma__DOT__fma_ready = (1U & ((~ 
                                                   (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)) 
                                                  | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                     & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelf->__Vcellinp__div_sqrt_arb__ready_out = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U));
    vlSelf->__PVT__g_fncp__DOT__fncp_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 7U)) 
                                               | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     >> 3U))));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_fire = ((IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_valid) 
                                             & (IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_ready));
    vlSelf->__PVT__g_fma__DOT__fma_fire = ((IData)(vlSelf->__PVT__g_fma__DOT__fma_valid) 
                                           & (IData)(vlSelf->__PVT__g_fma__DOT__fma_ready));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->__Vcellinp__div_sqrt_arb__ready_out) 
                                                  & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 6U))));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_ready = (1U 
                                                & ((~ 
                                                    (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 6U)) 
                                                   | ((IData)(vlSelf->__Vcellinp__div_sqrt_arb__ready_out) 
                                                      & ((~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)) 
                                                         & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                            >> 6U)))));
    vlSelf->__PVT__g_fncp__DOT__fncp_fire = ((IData)(vlSelf->__PVT__g_fncp__DOT__fncp_valid) 
                                             & (IData)(vlSelf->__PVT__g_fncp__DOT__fncp_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | (IData)(vlSelf->__Vlvbound_h5f715eae__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | (IData)(vlSelf->__Vlvbound_h2fd415f9__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | (IData)(vlSelf->__Vlvbound_ha7d3bea0__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | (IData)(vlSelf->__Vlvbound_hcca9137e__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_itof);
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_utof);
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi);
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou);
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[0U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | (IData)(vlSelf->__Vlvbound_hed910a88__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((IData)(vlSelf->__Vlvbound_h5f715eae__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((IData)(vlSelf->__Vlvbound_h2fd415f9__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((IData)(vlSelf->__Vlvbound_ha7d3bea0__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((IData)(vlSelf->__Vlvbound_hcca9137e__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                            >> 5U));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[2U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((IData)(vlSelf->__Vlvbound_hed910a88__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[4U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((IData)(vlSelf->__Vlvbound_h5f715eae__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[4U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((IData)(vlSelf->__Vlvbound_h2fd415f9__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[4U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((IData)(vlSelf->__Vlvbound_ha7d3bea0__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[4U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((IData)(vlSelf->__Vlvbound_hcca9137e__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[4U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[4U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((IData)(vlSelf->__Vlvbound_hed910a88__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[6U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((IData)(vlSelf->__Vlvbound_h5f715eae__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[6U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((IData)(vlSelf->__Vlvbound_h2fd415f9__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[6U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((IData)(vlSelf->__Vlvbound_ha7d3bea0__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[6U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((IData)(vlSelf->__Vlvbound_hcca9137e__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[6U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[6U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((IData)(vlSelf->__Vlvbound_hed910a88__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | (IData)(vlSelf->__Vlvbound_h36ca9328__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | (IData)(vlSelf->__Vlvbound_h43e316fc__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | (IData)(vlSelf->__Vlvbound_h26edecc4__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | (IData)(vlSelf->__Vlvbound_h5d205b05__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | (IData)(vlSelf->__Vlvbound_h9143e784__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffe0U 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | (IData)(vlSelf->__Vlvbound_hb471f107__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffe0U 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | (IData)(vlSelf->__Vlvbound_hd54c3ea3__0));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fadd);
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fsub);
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fmul);
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fmadd);
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fmsub);
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd);
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub);
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xfffe0U 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | (IData)(vlSelf->__Vlvbound_h21e41663__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h36ca9328__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((IData)(vlSelf->__Vlvbound_h43e316fc__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((IData)(vlSelf->__Vlvbound_h26edecc4__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((IData)(vlSelf->__Vlvbound_h5d205b05__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((IData)(vlSelf->__Vlvbound_h9143e784__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xffc1fU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((IData)(vlSelf->__Vlvbound_hb471f107__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xffc1fU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((IData)(vlSelf->__Vlvbound_hd54c3ea3__0) 
                                                   << 5U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                            >> 5U));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xffc1fU 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((IData)(vlSelf->__Vlvbound_h21e41663__0) 
                                                << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[4U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h36ca9328__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[4U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((IData)(vlSelf->__Vlvbound_h43e316fc__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[4U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((IData)(vlSelf->__Vlvbound_h26edecc4__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((IData)(vlSelf->__Vlvbound_h5d205b05__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((IData)(vlSelf->__Vlvbound_h9143e784__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xf83ffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((IData)(vlSelf->__Vlvbound_hb471f107__0) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xf83ffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((IData)(vlSelf->__Vlvbound_hd54c3ea3__0) 
                                                   << 0xaU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xf83ffU 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((IData)(vlSelf->__Vlvbound_h21e41663__0) 
                                                << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[6U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0x7fffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h36ca9328__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[6U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0x7fffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((IData)(vlSelf->__Vlvbound_h43e316fc__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[6U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0x7fffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((IData)(vlSelf->__Vlvbound_h26edecc4__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0x7fffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((IData)(vlSelf->__Vlvbound_h5d205b05__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0x7fffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((IData)(vlSelf->__Vlvbound_h9143e784__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0x7fffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((IData)(vlSelf->__Vlvbound_hb471f107__0) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0x7fffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((IData)(vlSelf->__Vlvbound_hd54c3ea3__0) 
                                                   << 0xfU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0x7fffU 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((IData)(vlSelf->__Vlvbound_h21e41663__0) 
                                                << 0xfU));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_fire = ((IData)(vlSelf->__PVT__g_fdiv__DOT__fdiv_valid) 
                                             & (IData)(vlSelf->__PVT__g_fdiv__DOT__fdiv_ready));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire = ((IData)(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid) 
                                               & (IData)(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | (IData)(vlSelf->__Vlvbound_h4818f248__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | (IData)(vlSelf->__Vlvbound_hef2be428__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | (IData)(vlSelf->__Vlvbound_hb3506ccf__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | (IData)(vlSelf->__Vlvbound_h54e55b46__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | (IData)(vlSelf->__Vlvbound_h75b9d2ef__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((IData)(vlSelf->__Vlvbound_h4818f248__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((IData)(vlSelf->__Vlvbound_hef2be428__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((IData)(vlSelf->__Vlvbound_hb3506ccf__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((IData)(vlSelf->__Vlvbound_h54e55b46__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((IData)(vlSelf->__Vlvbound_h75b9d2ef__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[4U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[4U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((IData)(vlSelf->__Vlvbound_h4818f248__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[4U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((IData)(vlSelf->__Vlvbound_hef2be428__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[4U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((IData)(vlSelf->__Vlvbound_hb3506ccf__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[4U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((IData)(vlSelf->__Vlvbound_h54e55b46__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[4U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((IData)(vlSelf->__Vlvbound_h75b9d2ef__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[6U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[6U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0x7fffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((IData)(vlSelf->__Vlvbound_h4818f248__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[6U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0x7fffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((IData)(vlSelf->__Vlvbound_hef2be428__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[6U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0x7fffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((IData)(vlSelf->__Vlvbound_hb3506ccf__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[6U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0x7fffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((IData)(vlSelf->__Vlvbound_h54e55b46__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[6U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0x7fffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((IData)(vlSelf->__Vlvbound_h75b9d2ef__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                           >> 5U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                            >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                           >> 5U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                            >> 5U)))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                           >> 0xaU))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                           >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                           >> 0xaU))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                           >> 0xaU)))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                           >> 0xfU))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                           >> 0xfU))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                      >> 0x13U))) << 4U));
    }
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | (IData)(vlSelf->__Vlvbound_h9f153602__0));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[0U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((IData)(vlSelf->__Vlvbound_h9f153602__0) 
                                                  << 5U));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[1U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[4U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((IData)(vlSelf->__Vlvbound_h9f153602__0) 
                                                  << 0xaU));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[2U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[6U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0x7fffU 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((IData)(vlSelf->__Vlvbound_h9f153602__0) 
                                                  << 0xfU));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[3U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[6U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xfffe0U 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | (IData)(vlSelf->__Vlvbound_h301678fe__0));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xffc1fU 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((IData)(vlSelf->__Vlvbound_h301678fe__0) 
                                                    << 5U));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[4U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xf83ffU 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((IData)(vlSelf->__Vlvbound_h301678fe__0) 
                                                    << 0xaU));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[6U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0x7fffU 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((IData)(vlSelf->__Vlvbound_h301678fe__0) 
                                                    << 0xfU));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[6U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] = vlSelf->__Vxrand_hbe6bf8db__0[0U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] = vlSelf->__Vxrand_hbe6bf8db__0[1U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] = vlSelf->__Vxrand_hbe6bf8db__0[2U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] = vlSelf->__Vxrand_hbe6bf8db__0[3U];
    vlSelf->__PVT__g_fncp__DOT__fflags_fncp = vlSelf->__Vxrand_h89e21229__0;
    if (((((((((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm)))) {
        if ((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[6U];
            }
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle);
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)(vlSelf->__Vlvbound_hd08175d0__0));
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                  >> 5U));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__0) 
                      << 5U));
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                  >> 0xaU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__0) 
                      << 0xaU));
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                  >> 0xfU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__0) 
                      << 0xfU));
        } else if ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[6U];
            }
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt);
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)(vlSelf->__Vlvbound_hd08175d0__1));
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                  >> 5U));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__1) 
                      << 5U));
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                  >> 0xaU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__1) 
                      << 0xaU));
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                  >> 0xfU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__1) 
                      << 0xfU));
        } else if ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[6U];
            }
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq);
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)(vlSelf->__Vlvbound_hd08175d0__2));
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                  >> 5U));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__2) 
                      << 5U));
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                  >> 0xaU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__2) 
                      << 0xaU));
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                  >> 0xfU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__2) 
                      << 0xfU));
        } else {
            if ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[6U];
            } else if ((4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[6U];
            } else if ((5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[6U];
            } else if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[6U];
            }
            if ((3U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                if ((4U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                    if ((5U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                        if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fmin);
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_hd08175d0__3));
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                            >> 5U));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__3) 
                                      << 5U));
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                            >> 0xaU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__3) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                            >> 0xfU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__3) 
                                      << 0xfU));
                        } else {
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fmax);
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_hd08175d0__4));
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                            >> 5U));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__4) 
                                      << 5U));
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                            >> 0xaU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__4) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                            >> 0xfU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__4) 
                                      << 0xfU));
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                           >> 5U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                            >> 5U)))));
    }
    vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                           >> 5U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                            >> 5U)))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                           >> 0xaU))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                           >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                           >> 0xaU))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                           >> 0xaU)))));
    }
    vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                           >> 5U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                            >> 5U)))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                           >> 0xaU))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                           >> 0xaU)))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                           >> 0xfU))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                           >> 0xfU))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                           >> 0xfU))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                      >> 0x13U))) << 4U));
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__commit__DOT__g_commit_arbs__BRA__0__KET____DOT__ready_in) 
                    >> 3U)));
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    // Init
    IData/*31:0*/ __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i;
    __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i;
    __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i;
    __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i;
    __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i;
    __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0;
    VlWide<17>/*539:0*/ __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries;
    VL_ZERO_W(540, __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    VlWide<64>/*2024:0*/ __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries;
    VL_ZERO_W(2025, __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    VlWide<43>/*1349:0*/ __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries;
    VL_ZERO_W(1350, __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    VlWide<22>/*674:0*/ __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries;
    VL_ZERO_W(675, __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    VlWide<9>/*271:0*/ __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries;
    VL_ZERO_W(272, __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<9>/*287:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (0U != (IData)(vlSelf->__PVT__per_core_valid_out)))) 
                                    | ((vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                                        [2U] & ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                >> 
                                                (3U 
                                                 & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U]))) 
                                       & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                          == (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                  [1U])))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.execute.fpu_unit.g_fpus[0].fpu_dpi.rsp_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if (VL_LIKELY((1U & (~ ((1U != (~ (1U & 
                                               ((vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 | vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U]) 
                                                >> 6U)))) 
                                    | ((((vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                          | vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U]) 
                                         >> 6U) & (
                                                   ((2U 
                                                     & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                        >> 5U)) 
                                                    | (1U 
                                                       & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                          >> 6U))) 
                                                   >> 
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                        >> 6U))))) 
                                       & (((2U & ((
                                                   (~ 
                                                    (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 6U)) 
                                                   << 1U) 
                                                  & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 5U))) 
                                           | (1U & 
                                              (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                               >> 6U))) 
                                          == (3U & 
                                              ((IData)(1U) 
                                               << (1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                       >> 6U)))))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:91: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.execute.fpu_unit.g_fpus[0].fpu_dpi.div_sqrt_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 91, "");
                }
            }
        }
    }
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2aU)) {
        __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp1] 
            = vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp2] 
            = vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x11U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x11U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x12U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x12U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x13U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x13U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x14U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x14U];
    __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x15U] 
        = vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x15U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU];
    __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U] 
        = vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U];
    __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U] 
        = vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U];
    __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x87U, __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x86U, __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) {
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                   (7U & (__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x21cU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x21cU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21cU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x21cU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x21cU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x2a3U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x2a3U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2a3U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x2a3U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2a3U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x32aU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x32aU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x32aU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x32aU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x32aU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x3b1U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x3b1U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3b1U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x3b1U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3b1U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x438U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x438U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x438U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x438U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x438U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = 0U;
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x4bfU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x4bfU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4bfU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x4bfU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x4bfU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__g_fsqrt__DOT__fsqrt_ready) {
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x87U) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x87U) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x87U) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                    (7U & (__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                        << (0x1fU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)));
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x10eU) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x10eU) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x10eU) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x195U) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x195U) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x195U) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x21cU) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x21cU) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x21cU) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x2a3U) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x2a3U) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x2a3U) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x21cU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x21cU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21cU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x21cU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x21cU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x32aU) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x32aU) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x32aU) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x2a3U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x2a3U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2a3U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x2a3U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2a3U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x3b1U) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x3b1U) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x3b1U) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x32aU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x32aU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x32aU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x32aU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x32aU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x438U) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x438U) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x438U) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x3b1U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x3b1U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3b1U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x3b1U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3b1U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 
                = (1U & ((0x545U >= (0x7ffU & ((IData)(0x4bfU) 
                                               + (0xffU 
                                                  & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x4bfU) 
                                        + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x4bfU) 
                                       + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x438U) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x438U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x438U) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x438U) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x438U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_3[0U] = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
                              << 5U) | (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged));
            __Vtemp_3[1U] = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
                              >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
                                           << 5U));
            __Vtemp_3[2U] = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
                              >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
                                           << 5U));
            __Vtemp_3[3U] = ((vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
                              >> 0x1bU) | (vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
                                           << 5U));
            __Vtemp_3[4U] = (((IData)(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid) 
                              << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                         << 5U) | (
                                                   vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
                                                   >> 0x1bU)));
            vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h6b839c03__0 
                = (1U & ((0x86U >= (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_3[(7U & (__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                              >> 5U))] 
                             >> (0x1fU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1)));
            if (VL_LIKELY((0x545U >= (0x7ffU & ((IData)(0x4bfU) 
                                                + (0xffU 
                                                   & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x4bfU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4bfU) 
                                             + (0xffU 
                                                & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x4bfU) 
                                   + (0xffU & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h6b839c03__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x4bfU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i);
    }
    __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x87U, __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x86U, __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) {
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                   (7U & (__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x21cU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x21cU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21cU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x21cU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x21cU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x2a3U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x2a3U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2a3U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x2a3U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2a3U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x32aU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x32aU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x32aU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x32aU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x32aU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x3b1U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x3b1U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3b1U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x3b1U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3b1U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x438U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x438U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x438U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x438U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x438U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x4bfU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x4bfU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4bfU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x4bfU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x4bfU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x546U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x546U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x546U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x546U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x546U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x5cdU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x5cdU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x5cdU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x5cdU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x5cdU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x654U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x654U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x654U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x654U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x654U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x6dbU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x6dbU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x6dbU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x6dbU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x6dbU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = 0U;
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x762U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x762U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x762U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x762U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x762U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__g_fdiv__DOT__fdiv_ready) {
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x87U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x87U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x87U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                    (7U & (__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                        << (0x1fU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)));
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x10eU) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x10eU) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x10eU) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x195U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x195U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x195U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x21cU) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x21cU) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x21cU) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x2a3U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x2a3U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x2a3U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x21cU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x21cU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21cU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x21cU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x21cU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x32aU) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x32aU) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x32aU) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x2a3U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x2a3U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2a3U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x2a3U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2a3U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x3b1U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x3b1U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x3b1U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x32aU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x32aU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x32aU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x32aU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x32aU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x438U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x438U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x438U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x3b1U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x3b1U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3b1U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x3b1U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3b1U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x4bfU) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x4bfU) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x4bfU) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x438U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x438U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x438U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x438U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x438U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x546U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x546U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x546U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x4bfU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x4bfU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x4bfU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x4bfU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x4bfU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x5cdU) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x5cdU) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x5cdU) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x546U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x546U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x546U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x546U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x546U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x654U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x654U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x654U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x5cdU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x5cdU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x5cdU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x5cdU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x5cdU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x6dbU) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x6dbU) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x6dbU) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x654U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x654U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x654U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x654U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x654U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 
                = (1U & ((0x7e8U >= (0x7ffU & ((IData)(0x762U) 
                                               + (0xffU 
                                                  & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x3fU & (((IData)(0x762U) 
                                        + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x762U) 
                                       + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x6dbU) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x6dbU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x6dbU) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x6dbU) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x6dbU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_7[0U] = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[0U] 
                              << 5U) | (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged));
            __Vtemp_7[1U] = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[0U] 
                              >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[1U] 
                                           << 5U));
            __Vtemp_7[2U] = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[1U] 
                              >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[2U] 
                                           << 5U));
            __Vtemp_7[3U] = ((vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[2U] 
                              >> 0x1bU) | (vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[3U] 
                                           << 5U));
            __Vtemp_7[4U] = (((IData)(vlSelf->__PVT__g_fdiv__DOT__fdiv_valid) 
                              << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                         << 5U) | (
                                                   vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[3U] 
                                                   >> 0x1bU)));
            vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h48371995__0 
                = (1U & ((0x86U >= (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_7[(7U & (__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                              >> 5U))] 
                             >> (0x1fU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1)));
            if (VL_LIKELY((0x7e8U >= (0x7ffU & ((IData)(0x762U) 
                                                + (0xffU 
                                                   & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x3fU 
                                                                                & (((IData)(0x762U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x762U) 
                                             + (0xffU 
                                                & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x3fU & (((IData)(0x762U) 
                                   + (0xffU & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h48371995__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x762U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i);
    }
    __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x87U, __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x86U, __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) {
            __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                   (7U & (__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0 = 0U;
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0 = 0U;
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0 = 0U;
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0 = 0U;
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x21cU) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x21cU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21cU) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x21cU) 
                                   + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x21cU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__g_fcvt__DOT__fcvt_ready) {
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0 
                = (1U & ((0x2a2U >= (0x3ffU & ((IData)(0x87U) 
                                               + (0xffU 
                                                  & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x1fU & (((IData)(0x87U) 
                                        + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x87U) 
                                       + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                    (7U & (__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0) 
                                        << (0x1fU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)));
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0 
                = (1U & ((0x2a2U >= (0x3ffU & ((IData)(0x10eU) 
                                               + (0xffU 
                                                  & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x1fU & (((IData)(0x10eU) 
                                        + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x10eU) 
                                       + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0 
                = (1U & ((0x2a2U >= (0x3ffU & ((IData)(0x195U) 
                                               + (0xffU 
                                                  & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x1fU & (((IData)(0x195U) 
                                        + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x195U) 
                                       + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0 
                = (1U & ((0x2a2U >= (0x3ffU & ((IData)(0x21cU) 
                                               + (0xffU 
                                                  & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x1fU & (((IData)(0x21cU) 
                                        + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x21cU) 
                                       + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_11[0U] = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
                               << 5U) | (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged));
            __Vtemp_11[1U] = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
                                            << 5U));
            __Vtemp_11[2U] = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
                                            << 5U));
            __Vtemp_11[3U] = ((vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
                                            << 5U));
            __Vtemp_11[4U] = (((IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_valid) 
                               << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                          << 5U) | 
                                         (vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
                                          >> 0x1bU)));
            vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h81e316b3__0 
                = (1U & ((0x86U >= (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_11[(7U & (__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                               >> 5U))] 
                             >> (0x1fU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1)));
            if (VL_LIKELY((0x2a2U >= (0x3ffU & ((IData)(0x21cU) 
                                                + (0xffU 
                                                   & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x21cU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21cU) 
                                             + (0xffU 
                                                & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x21cU) 
                                   + (0xffU & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h81e316b3__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x21cU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i);
    }
    __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x87U, __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x86U, __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) {
            __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                   (7U & (__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h30a77c0a__0 = 0U;
            if (VL_LIKELY((0x21bU >= (0x3ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h30a77c0a__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h30a77c0a__0 = 0U;
            if (VL_LIKELY((0x21bU >= (0x3ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h30a77c0a__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h30a77c0a__0 = 0U;
            if (VL_LIKELY((0x21bU >= (0x3ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h30a77c0a__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__g_fma__DOT__fma_ready) {
            vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_he07d8e8d__0 
                = (1U & ((0x21bU >= (0x3ffU & ((IData)(0x87U) 
                                               + (0xffU 
                                                  & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x1fU & (((IData)(0x87U) 
                                        + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x87U) 
                                       + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                    (7U & (__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_he07d8e8d__0) 
                                        << (0x1fU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)));
            vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_he07d8e8d__0 
                = (1U & ((0x21bU >= (0x3ffU & ((IData)(0x10eU) 
                                               + (0xffU 
                                                  & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x1fU & (((IData)(0x10eU) 
                                        + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x10eU) 
                                       + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x21bU >= (0x3ffU & ((IData)(0x87U) 
                                                + (0xffU 
                                                   & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x87U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x87U) 
                                             + (0xffU 
                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x87U) + 
                                   (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_he07d8e8d__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x87U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_he07d8e8d__0 
                = (1U & ((0x21bU >= (0x3ffU & ((IData)(0x195U) 
                                               + (0xffU 
                                                  & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0x1fU & (((IData)(0x195U) 
                                        + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x195U) 
                                       + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            if (VL_LIKELY((0x21bU >= (0x3ffU & ((IData)(0x10eU) 
                                                + (0xffU 
                                                   & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x10eU) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x10eU) 
                                             + (0xffU 
                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x10eU) 
                                   + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_he07d8e8d__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x10eU) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_15[0U] = ((vlSelf->__PVT__g_fma__DOT__result_fma[0U] 
                               << 5U) | (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged));
            __Vtemp_15[1U] = ((vlSelf->__PVT__g_fma__DOT__result_fma[0U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[1U] 
                                            << 5U));
            __Vtemp_15[2U] = ((vlSelf->__PVT__g_fma__DOT__result_fma[1U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[2U] 
                                            << 5U));
            __Vtemp_15[3U] = ((vlSelf->__PVT__g_fma__DOT__result_fma[2U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fma__DOT__result_fma[3U] 
                                            << 5U));
            __Vtemp_15[4U] = (((IData)(vlSelf->__PVT__g_fma__DOT__fma_valid) 
                               << 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                          << 5U) | 
                                         (vlSelf->__PVT__g_fma__DOT__result_fma[3U] 
                                          >> 0x1bU)));
            vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h42e9b2ab__0 
                = (1U & ((0x86U >= (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_15[(7U & (__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                               >> 5U))] 
                             >> (0x1fU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1)));
            if (VL_LIKELY((0x21bU >= (0x3ffU & ((IData)(0x195U) 
                                                + (0xffU 
                                                   & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0x1fU 
                                                                                & (((IData)(0x195U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x195U) 
                                             + (0xffU 
                                                & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0x1fU & (((IData)(0x195U) 
                                   + (0xffU & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h42e9b2ab__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x195U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i);
    }
    __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x88U, __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x87U, __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r))) {
            __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                   (7U & (__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_h432dbf4f__0 = 0U;
            if (VL_LIKELY((0x10fU >= (0x1ffU & ((IData)(0x88U) 
                                                + (0xffU 
                                                   & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0xfU 
                                                                                & (((IData)(0x88U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x88U) 
                                             + (0xffU 
                                                & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0xfU & (((IData)(0x88U) + 
                                  (0xffU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_h432dbf4f__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x88U) 
                                                     + 
                                                     (0xffU 
                                                      & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__g_fncp__DOT__fncp_ready) {
            vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_h49c93066__0 
                = (1U & ((0x10fU >= (0x1ffU & ((IData)(0x88U) 
                                               + (0xffU 
                                                  & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                             (0xfU & (((IData)(0x88U) 
                                       + (0xffU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x88U) 
                                                      + 
                                                      (0xffU 
                                                       & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->g_fncp__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0)));
            __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(7U 
                                                                                & (__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                    (7U & (__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_h49c93066__0) 
                                        << (0x1fU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)));
            __Vtemp_20[0U] = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                               << 5U) | (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged));
            __Vtemp_20[1U] = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                                            << 5U));
            __Vtemp_20[2U] = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                                            << 5U));
            __Vtemp_20[3U] = ((vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                               >> 0x1bU) | (vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                                            << 5U));
            __Vtemp_20[4U] = (((IData)(vlSelf->__PVT__g_fncp__DOT__fncp_valid) 
                               << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                          << 6U) | 
                                         ((((6U <= (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm)) 
                                            | (IData)(vlSelf->__PVT__is_fcmp)) 
                                           << 5U) | 
                                          (vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                                           >> 0x1bU))));
            vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_hf82bc284__0 
                = (1U & ((0x87U >= (0xffU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_20[(7U & (__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
                                               >> 5U))] 
                             >> (0x1fU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->g_fncp__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1)));
            if (VL_LIKELY((0x10fU >= (0x1ffU & ((IData)(0x88U) 
                                                + (0xffU 
                                                   & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[(0xfU 
                                                                                & (((IData)(0x88U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                                                                >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x88U) 
                                             + (0xffU 
                                                & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[
                        (0xfU & (((IData)(0x88U) + 
                                  (0xffU & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_hf82bc284__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x88U) 
                                                     + 
                                                     (0xffU 
                                                      & __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__unnamedblk1__DOT__i);
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = 0xfU;
    } else {
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                         [2U] | (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) {
            if ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
            } else if ((0U != (IData)(vlSelf->__PVT__per_core_valid_out))) {
                vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask 
                    = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
            }
        }
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x2aU)) {
        vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp3] 
            = __Vdly__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp4] 
            = __Vdly__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x11U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x11U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x12U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x12U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x13U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x13U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x14U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x14U];
    vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x15U] 
        = __Vdly__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x15U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[9U];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xaU];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xbU];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xcU];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xdU];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xeU];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0xfU];
    vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U] 
        = __Vdly__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0x10U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[5U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[6U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[7U];
    vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U] 
        = __Vdly__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[8U];
    __Vtemp_29[0U] = (0x40U | ((0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                               << 2U)) 
                               | ((0x3eU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                            << 1U)) 
                                  | (1U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                           >> 5U)))));
    __Vtemp_29[1U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                 << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                            >> 0x1eU)) 
                      | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                        << 2U)));
    __Vtemp_29[2U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                 << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                            >> 0x1eU)) 
                      | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                        << 2U)));
    __Vtemp_29[3U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                 << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                            >> 0x1eU)) 
                      | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                        << 2U)));
    __Vtemp_29[4U] = (0x2000U | ((0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                 << 9U)) 
                                 | ((0x1f00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                << 8U)) 
                                    | ((0x80U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 << 2U)) 
                                       | ((0x7cU & 
                                           (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                            << 2U)) 
                                          | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                             >> 0x1eU))))));
    __Vtemp_29[5U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                   << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                              >> 0x17U)) 
                      | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                        << 9U)));
    __Vtemp_29[6U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                   << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                              >> 0x17U)) 
                      | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                        << 9U)));
    __Vtemp_29[7U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                   << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                              >> 0x17U)) 
                      | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                        << 9U)));
    __Vtemp_29[8U] = ((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                             >> 0x17U));
    __Vtemp_30[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                        * (1U & (~ 
                                                 (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U))))))
                        ? 0U : (__Vtemp_29[((IData)(1U) 
                                            + (0xfU 
                                               & (((IData)(0x87U) 
                                                   * 
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                        >> 6U)))) 
                                                  >> 5U)))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0x87U) 
                                                * (1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                       >> 6U)))))))) 
                      | (__Vtemp_29[(0xfU & (((IData)(0x87U) 
                                              * (1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 6U)))) 
                                             >> 5U))] 
                         >> (0x1fU & ((IData)(0x87U) 
                                      * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U)))))));
    __Vtemp_30[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                        * (1U & (~ 
                                                 (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U))))))
                        ? 0U : (__Vtemp_29[((IData)(2U) 
                                            + (0xfU 
                                               & (((IData)(0x87U) 
                                                   * 
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                        >> 6U)))) 
                                                  >> 5U)))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0x87U) 
                                                * (1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                       >> 6U)))))))) 
                      | (__Vtemp_29[((IData)(1U) + 
                                     (0xfU & (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                         >> (0x1fU & ((IData)(0x87U) 
                                      * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U)))))));
    __Vtemp_30[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                        * (1U & (~ 
                                                 (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U))))))
                        ? 0U : (__Vtemp_29[((IData)(3U) 
                                            + (0xfU 
                                               & (((IData)(0x87U) 
                                                   * 
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                        >> 6U)))) 
                                                  >> 5U)))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0x87U) 
                                                * (1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                       >> 6U)))))))) 
                      | (__Vtemp_29[((IData)(2U) + 
                                     (0xfU & (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                         >> (0x1fU & ((IData)(0x87U) 
                                      * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U)))))));
    __Vtemp_30[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                        * (1U & (~ 
                                                 (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U))))))
                        ? 0U : (__Vtemp_29[((IData)(4U) 
                                            + (0xfU 
                                               & (((IData)(0x87U) 
                                                   * 
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                        >> 6U)))) 
                                                  >> 5U)))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0x87U) 
                                                * (1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                       >> 6U)))))))) 
                      | (__Vtemp_29[((IData)(3U) + 
                                     (0xfU & (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                         >> (0x1fU & ((IData)(0x87U) 
                                      * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U)))))));
    __Vtemp_30[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                        * (1U & (~ 
                                                 (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U))))))
                        ? 0U : (__Vtemp_29[((IData)(5U) 
                                            + (0xfU 
                                               & (((IData)(0x87U) 
                                                   * 
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                        >> 6U)))) 
                                                  >> 5U)))] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & ((IData)(0x87U) 
                                                * (1U 
                                                   & (~ 
                                                      (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                       >> 6U)))))))) 
                      | (__Vtemp_29[((IData)(4U) + 
                                     (0xfU & (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                         >> (0x1fU & ((IData)(0x87U) 
                                      * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  >> 6U)))))));
    if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U))))))) {
        vlSelf->__Vcellout__div_sqrt_arb__data_out[0U] 
            = __Vtemp_30[0U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_30[1U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_30[2U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_30[3U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_30[4U]);
    } else {
        vlSelf->__Vcellout__div_sqrt_arb__data_out[0U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[0U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[1U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[2U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[3U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[4U]);
    }
    vlSelf->__PVT__per_core_valid_out = ((8U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                >> 4U)) 
                                         | ((4U & (
                                                   vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 4U)) 
                                            | ((2U 
                                                & ((vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    | vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U]) 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 6U)))));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelf->__PVT__per_core_valid_out));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hb53b6836_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h5aeac9b0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_he2a2cbb9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hac250f9e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h94f13cd0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h98c0c7fe_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h9d1ff2c4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h9c22b2c5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hda8979cf_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h18e29c25_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hfbbfe722_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h15170be7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_ha9758192_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_h6a925727_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vrtlsim_shim__ConstPool__TABLE_hbf1666d4_0;

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__1(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__1\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    __Vtableidx2 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 8U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                     >> 0xdU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                             >> 0x11U))));
    vlSelf->__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_hb53b6836_0
        [__Vtableidx2];
    vlSelf->__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h5aeac9b0_0
        [__Vtableidx2];
    vlSelf->__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_he2a2cbb9_0
        [__Vtableidx2];
    vlSelf->__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_hac250f9e_0
        [__Vtableidx2];
    vlSelf->__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h94f13cd0_0
        [__Vtableidx2];
    vlSelf->__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_h98c0c7fe_0
        [__Vtableidx2];
    vlSelf->__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_h9d1ff2c4_0
        [__Vtableidx2];
    vlSelf->__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_h9c22b2c5_0
        [__Vtableidx2];
    vlSelf->__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_hda8979cf_0
        [__Vtableidx2];
    vlSelf->__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_h18e29c25_0
        [__Vtableidx2];
    vlSelf->__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_hfbbfe722_0
        [__Vtableidx2];
    vlSelf->__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h15170be7_0
        [__Vtableidx2];
    vlSelf->__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_ha9758192_0
        [__Vtableidx2];
    vlSelf->__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_h6a925727_0
        [__Vtableidx2];
    vlSelf->__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_hbf1666d4_0
        [__Vtableidx2];
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
        }
    }
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U])))
                                                            : 
                                                           (0xffffffff00000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))))));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[1U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U])))
                                                             : 
                                                            (0xffffffff00000000ULL 
                                                             | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))))) 
                                                           >> 0x20U));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[2U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U])))
                                                            : 
                                                           (0xffffffff00000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))))));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[3U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U])))
                                                             : 
                                                            (0xffffffff00000000ULL 
                                                             | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))))) 
                                                           >> 0x20U));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[4U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U])))
                                                            : 
                                                           (0xffffffff00000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))))));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[5U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U])))
                                                             : 
                                                            (0xffffffff00000000ULL 
                                                             | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))))) 
                                                           >> 0x20U));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[6U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U])))
                                                            : 
                                                           (0xffffffff00000000ULL 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))))));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[7U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U])))
                                                             : 
                                                            (0xffffffff00000000ULL 
                                                             | (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))))) 
                                                           >> 0x20U));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[0U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U])))
                                                            : 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         vlSelf->__PVT__operands
                                                                         [0U][0U])));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[1U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U])))
                                                             : 
                                                            VL_EXTENDS_QI(64,32, 
                                                                          vlSelf->__PVT__operands
                                                                          [0U][0U])) 
                                                           >> 0x20U));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[2U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U])))
                                                            : 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         vlSelf->__PVT__operands
                                                                         [0U][2U])));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[3U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U])))
                                                             : 
                                                            VL_EXTENDS_QI(64,32, 
                                                                          vlSelf->__PVT__operands
                                                                          [0U][2U])) 
                                                           >> 0x20U));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[4U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][4U])))
                                                            : 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         vlSelf->__PVT__operands
                                                                         [0U][4U])));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[5U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][4U])))
                                                             : 
                                                            VL_EXTENDS_QI(64,32, 
                                                                          vlSelf->__PVT__operands
                                                                          [0U][4U])) 
                                                           >> 0x20U));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[6U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][7U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][6U])))
                                                            : 
                                                           VL_EXTENDS_QI(64,32, 
                                                                         vlSelf->__PVT__operands
                                                                         [0U][6U])));
    vlSelf->__PVT__g_fncp__DOT__result_fmvx[7U] = (IData)(
                                                          (((0x1000U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][7U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][6U])))
                                                             : 
                                                            VL_EXTENDS_QI(64,32, 
                                                                          vlSelf->__PVT__operands
                                                                          [0U][6U])) 
                                                           >> 0x20U));
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                            & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                              & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelf->__PVT__is_div)) 
                                                & (IData)(__VdfgRegularize_h6d72849d_0_0));
    if (((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
         [2U])) {
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
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else if ((1U & (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                      [2U] | (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out)))) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
            = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_fpu_dpi__N4_O3___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__2(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___nba_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__2\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((0U != (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelf->__PVT__per_core_valid_out)));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xeU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (1U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[0U] 
        = ((0xbU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
            [0U]) | (4U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 1U)));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xeU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | (0U != (3U & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[1U] 
        = ((0xbU & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
            [1U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                           >> 2U)))) 
                     << 2U));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[0U] 
        = vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    vlSelf->__PVT__g_fcvt__DOT__fcvt_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     >> 2U))));
    vlSelf->__Vcellinp__div_sqrt_arb__ready_out = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                   & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                      >> 1U));
    vlSelf->__PVT__g_fma__DOT__fma_ready = (1U & ((~ 
                                                   (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)) 
                                                  | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                     & (IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))));
    vlSelf->__PVT__g_fncp__DOT__fncp_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 7U)) 
                                               | ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                  & ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     >> 3U))));
    __Vtemp_14[0U] = (0x40U | ((0xffffff80U & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                               << 2U)) 
                               | ((0x3eU & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                            << 1U)) 
                                  | (1U & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                           >> 5U)))));
    __Vtemp_14[1U] = (((0x7cU & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                 << 2U)) | (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                            >> 0x1eU)) 
                      | (0xffffff80U & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                        << 2U)));
    __Vtemp_14[2U] = (((0x7cU & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                 << 2U)) | (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                            >> 0x1eU)) 
                      | (0xffffff80U & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                        << 2U)));
    __Vtemp_14[3U] = (((0x7cU & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                 << 2U)) | (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                            >> 0x1eU)) 
                      | (0xffffff80U & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                        << 2U)));
    __Vtemp_14[4U] = ((vlSelf->__Vcellout__div_sqrt_arb__data_out[0U] 
                       << 7U) | ((0x7cU & (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                           << 2U)) 
                                 | (vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                    >> 0x1eU)));
    __Vtemp_14[5U] = ((vlSelf->__Vcellout__div_sqrt_arb__data_out[0U] 
                       >> 0x19U) | (vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
                                    << 7U));
    __Vtemp_14[6U] = ((vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
                       >> 0x19U) | (vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
                                    << 7U));
    __Vtemp_14[7U] = ((vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
                       >> 0x19U) | (vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
                                    << 7U));
    __Vtemp_14[8U] = (0x100000U | ((0xffe00000U & (
                                                   vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                   << 0x10U)) 
                                   | ((0xf8000U & (
                                                   vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                   << 0xfU)) 
                                      | ((0x4000U & 
                                          (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                           << 9U)) 
                                         | ((vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
                                             >> 0x19U) 
                                            | (vlSelf->__Vcellout__div_sqrt_arb__data_out[4U] 
                                               << 7U))))));
    __Vtemp_14[9U] = (((0x1f0000U & (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                     << 0x10U)) | (
                                                   vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                   >> 0x10U)) 
                      | (0xffe00000U & (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                        << 0x10U)));
    __Vtemp_14[0xaU] = (((0x1f0000U & (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 0x10U)) | 
                         (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                          >> 0x10U)) | (0xffe00000U 
                                        & (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                           << 0x10U)));
    __Vtemp_14[0xbU] = (((0x1f0000U & (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 0x10U)) | 
                         (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                          >> 0x10U)) | (0xffe00000U 
                                        & (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                           << 0x10U)));
    __Vtemp_14[0xcU] = ((0xf0000000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                        << 0x17U)) 
                        | ((0x8000000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                          << 0x16U)) 
                           | ((0x7c00000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                             << 0x16U)) 
                              | ((0x200000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                               << 0xfU)) 
                                 | ((0x1f0000U & (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                  << 0x10U)) 
                                    | (vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       >> 0x10U))))));
    __Vtemp_14[0xdU] = (((0xf800000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                        << 0x17U)) 
                         | (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                            >> 9U)) | (0xf0000000U 
                                       & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                          << 0x17U)));
    __Vtemp_14[0xeU] = (((0xf800000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                        << 0x17U)) 
                         | (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                            >> 9U)) | (0xf0000000U 
                                       & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                          << 0x17U)));
    __Vtemp_14[0xfU] = (((0xf800000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                        << 0x17U)) 
                         | (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                            >> 9U)) | (0xf0000000U 
                                       & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                          << 0x17U)));
    __Vtemp_14[0x10U] = ((0xf800000U & (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                        << 0x17U)) 
                         | (vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                            >> 9U));
    if ((0x21bU >= (0x3ffU & ((IData)(0x87U) * (3U 
                                                & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                [1U]))))) {
        __Vtemp_17[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_14[((IData)(1U) 
                                                + (0x1fU 
                                                   & (((IData)(0x87U) 
                                                       * 
                                                       (3U 
                                                        & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_14[(0x1fU & (((IData)(0x87U) 
                                                   * 
                                                   (3U 
                                                    & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                    [1U])) 
                                                  >> 5U))] 
                             >> (0x1fU & ((IData)(0x87U) 
                                          * (3U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_17[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_14[((IData)(2U) 
                                                + (0x1fU 
                                                   & (((IData)(0x87U) 
                                                       * 
                                                       (3U 
                                                        & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_14[((IData)(1U) 
                                         + (0x1fU & 
                                            (((IData)(0x87U) 
                                              * (3U 
                                                 & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x87U) 
                                          * (3U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_17[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_14[((IData)(3U) 
                                                + (0x1fU 
                                                   & (((IData)(0x87U) 
                                                       * 
                                                       (3U 
                                                        & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_14[((IData)(2U) 
                                         + (0x1fU & 
                                            (((IData)(0x87U) 
                                              * (3U 
                                                 & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x87U) 
                                          * (3U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_17[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_14[((IData)(4U) 
                                                + (0x1fU 
                                                   & (((IData)(0x87U) 
                                                       * 
                                                       (3U 
                                                        & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_14[((IData)(3U) 
                                         + (0x1fU & 
                                            (((IData)(0x87U) 
                                              * (3U 
                                                 & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x87U) 
                                          * (3U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
        __Vtemp_17[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U]))))
                            ? 0U : (__Vtemp_14[((IData)(5U) 
                                                + (0x1fU 
                                                   & (((IData)(0x87U) 
                                                       * 
                                                       (3U 
                                                        & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                        [1U])) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x87U) 
                                            * (3U & 
                                               vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                               [1U])))))) 
                          | (__Vtemp_14[((IData)(4U) 
                                         + (0x1fU & 
                                            (((IData)(0x87U) 
                                              * (3U 
                                                 & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                                 [1U])) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x87U) 
                                          * (3U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                                             [1U])))));
    } else {
        __Vtemp_17[0U] = vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[0U];
        __Vtemp_17[1U] = vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[1U];
        __Vtemp_17[2U] = vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[2U];
        __Vtemp_17[3U] = vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[3U];
        __Vtemp_17[4U] = vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[4U];
    }
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[0U] 
        = __Vtemp_17[0U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[1U] 
        = __Vtemp_17[1U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[2U] 
        = __Vtemp_17[2U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[3U] 
        = __Vtemp_17[3U];
    vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in[4U] 
        = ((0x180U & (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr
                      [1U] << 7U)) | (0x7fU & __Vtemp_17[4U]));
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__g_scan_l__BRA__2__KET____DOT__g_scan_s__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                  [1U] >> 1U)) | (1U & vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v
                                  [1U]));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_fire = ((IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_valid) 
                                             & (IData)(vlSelf->__PVT__g_fcvt__DOT__fcvt_ready));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_ready = (1U & 
                                              ((~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->__Vcellinp__div_sqrt_arb__ready_out) 
                                                  & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 6U))));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_ready = (1U 
                                                & ((~ 
                                                    (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                     >> 6U)) 
                                                   | ((IData)(vlSelf->__Vcellinp__div_sqrt_arb__ready_out) 
                                                      & ((~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)) 
                                                         & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                            >> 6U)))));
    vlSelf->__PVT__g_fma__DOT__fma_fire = ((IData)(vlSelf->__PVT__g_fma__DOT__fma_valid) 
                                           & (IData)(vlSelf->__PVT__g_fma__DOT__fma_ready));
    vlSelf->__PVT__g_fncp__DOT__fncp_fire = ((IData)(vlSelf->__PVT__g_fncp__DOT__fncp_valid) 
                                             & (IData)(vlSelf->__PVT__g_fncp__DOT__fncp_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | (IData)(vlSelf->__Vlvbound_h5f715eae__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | (IData)(vlSelf->__Vlvbound_h2fd415f9__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | (IData)(vlSelf->__Vlvbound_ha7d3bea0__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | (IData)(vlSelf->__Vlvbound_hcca9137e__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_itof);
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_utof);
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi);
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[0U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou);
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[0U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[0U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | (IData)(vlSelf->__Vlvbound_hed910a88__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((IData)(vlSelf->__Vlvbound_h5f715eae__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((IData)(vlSelf->__Vlvbound_h2fd415f9__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((IData)(vlSelf->__Vlvbound_ha7d3bea0__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((IData)(vlSelf->__Vlvbound_hcca9137e__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[2U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                            >> 5U));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[1U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[2U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((IData)(vlSelf->__Vlvbound_hed910a88__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[4U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((IData)(vlSelf->__Vlvbound_h5f715eae__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[4U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((IData)(vlSelf->__Vlvbound_h2fd415f9__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[4U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((IData)(vlSelf->__Vlvbound_ha7d3bea0__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[4U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((IData)(vlSelf->__Vlvbound_hcca9137e__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[4U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[4U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[2U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[4U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((IData)(vlSelf->__Vlvbound_hed910a88__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[6U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__g_fcvt__DOT__result_itof[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_itof__32__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5f715eae__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_itof) 
                                               | ((IData)(vlSelf->__Vlvbound_h5f715eae__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[6U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__g_fcvt__DOT__result_utof[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_utof__33__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h2fd415f9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_utof) 
                                               | ((IData)(vlSelf->__Vlvbound_h2fd415f9__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[6U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftoi[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_ha7d3bea0__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi) 
                                               | ((IData)(vlSelf->__Vlvbound_ha7d3bea0__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xdU)), 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[6U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__g_fcvt__DOT__result_ftou[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_ftou__35__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_hcca9137e__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_ftou) 
                                               | ((IData)(vlSelf->__Vlvbound_hcca9137e__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__g_fcvt__DOT__fcvt_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[6U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__g_fcvt__DOT__result_f2f[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_f2f__36__result 
                                                          >> 0x20U));
    if (vlSelf->__PVT__is_itof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_itof[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_itof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_utof) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_utof[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_utof 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftoi) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftoi[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_ftou) {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = vlSelf->__PVT__g_fcvt__DOT__result_ftou[6U];
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fcvt__DOT__fflags_ftou 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__g_fcvt__DOT__result_fcvt[3U] 
            = ((IData)(vlSelf->__PVT__is_f2f) ? vlSelf->__PVT__g_fcvt__DOT__result_f2f[6U]
                : 0U);
        vlSelf->__Vlvbound_hed910a88__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = ((0x7fffU 
                                                & vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt) 
                                               | ((IData)(vlSelf->__Vlvbound_hed910a88__0) 
                                                  << 0xfU));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_fire = ((IData)(vlSelf->__PVT__g_fdiv__DOT__fdiv_valid) 
                                             & (IData)(vlSelf->__PVT__g_fdiv__DOT__fdiv_ready));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire = ((IData)(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid) 
                                               & (IData)(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_ready));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | (IData)(vlSelf->__Vlvbound_h36ca9328__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | (IData)(vlSelf->__Vlvbound_h43e316fc__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | (IData)(vlSelf->__Vlvbound_h26edecc4__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | (IData)(vlSelf->__Vlvbound_h5d205b05__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | (IData)(vlSelf->__Vlvbound_h9143e784__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xfffe0U 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | (IData)(vlSelf->__Vlvbound_hb471f107__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xfffe0U 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | (IData)(vlSelf->__Vlvbound_hd54c3ea3__0));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fadd);
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fsub);
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fmul);
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fmadd);
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fmsub);
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd);
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[0U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub);
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[0U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xfffe0U 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | (IData)(vlSelf->__Vlvbound_h21e41663__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h36ca9328__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((IData)(vlSelf->__Vlvbound_h43e316fc__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((IData)(vlSelf->__Vlvbound_h26edecc4__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((IData)(vlSelf->__Vlvbound_h5d205b05__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((IData)(vlSelf->__Vlvbound_h9143e784__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xffc1fU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((IData)(vlSelf->__Vlvbound_hb471f107__0) 
                                                   << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xffc1fU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((IData)(vlSelf->__Vlvbound_hd54c3ea3__0) 
                                                   << 5U));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                            >> 5U));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[2U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                            >> 5U));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[1U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xffc1fU 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((IData)(vlSelf->__Vlvbound_h21e41663__0) 
                                                << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[4U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h36ca9328__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[4U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((IData)(vlSelf->__Vlvbound_h43e316fc__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[4U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((IData)(vlSelf->__Vlvbound_h26edecc4__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((IData)(vlSelf->__Vlvbound_h5d205b05__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((IData)(vlSelf->__Vlvbound_h9143e784__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[4U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0xf83ffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((IData)(vlSelf->__Vlvbound_hb471f107__0) 
                                                   << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[4U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0xf83ffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((IData)(vlSelf->__Vlvbound_hd54c3ea3__0) 
                                                   << 0xaU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                            >> 0xaU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[4U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                            >> 0xaU));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[2U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0xf83ffU 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((IData)(vlSelf->__Vlvbound_h21e41663__0) 
                                                << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fadd[6U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__g_fma__DOT__result_fadd[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fadd__23__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h36ca9328__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = ((0x7fffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fadd) 
                                              | ((IData)(vlSelf->__Vlvbound_h36ca9328__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fsub[6U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__g_fma__DOT__result_fsub[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsub__24__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h43e316fc__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = ((0x7fffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fsub) 
                                              | ((IData)(vlSelf->__Vlvbound_h43e316fc__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmul[6U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__g_fma__DOT__result_fmul[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fmul__25__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h26edecc4__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = ((0x7fffU 
                                               & vlSelf->__PVT__g_fma__DOT__fflags_fmul) 
                                              | ((IData)(vlSelf->__Vlvbound_h26edecc4__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__g_fma__DOT__result_fmadd[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h5d205b05__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = ((0x7fffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmadd) 
                                               | ((IData)(vlSelf->__Vlvbound_h5d205b05__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__g_fma__DOT__result_fmsub[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9143e784__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = ((0x7fffU 
                                                & vlSelf->__PVT__g_fma__DOT__fflags_fmsub) 
                                               | ((IData)(vlSelf->__Vlvbound_h9143e784__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[6U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmadd[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hb471f107__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = ((0x7fffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmadd) 
                                                | ((IData)(vlSelf->__Vlvbound_hb471f107__0) 
                                                   << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__g_fma__DOT__fma_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[6U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__g_fma__DOT__result_fnmsub[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                            >> 0x20U));
    vlSelf->__Vlvbound_hd54c3ea3__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = ((0x7fffU 
                                                 & vlSelf->__PVT__g_fma__DOT__fflags_fnmsub) 
                                                | ((IData)(vlSelf->__Vlvbound_hd54c3ea3__0) 
                                                   << 0xfU));
    if (vlSelf->__PVT__is_fadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fadd[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fsub[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmul) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmul[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmul 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmadd[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fmsub[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fmsub 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmadd) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmadd[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmadd 
                                            >> 0xfU));
    } else if (vlSelf->__PVT__is_fnmsub) {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 
            vlSelf->__PVT__g_fma__DOT__result_fnmsub[6U];
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 
                                           (vlSelf->__PVT__g_fma__DOT__fflags_fnmsub 
                                            >> 0xfU));
    } else {
        vlSelf->__PVT__g_fma__DOT__result_fma[3U] = 0U;
        vlSelf->__Vlvbound_h21e41663__0 = (0x1fU & 0U);
    }
    vlSelf->__PVT__g_fma__DOT__fflags_fma = ((0x7fffU 
                                              & vlSelf->__PVT__g_fma__DOT__fflags_fma) 
                                             | ((IData)(vlSelf->__Vlvbound_h21e41663__0) 
                                                << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | (IData)(vlSelf->__Vlvbound_h4818f248__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | (IData)(vlSelf->__Vlvbound_hef2be428__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xfffe0U 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | (IData)(vlSelf->__Vlvbound_hb3506ccf__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | (IData)(vlSelf->__Vlvbound_h54e55b46__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | (IData)(vlSelf->__Vlvbound_h75b9d2ef__0));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[1U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((IData)(vlSelf->__Vlvbound_h4818f248__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((IData)(vlSelf->__Vlvbound_hef2be428__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xffc1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((IData)(vlSelf->__Vlvbound_hb3506ccf__0) 
                                                 << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((IData)(vlSelf->__Vlvbound_h54e55b46__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((IData)(vlSelf->__Vlvbound_h75b9d2ef__0) 
                                                  << 5U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[3U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[4U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[4U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((IData)(vlSelf->__Vlvbound_h4818f248__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[4U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((IData)(vlSelf->__Vlvbound_hef2be428__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[4U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[5U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0xf83ffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((IData)(vlSelf->__Vlvbound_hb3506ccf__0) 
                                                 << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[4U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((IData)(vlSelf->__Vlvbound_h54e55b46__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[4U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((IData)(vlSelf->__Vlvbound_h75b9d2ef__0) 
                                                  << 0xaU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[5U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[4U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[6U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__g_fncp__DOT__result_fclss[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fclss__37__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fle[6U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__g_fncp__DOT__result_fle[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fle__38__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h4818f248__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = ((0x7fffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle) 
                                              | ((IData)(vlSelf->__Vlvbound_h4818f248__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_flt[6U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__g_fncp__DOT__result_flt[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_flt__39__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hef2be428__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = ((0x7fffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt) 
                                              | ((IData)(vlSelf->__Vlvbound_hef2be428__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                    >> 0xcU)), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_feq[6U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__g_fncp__DOT__result_feq[7U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_feq__40__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hb3506ccf__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = ((0x7fffU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq) 
                                              | ((IData)(vlSelf->__Vlvbound_hb3506ccf__0) 
                                                 << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[6U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmin[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmin__41__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h54e55b46__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = ((0x7fffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmin) 
                                               | ((IData)(vlSelf->__Vlvbound_h54e55b46__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[6U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__g_fncp__DOT__result_fmax[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fmax__42__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h75b9d2ef__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = ((0x7fffU 
                                                & vlSelf->__PVT__g_fncp__DOT__fflags_fmax) 
                                               | ((IData)(vlSelf->__Vlvbound_h75b9d2ef__0) 
                                                  << 0xfU));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnj[7U] = (IData)(
                                                           (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                            >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                             >> 0x20U));
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__g_fncp__DOT__fncp_fire, 
                                                                   (1U 
                                                                    & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                       >> 0xcU)), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                   (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[6U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                             >> 0x20U));
    vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                           >> 5U))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                            >> 5U)))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                           >> 0xaU))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                           >> 0xaU)))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                           >> 0xfU))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt 
                                      >> 0x13U))) << 4U));
    }
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xfffe0U 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | (IData)(vlSelf->__Vlvbound_h9f153602__0));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[0U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xffc1fU 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((IData)(vlSelf->__Vlvbound_h9f153602__0) 
                                                  << 5U));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[1U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][5U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[4U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[5U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0xf83ffU 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((IData)(vlSelf->__Vlvbound_h9f153602__0) 
                                                  << 0xaU));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[2U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__g_fdiv__DOT__fdiv_fire, 
                                                                 (1U 
                                                                  & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                     >> 0xcU)), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), 
                                                                 (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][7U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[6U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv[7U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h9f153602__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = ((0x7fffU 
                                                & vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv) 
                                               | ((IData)(vlSelf->__Vlvbound_h9f153602__0) 
                                                  << 0xfU));
    vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r[3U] = 
        vlSelf->__PVT__g_fdiv__DOT__result_fdiv[6U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xfffe0U 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | (IData)(vlSelf->__Vlvbound_h301678fe__0));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[0U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[0U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xffc1fU 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((IData)(vlSelf->__Vlvbound_h301678fe__0) 
                                                    << 5U));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[1U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[2U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][5U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][4U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[4U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[5U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0xf83ffU 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((IData)(vlSelf->__Vlvbound_h301678fe__0) 
                                                    << 0xaU));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[2U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[4U];
    Vrtlsim_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire, 
                                                                  (1U 
                                                                   & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                      >> 0xcU)), 
                                                                  (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][7U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][6U]))), (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[6U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[7U] = (IData)(
                                                            (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                             >> 0x20U));
    vlSelf->__Vlvbound_h301678fe__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = ((0x7fffU 
                                                  & vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt) 
                                                 | ((IData)(vlSelf->__Vlvbound_h301678fe__0) 
                                                    << 0xfU));
    vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r[3U] 
        = vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt[6U];
    vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fma__DOT__fflags_fma)));
    }
    vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] = vlSelf->__Vxrand_hbe6bf8db__0[0U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] = vlSelf->__Vxrand_hbe6bf8db__0[1U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] = vlSelf->__Vxrand_hbe6bf8db__0[2U];
    vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] = vlSelf->__Vxrand_hbe6bf8db__0[3U];
    vlSelf->__PVT__g_fncp__DOT__fflags_fncp = vlSelf->__Vxrand_h89e21229__0;
    if (((((((((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm)))) {
        if ((0U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fle[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnj[6U];
            }
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_fle);
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)(vlSelf->__Vlvbound_hd08175d0__0));
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                  >> 5U));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__0) 
                      << 5U));
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                  >> 0xaU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__0) 
                      << 0xaU));
            vlSelf->__Vlvbound_hd08175d0__0 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_fle 
                                                  >> 0xfU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__0) 
                      << 0xfU));
        } else if ((1U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_flt[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjn[6U];
            }
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_flt);
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)(vlSelf->__Vlvbound_hd08175d0__1));
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                  >> 5U));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__1) 
                      << 5U));
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                  >> 0xaU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__1) 
                      << 0xaU));
            vlSelf->__Vlvbound_hd08175d0__1 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_flt 
                                                  >> 0xfU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__1) 
                      << 0xfU));
        } else if ((2U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
            if (vlSelf->__PVT__is_fcmp) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_feq[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fsgnjx[6U];
            }
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & vlSelf->__PVT__g_fncp__DOT__fflags_feq);
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | (IData)(vlSelf->__Vlvbound_hd08175d0__2));
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                  >> 5U));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__2) 
                      << 5U));
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                  >> 0xaU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__2) 
                      << 0xaU));
            vlSelf->__Vlvbound_hd08175d0__2 = (0x1fU 
                                               & (vlSelf->__PVT__g_fncp__DOT__fflags_feq 
                                                  >> 0xfU));
            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__2) 
                      << 0xfU));
        } else {
            if ((3U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fclss[6U];
            } else if ((4U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvx[6U];
            } else if ((5U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmvf[6U];
            } else if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmin[6U];
            } else {
                vlSelf->__PVT__g_fncp__DOT__result_fncp[0U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[0U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[1U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[2U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[2U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[4U];
                vlSelf->__PVT__g_fncp__DOT__result_fncp[3U] 
                    = vlSelf->__PVT__g_fncp__DOT__result_fmax[6U];
            }
            if ((3U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                if ((4U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                    if ((5U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                        if ((6U == (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_frm))) {
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fmin);
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_hd08175d0__3));
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                            >> 5U));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__3) 
                                      << 5U));
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                            >> 0xaU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__3) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_hd08175d0__3 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmin 
                                            >> 0xfU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__3) 
                                      << 0xfU));
                        } else {
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fmax);
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xfffe0U & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | (IData)(vlSelf->__Vlvbound_hd08175d0__4));
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                            >> 5U));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xffc1fU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__4) 
                                      << 5U));
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                            >> 0xaU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0xf83ffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__4) 
                                      << 0xaU));
                            vlSelf->__Vlvbound_hd08175d0__4 
                                = (0x1fU & (vlSelf->__PVT__g_fncp__DOT__fflags_fmax 
                                            >> 0xfU));
                            vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                = ((0x7fffU & vlSelf->__PVT__g_fncp__DOT__fflags_fncp) 
                                   | ((IData)(vlSelf->__Vlvbound_hd08175d0__4) 
                                      << 0xfU));
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                           >> 5U))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                         >> 5U)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                            >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                           >> 5U))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                         >> 5U)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                            >> 5U)))));
    }
    vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                           >> 5U))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                         >> 5U)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                            >> 5U)))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                           >> 0xaU))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                           >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                           >> 0xaU))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                           >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                           >> 0xaU))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                           >> 0xaU)))));
    }
    vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged = 0U;
    if ((0x100000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                           | vlSelf->__PVT__g_fncp__DOT__fflags_fncp)));
    }
    if ((0x200000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                           >> 5U))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                         >> 5U)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | (0x7fffff0U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                            >> 5U)))));
    }
    if ((0x400000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                           >> 0xaU))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffeU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffffcU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x3ffff8U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                        >> 0xaU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((0xfffffff0U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                           | (0x3ffff0U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                           >> 0xaU)))));
    }
    if ((0x800000U & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU])) {
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                           >> 0xfU))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fma__DOT__fflags_fma 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                           >> 0xfU))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                           >> 0xfU))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt 
                                      >> 0x13U))) << 4U));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                        | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                           >> 0xfU))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffeU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fffcU & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
                        | (0x1fff8U & (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                       >> 0xfU)))));
        vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | (vlSelf->__PVT__g_fncp__DOT__fflags_fncp 
                                      >> 0x13U))) << 4U));
    }
}
