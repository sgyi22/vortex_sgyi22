// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_fpu_dpi__N4_O3.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    vlSelf->__Vxrand_h89e21229__0 = (0xfffffU & VL_RAND_RESET_I(20));
    VL_RAND_RESET_W(128, vlSelf->__Vxrand_hbe6bf8db__0);
    VL_RAND_RESET_W(135, __Vtemp_2);
    vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[0U] 
        = __Vtemp_2[0U];
    vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[1U] 
        = __Vtemp_2[1U];
    vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[2U] 
        = __Vtemp_2[2U];
    vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[3U] 
        = __Vtemp_2[3U];
    vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0[4U] 
        = (0x7fU & __Vtemp_2[4U]);
    VL_RAND_RESET_W(135, __Vtemp_4);
    vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[0U] 
        = __Vtemp_4[0U];
    vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[1U] 
        = __Vtemp_4[1U];
    vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[2U] 
        = __Vtemp_4[2U];
    vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[3U] 
        = __Vtemp_4[3U];
    vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0[4U] 
        = (0x7fU & __Vtemp_4[4U]);
    vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fncp__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->g_fncp__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 
        = (1U & VL_RAND_RESET_I(1));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___ctor_var_reset(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vxrand_h89e21229__0 = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(128, vlSelf->__Vxrand_hbe6bf8db__0);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->valid_in = VL_RAND_RESET_I(1);
    vlSelf->ready_in = VL_RAND_RESET_I(1);
    vlSelf->mask_in = VL_RAND_RESET_I(4);
    vlSelf->tag_in = VL_RAND_RESET_I(1);
    vlSelf->op_type = VL_RAND_RESET_I(4);
    vlSelf->fmt = VL_RAND_RESET_I(2);
    vlSelf->frm = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->dataa);
    VL_RAND_RESET_W(128, vlSelf->datab);
    VL_RAND_RESET_W(128, vlSelf->datac);
    VL_RAND_RESET_W(128, vlSelf->result);
    vlSelf->has_fflags = VL_RAND_RESET_I(1);
    vlSelf->fflags = VL_RAND_RESET_I(5);
    vlSelf->tag_out = VL_RAND_RESET_I(1);
    vlSelf->ready_out = VL_RAND_RESET_I(1);
    vlSelf->valid_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__per_core_valid_out = VL_RAND_RESET_I(4);
    vlSelf->__PVT__core_select = VL_RAND_RESET_I(2);
    vlSelf->__PVT__is_fadd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fsub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fmul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fmadd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fmsub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fnmadd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fnmsub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_fcmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_itof = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_utof = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_ftoi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_ftou = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_f2f = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__operands[__Vi0]);
    }
    vlSelf->__Vcellinp__div_sqrt_arb__ready_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(135, vlSelf->__Vcellout__div_sqrt_arb__data_out);
    VL_RAND_RESET_W(128, vlSelf->__PVT__g_fma__DOT__result_fma);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fma__DOT__result_fadd);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fma__DOT__result_fsub);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fma__DOT__result_fmul);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fma__DOT__result_fmadd);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fma__DOT__result_fmsub);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fma__DOT__result_fnmadd);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fma__DOT__result_fnmsub);
    vlSelf->__PVT__g_fma__DOT__fflags_fma = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fflags_fadd = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fflags_fsub = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fflags_fmul = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fflags_fmadd = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fflags_fmsub = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fflags_fnmadd = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fflags_fnmsub = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fma__DOT__fma_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fma__DOT__fma_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fma__DOT__fma_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fma__DOT_____05Ffflags_merged = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->__PVT__g_fdiv__DOT__result_fdiv_r);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fdiv__DOT__result_fdiv);
    vlSelf->__PVT__g_fdiv__DOT__fflags_fdiv = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fdiv__DOT__fdiv_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fdiv__DOT__fdiv_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fdiv__DOT__fdiv_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fdiv__DOT_____05Ffflags_merged = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt_r);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fsqrt__DOT__result_fsqrt);
    vlSelf->__PVT__g_fsqrt__DOT__fflags_fsqrt = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fsqrt__DOT_____05Ffflags_merged = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->__PVT__g_fcvt__DOT__result_fcvt);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fcvt__DOT__result_itof);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fcvt__DOT__result_utof);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fcvt__DOT__result_ftoi);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fcvt__DOT__result_ftou);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fcvt__DOT__result_f2f);
    vlSelf->__PVT__g_fcvt__DOT__fflags_fcvt = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fcvt__DOT__fflags_itof = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fcvt__DOT__fflags_utof = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftoi = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fcvt__DOT__fflags_ftou = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fcvt__DOT__fcvt_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fcvt__DOT__fcvt_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fcvt__DOT__fcvt_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fcvt__DOT_____05Ffflags_merged = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(128, vlSelf->__PVT__g_fncp__DOT__result_fncp);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fclss);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_flt);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fle);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_feq);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fmin);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fmax);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fsgnj);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fsgnjn);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fsgnjx);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fmvx);
    VL_RAND_RESET_W(256, vlSelf->__PVT__g_fncp__DOT__result_fmvf);
    vlSelf->__PVT__g_fncp__DOT__fflags_fncp = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fncp__DOT__fflags_flt = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fncp__DOT__fflags_fle = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fncp__DOT__fflags_feq = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fncp__DOT__fflags_fmin = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fncp__DOT__fflags_fmax = VL_RAND_RESET_I(20);
    vlSelf->__PVT__g_fncp__DOT__fncp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fncp__DOT__fncp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fncp__DOT__fncp_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__g_fncp__DOT_____05Ffflags_merged = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h36ca9328__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h43e316fc__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h26edecc4__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h5d205b05__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h9143e784__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hb471f107__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hd54c3ea3__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h21e41663__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h9f153602__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h301678fe__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h5f715eae__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h2fd415f9__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_ha7d3bea0__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hcca9137e__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hed910a88__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h4818f248__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hef2be428__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hb3506ccf__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h54e55b46__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_h75b9d2ef__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hd08175d0__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hd08175d0__1 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hd08175d0__2 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hd08175d0__3 = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hd08175d0__4 = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(135, vlSelf->div_sqrt_arb__DOT____Vxrand_h8fdbc47e__0);
    VL_RAND_RESET_W(135, vlSelf->rsp_arb__DOT____Vxrand_h8fdbc47e__0);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(137, vlSelf->rsp_arb__DOT____Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__g_scan_l__BRA__2__KET____DOT__g_scan_s__BRA__0__KET____DOT__vs = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(137, vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r);
    VL_RAND_RESET_W(137, vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out = VL_RAND_RESET_I(1);
    vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 = VL_RAND_RESET_I(1);
    vlSelf->g_fma__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(540, vlSelf->__PVT__g_fma__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h30a77c0a__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_he07d8e8d__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fma__DOT__shift_reg__DOT____Vlvbound_h42e9b2ab__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 = VL_RAND_RESET_I(1);
    vlSelf->g_fdiv__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2025, vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_hb89a3195__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h7e689713__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fdiv__DOT__shift_reg__DOT____Vlvbound_h48371995__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 = VL_RAND_RESET_I(1);
    vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1350, vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h10d88837__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_hf0af6e36__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fsqrt__DOT__shift_reg__DOT____Vlvbound_h6b839c03__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 = VL_RAND_RESET_I(1);
    vlSelf->g_fcvt__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(675, vlSelf->__PVT__g_fcvt__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h78b5a936__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h895d7db8__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fcvt__DOT__shift_reg__DOT____Vlvbound_h81e316b3__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fncp__DOT__shift_reg__DOT____Vxrand_h8df6f50b__1 = VL_RAND_RESET_I(1);
    vlSelf->g_fncp__DOT__shift_reg__DOT____Vxrand_h8df6f50b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(272, vlSelf->__PVT__g_fncp__DOT__shift_reg__DOT__g_shift_register__DOT__entries);
    vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_h432dbf4f__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_h49c93066__0 = VL_RAND_RESET_I(1);
    vlSelf->g_fncp__DOT__shift_reg__DOT____Vlvbound_hf82bc284__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_dpi_fadd__0__result = 0;
    vlSelf->__Vtask_dpi_fadd__0__fflags = 0;
    vlSelf->__Vtask_dpi_fsub__1__result = 0;
    vlSelf->__Vtask_dpi_fsub__1__fflags = 0;
    vlSelf->__Vtask_dpi_fmul__2__result = 0;
    vlSelf->__Vtask_dpi_fmul__2__fflags = 0;
    vlSelf->__Vtask_dpi_fmadd__3__result = 0;
    vlSelf->__Vtask_dpi_fmadd__3__fflags = 0;
    vlSelf->__Vtask_dpi_fmsub__4__result = 0;
    vlSelf->__Vtask_dpi_fmsub__4__fflags = 0;
    vlSelf->__Vtask_dpi_fnmadd__5__result = 0;
    vlSelf->__Vtask_dpi_fnmadd__5__fflags = 0;
    vlSelf->__Vtask_dpi_fnmsub__6__result = 0;
    vlSelf->__Vtask_dpi_fnmsub__6__fflags = 0;
    vlSelf->__Vtask_dpi_fdiv__7__result = 0;
    vlSelf->__Vtask_dpi_fdiv__7__fflags = 0;
    vlSelf->__Vtask_dpi_fsqrt__8__result = 0;
    vlSelf->__Vtask_dpi_fsqrt__8__fflags = 0;
    vlSelf->__Vtask_dpi_itof__9__result = 0;
    vlSelf->__Vtask_dpi_itof__9__fflags = 0;
    vlSelf->__Vtask_dpi_utof__10__result = 0;
    vlSelf->__Vtask_dpi_utof__10__fflags = 0;
    vlSelf->__Vtask_dpi_ftoi__11__result = 0;
    vlSelf->__Vtask_dpi_ftoi__11__fflags = 0;
    vlSelf->__Vtask_dpi_ftou__12__result = 0;
    vlSelf->__Vtask_dpi_ftou__12__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__13__result = 0;
    vlSelf->__Vtask_dpi_fclss__14__result = 0;
    vlSelf->__Vtask_dpi_fle__15__result = 0;
    vlSelf->__Vtask_dpi_fle__15__fflags = 0;
    vlSelf->__Vtask_dpi_flt__16__result = 0;
    vlSelf->__Vtask_dpi_flt__16__fflags = 0;
    vlSelf->__Vtask_dpi_feq__17__result = 0;
    vlSelf->__Vtask_dpi_feq__17__fflags = 0;
    vlSelf->__Vtask_dpi_fmin__18__result = 0;
    vlSelf->__Vtask_dpi_fmin__18__fflags = 0;
    vlSelf->__Vtask_dpi_fmax__19__result = 0;
    vlSelf->__Vtask_dpi_fmax__19__fflags = 0;
    vlSelf->__Vtask_dpi_fsgnj__20__result = 0;
    vlSelf->__Vtask_dpi_fsgnjn__21__result = 0;
    vlSelf->__Vtask_dpi_fsgnjx__22__result = 0;
    vlSelf->__Vtask_dpi_fadd__23__result = 0;
    vlSelf->__Vtask_dpi_fadd__23__fflags = 0;
    vlSelf->__Vtask_dpi_fsub__24__result = 0;
    vlSelf->__Vtask_dpi_fsub__24__fflags = 0;
    vlSelf->__Vtask_dpi_fmul__25__result = 0;
    vlSelf->__Vtask_dpi_fmul__25__fflags = 0;
    vlSelf->__Vtask_dpi_fmadd__26__result = 0;
    vlSelf->__Vtask_dpi_fmadd__26__fflags = 0;
    vlSelf->__Vtask_dpi_fmsub__27__result = 0;
    vlSelf->__Vtask_dpi_fmsub__27__fflags = 0;
    vlSelf->__Vtask_dpi_fnmadd__28__result = 0;
    vlSelf->__Vtask_dpi_fnmadd__28__fflags = 0;
    vlSelf->__Vtask_dpi_fnmsub__29__result = 0;
    vlSelf->__Vtask_dpi_fnmsub__29__fflags = 0;
    vlSelf->__Vtask_dpi_fdiv__30__result = 0;
    vlSelf->__Vtask_dpi_fdiv__30__fflags = 0;
    vlSelf->__Vtask_dpi_fsqrt__31__result = 0;
    vlSelf->__Vtask_dpi_fsqrt__31__fflags = 0;
    vlSelf->__Vtask_dpi_itof__32__result = 0;
    vlSelf->__Vtask_dpi_itof__32__fflags = 0;
    vlSelf->__Vtask_dpi_utof__33__result = 0;
    vlSelf->__Vtask_dpi_utof__33__fflags = 0;
    vlSelf->__Vtask_dpi_ftoi__34__result = 0;
    vlSelf->__Vtask_dpi_ftoi__34__fflags = 0;
    vlSelf->__Vtask_dpi_ftou__35__result = 0;
    vlSelf->__Vtask_dpi_ftou__35__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__36__result = 0;
    vlSelf->__Vtask_dpi_fclss__37__result = 0;
    vlSelf->__Vtask_dpi_fle__38__result = 0;
    vlSelf->__Vtask_dpi_fle__38__fflags = 0;
    vlSelf->__Vtask_dpi_flt__39__result = 0;
    vlSelf->__Vtask_dpi_flt__39__fflags = 0;
    vlSelf->__Vtask_dpi_feq__40__result = 0;
    vlSelf->__Vtask_dpi_feq__40__fflags = 0;
    vlSelf->__Vtask_dpi_fmin__41__result = 0;
    vlSelf->__Vtask_dpi_fmin__41__fflags = 0;
    vlSelf->__Vtask_dpi_fmax__42__result = 0;
    vlSelf->__Vtask_dpi_fmax__42__fflags = 0;
    vlSelf->__Vtask_dpi_fsgnj__43__result = 0;
    vlSelf->__Vtask_dpi_fsgnjn__44__result = 0;
    vlSelf->__Vtask_dpi_fsgnjx__45__result = 0;
    vlSelf->__Vtask_dpi_fadd__46__result = 0;
    vlSelf->__Vtask_dpi_fadd__46__fflags = 0;
    vlSelf->__Vtask_dpi_fsub__47__result = 0;
    vlSelf->__Vtask_dpi_fsub__47__fflags = 0;
    vlSelf->__Vtask_dpi_fmul__48__result = 0;
    vlSelf->__Vtask_dpi_fmul__48__fflags = 0;
    vlSelf->__Vtask_dpi_fmadd__49__result = 0;
    vlSelf->__Vtask_dpi_fmadd__49__fflags = 0;
    vlSelf->__Vtask_dpi_fmsub__50__result = 0;
    vlSelf->__Vtask_dpi_fmsub__50__fflags = 0;
    vlSelf->__Vtask_dpi_fnmadd__51__result = 0;
    vlSelf->__Vtask_dpi_fnmadd__51__fflags = 0;
    vlSelf->__Vtask_dpi_fnmsub__52__result = 0;
    vlSelf->__Vtask_dpi_fnmsub__52__fflags = 0;
    vlSelf->__Vtask_dpi_fdiv__53__result = 0;
    vlSelf->__Vtask_dpi_fdiv__53__fflags = 0;
    vlSelf->__Vtask_dpi_fsqrt__54__result = 0;
    vlSelf->__Vtask_dpi_fsqrt__54__fflags = 0;
    vlSelf->__Vtask_dpi_itof__55__result = 0;
    vlSelf->__Vtask_dpi_itof__55__fflags = 0;
    vlSelf->__Vtask_dpi_utof__56__result = 0;
    vlSelf->__Vtask_dpi_utof__56__fflags = 0;
    vlSelf->__Vtask_dpi_ftoi__57__result = 0;
    vlSelf->__Vtask_dpi_ftoi__57__fflags = 0;
    vlSelf->__Vtask_dpi_ftou__58__result = 0;
    vlSelf->__Vtask_dpi_ftou__58__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__59__result = 0;
    vlSelf->__Vtask_dpi_fclss__60__result = 0;
    vlSelf->__Vtask_dpi_fle__61__result = 0;
    vlSelf->__Vtask_dpi_fle__61__fflags = 0;
    vlSelf->__Vtask_dpi_flt__62__result = 0;
    vlSelf->__Vtask_dpi_flt__62__fflags = 0;
    vlSelf->__Vtask_dpi_feq__63__result = 0;
    vlSelf->__Vtask_dpi_feq__63__fflags = 0;
    vlSelf->__Vtask_dpi_fmin__64__result = 0;
    vlSelf->__Vtask_dpi_fmin__64__fflags = 0;
    vlSelf->__Vtask_dpi_fmax__65__result = 0;
    vlSelf->__Vtask_dpi_fmax__65__fflags = 0;
    vlSelf->__Vtask_dpi_fsgnj__66__result = 0;
    vlSelf->__Vtask_dpi_fsgnjn__67__result = 0;
    vlSelf->__Vtask_dpi_fsgnjx__68__result = 0;
    vlSelf->__Vtask_dpi_fadd__69__result = 0;
    vlSelf->__Vtask_dpi_fadd__69__fflags = 0;
    vlSelf->__Vtask_dpi_fsub__70__result = 0;
    vlSelf->__Vtask_dpi_fsub__70__fflags = 0;
    vlSelf->__Vtask_dpi_fmul__71__result = 0;
    vlSelf->__Vtask_dpi_fmul__71__fflags = 0;
    vlSelf->__Vtask_dpi_fmadd__72__result = 0;
    vlSelf->__Vtask_dpi_fmadd__72__fflags = 0;
    vlSelf->__Vtask_dpi_fmsub__73__result = 0;
    vlSelf->__Vtask_dpi_fmsub__73__fflags = 0;
    vlSelf->__Vtask_dpi_fnmadd__74__result = 0;
    vlSelf->__Vtask_dpi_fnmadd__74__fflags = 0;
    vlSelf->__Vtask_dpi_fnmsub__75__result = 0;
    vlSelf->__Vtask_dpi_fnmsub__75__fflags = 0;
    vlSelf->__Vtask_dpi_fdiv__76__result = 0;
    vlSelf->__Vtask_dpi_fdiv__76__fflags = 0;
    vlSelf->__Vtask_dpi_fsqrt__77__result = 0;
    vlSelf->__Vtask_dpi_fsqrt__77__fflags = 0;
    vlSelf->__Vtask_dpi_itof__78__result = 0;
    vlSelf->__Vtask_dpi_itof__78__fflags = 0;
    vlSelf->__Vtask_dpi_utof__79__result = 0;
    vlSelf->__Vtask_dpi_utof__79__fflags = 0;
    vlSelf->__Vtask_dpi_ftoi__80__result = 0;
    vlSelf->__Vtask_dpi_ftoi__80__fflags = 0;
    vlSelf->__Vtask_dpi_ftou__81__result = 0;
    vlSelf->__Vtask_dpi_ftou__81__fflags = 0;
    vlSelf->__Vtask_dpi_f2f__82__result = 0;
    vlSelf->__Vtask_dpi_fclss__83__result = 0;
    vlSelf->__Vtask_dpi_fle__84__result = 0;
    vlSelf->__Vtask_dpi_fle__84__fflags = 0;
    vlSelf->__Vtask_dpi_flt__85__result = 0;
    vlSelf->__Vtask_dpi_flt__85__fflags = 0;
    vlSelf->__Vtask_dpi_feq__86__result = 0;
    vlSelf->__Vtask_dpi_feq__86__fflags = 0;
    vlSelf->__Vtask_dpi_fmin__87__result = 0;
    vlSelf->__Vtask_dpi_fmin__87__fflags = 0;
    vlSelf->__Vtask_dpi_fmax__88__result = 0;
    vlSelf->__Vtask_dpi_fmax__88__fflags = 0;
    vlSelf->__Vtask_dpi_fsgnj__89__result = 0;
    vlSelf->__Vtask_dpi_fsgnjn__90__result = 0;
    vlSelf->__Vtask_dpi_fsgnjx__91__result = 0;
}
