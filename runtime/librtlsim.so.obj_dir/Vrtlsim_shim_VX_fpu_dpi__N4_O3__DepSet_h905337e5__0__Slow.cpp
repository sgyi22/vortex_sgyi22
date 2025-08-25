// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_fpu_dpi__N4_O3.h"
#include "Vrtlsim_shim__Syms.h"

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

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                              << 2U)) 
                              | ((0x3eU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           << 1U)) 
                                 | (1U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                          >> 5U)))));
    __Vtemp_8[1U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 2U)));
    __Vtemp_8[2U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 2U)));
    __Vtemp_8[3U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 2U)));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                << 9U)) 
                                | ((0x1f00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                               << 8U)) 
                                   | ((0x80U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                << 2U)) 
                                      | ((0x7cU & (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   << 2U)) 
                                         | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x1eU))))));
    __Vtemp_8[5U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 9U)));
    __Vtemp_8[6U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 9U)));
    __Vtemp_8[7U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 9U)));
    __Vtemp_8[8U] = ((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                 << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x17U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
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
            = __Vtemp_9[0U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
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
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    __Vtableidx1 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 8U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                     >> 0xdU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                             >> 0x11U))));
    vlSelf->__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_hb53b6836_0
        [__Vtableidx1];
    vlSelf->__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h5aeac9b0_0
        [__Vtableidx1];
    vlSelf->__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_he2a2cbb9_0
        [__Vtableidx1];
    vlSelf->__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_hac250f9e_0
        [__Vtableidx1];
    vlSelf->__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h94f13cd0_0
        [__Vtableidx1];
    vlSelf->__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_h98c0c7fe_0
        [__Vtableidx1];
    vlSelf->__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_h9d1ff2c4_0
        [__Vtableidx1];
    vlSelf->__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_h9c22b2c5_0
        [__Vtableidx1];
    vlSelf->__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_hda8979cf_0
        [__Vtableidx1];
    vlSelf->__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_h18e29c25_0
        [__Vtableidx1];
    vlSelf->__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_hfbbfe722_0
        [__Vtableidx1];
    vlSelf->__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h15170be7_0
        [__Vtableidx1];
    vlSelf->__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_ha9758192_0
        [__Vtableidx1];
    vlSelf->__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_h6a925727_0
        [__Vtableidx1];
    vlSelf->__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_hbf1666d4_0
        [__Vtableidx1];
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelf->__PVT__per_core_valid_out));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                            & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                              & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelf->__PVT__is_div)) 
                                                & (IData)(__VdfgRegularize_h6d72849d_0_0));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                              << 2U)) 
                              | ((0x3eU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           << 1U)) 
                                 | (1U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                          >> 5U)))));
    __Vtemp_8[1U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 2U)));
    __Vtemp_8[2U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 2U)));
    __Vtemp_8[3U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 2U)));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                << 9U)) 
                                | ((0x1f00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                               << 8U)) 
                                   | ((0x80U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                << 2U)) 
                                      | ((0x7cU & (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   << 2U)) 
                                         | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x1eU))))));
    __Vtemp_8[5U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 9U)));
    __Vtemp_8[6U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 9U)));
    __Vtemp_8[7U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 9U)));
    __Vtemp_8[8U] = ((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                 << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x17U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
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
            = __Vtemp_9[0U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
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
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelf->__PVT__per_core_valid_out));
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
}

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                              << 2U)) 
                              | ((0x3eU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           << 1U)) 
                                 | (1U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                          >> 5U)))));
    __Vtemp_8[1U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 2U)));
    __Vtemp_8[2U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 2U)));
    __Vtemp_8[3U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 2U)));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                << 9U)) 
                                | ((0x1f00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                               << 8U)) 
                                   | ((0x80U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                << 2U)) 
                                      | ((0x7cU & (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   << 2U)) 
                                         | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x1eU))))));
    __Vtemp_8[5U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 9U)));
    __Vtemp_8[6U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 9U)));
    __Vtemp_8[7U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 9U)));
    __Vtemp_8[8U] = ((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                 << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x17U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
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
            = __Vtemp_9[0U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
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
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    __Vtableidx3 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 8U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                     >> 0xdU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                             >> 0x11U))));
    vlSelf->__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_hb53b6836_0
        [__Vtableidx3];
    vlSelf->__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h5aeac9b0_0
        [__Vtableidx3];
    vlSelf->__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_he2a2cbb9_0
        [__Vtableidx3];
    vlSelf->__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_hac250f9e_0
        [__Vtableidx3];
    vlSelf->__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h94f13cd0_0
        [__Vtableidx3];
    vlSelf->__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_h98c0c7fe_0
        [__Vtableidx3];
    vlSelf->__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_h9d1ff2c4_0
        [__Vtableidx3];
    vlSelf->__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_h9c22b2c5_0
        [__Vtableidx3];
    vlSelf->__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_hda8979cf_0
        [__Vtableidx3];
    vlSelf->__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_h18e29c25_0
        [__Vtableidx3];
    vlSelf->__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_hfbbfe722_0
        [__Vtableidx3];
    vlSelf->__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h15170be7_0
        [__Vtableidx3];
    vlSelf->__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_ha9758192_0
        [__Vtableidx3];
    vlSelf->__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_h6a925727_0
        [__Vtableidx3];
    vlSelf->__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_hbf1666d4_0
        [__Vtableidx3];
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelf->__PVT__per_core_valid_out));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                            & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                              & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelf->__PVT__is_div)) 
                                                & (IData)(__VdfgRegularize_h6d72849d_0_0));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0(Vrtlsim_shim_VX_fpu_dpi__N4_O3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_fpu_dpi__N4_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_dpi__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h6d72849d_0_0;
    __VdfgRegularize_h6d72849d_0_0 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    VlWide<9>/*287:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    // Body
    __Vtemp_8[0U] = (0x40U | ((0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                              << 2U)) 
                              | ((0x3eU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           << 1U)) 
                                 | (1U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                          >> 5U)))));
    __Vtemp_8[1U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 2U)));
    __Vtemp_8[2U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 2U)));
    __Vtemp_8[3U] = (((0x7cU & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                << 2U)) | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                           >> 0x1eU)) 
                     | (0xffffff80U & (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 2U)));
    __Vtemp_8[4U] = (0x2000U | ((0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                                << 9U)) 
                                | ((0x1f00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                               << 8U)) 
                                   | ((0x80U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                << 2U)) 
                                      | ((0x7cU & (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   << 2U)) 
                                         | (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x1eU))))));
    __Vtemp_8[5U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[0U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                       << 9U)));
    __Vtemp_8[6U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[1U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                       << 9U)));
    __Vtemp_8[7U] = (((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                  << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[2U] 
                                             >> 0x17U)) 
                     | (0xffffc000U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                       << 9U)));
    __Vtemp_8[8U] = ((0x3e00U & (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                 << 9U)) | (vlSelf->__PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift_register__DOT__entries[3U] 
                                            >> 0x17U));
    __Vtemp_9[0U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(1U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[(0xfU & (((IData)(0x87U) 
                                            * (1U & 
                                               (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U)))) 
                                           >> 5U))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[1U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(2U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(1U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[2U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(3U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(2U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[3U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(4U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(3U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                           >> 6U)))) 
                                                     >> 5U)))] 
                        >> (0x1fU & ((IData)(0x87U) 
                                     * (1U & (~ (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                 >> 6U)))))));
    __Vtemp_9[4U] = (((0U == (0x1fU & ((IData)(0x87U) 
                                       * (1U & (~ (
                                                   vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                   >> 6U))))))
                       ? 0U : (__Vtemp_8[((IData)(5U) 
                                          + (0xfU & 
                                             (((IData)(0x87U) 
                                               * (1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                      >> 6U)))) 
                                              >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x87U) 
                                             * (1U 
                                                & (~ 
                                                   (vlSelf->__PVT__g_fdiv__DOT__shift_reg__DOT__g_shift_register__DOT__entries[4U] 
                                                    >> 6U)))))))) 
                     | (__Vtemp_8[((IData)(4U) + (0xfU 
                                                  & (((IData)(0x87U) 
                                                      * 
                                                      (1U 
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
            = __Vtemp_9[0U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[1U] 
            = __Vtemp_9[1U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[2U] 
            = __Vtemp_9[2U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[3U] 
            = __Vtemp_9[3U];
        vlSelf->__Vcellout__div_sqrt_arb__data_out[4U] 
            = (0x7fU & __Vtemp_9[4U]);
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
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[9U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xaU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[6U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][4U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][5U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xbU] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[8U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[7U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][6U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][7U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    __Vtableidx4 = ((0x20U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                              >> 8U)) | ((0x10U & (
                                                   (~ 
                                                    (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                                                     >> 0xdU)) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xdU] 
                                             >> 0x11U))));
    vlSelf->__PVT__is_fadd = Vrtlsim_shim__ConstPool__TABLE_hb53b6836_0
        [__Vtableidx4];
    vlSelf->__PVT__is_fsub = Vrtlsim_shim__ConstPool__TABLE_h5aeac9b0_0
        [__Vtableidx4];
    vlSelf->__PVT__is_fmul = Vrtlsim_shim__ConstPool__TABLE_he2a2cbb9_0
        [__Vtableidx4];
    vlSelf->__PVT__is_fmadd = Vrtlsim_shim__ConstPool__TABLE_hac250f9e_0
        [__Vtableidx4];
    vlSelf->__PVT__is_fmsub = Vrtlsim_shim__ConstPool__TABLE_h94f13cd0_0
        [__Vtableidx4];
    vlSelf->__PVT__is_fnmadd = Vrtlsim_shim__ConstPool__TABLE_h98c0c7fe_0
        [__Vtableidx4];
    vlSelf->__PVT__is_fnmsub = Vrtlsim_shim__ConstPool__TABLE_h9d1ff2c4_0
        [__Vtableidx4];
    vlSelf->__PVT__is_div = Vrtlsim_shim__ConstPool__TABLE_h9c22b2c5_0
        [__Vtableidx4];
    vlSelf->__PVT__is_fcmp = Vrtlsim_shim__ConstPool__TABLE_hda8979cf_0
        [__Vtableidx4];
    vlSelf->__PVT__is_itof = Vrtlsim_shim__ConstPool__TABLE_h18e29c25_0
        [__Vtableidx4];
    vlSelf->__PVT__is_utof = Vrtlsim_shim__ConstPool__TABLE_hfbbfe722_0
        [__Vtableidx4];
    vlSelf->__PVT__is_ftoi = Vrtlsim_shim__ConstPool__TABLE_h15170be7_0
        [__Vtableidx4];
    vlSelf->__PVT__is_ftou = Vrtlsim_shim__ConstPool__TABLE_ha9758192_0
        [__Vtableidx4];
    vlSelf->__PVT__is_f2f = Vrtlsim_shim__ConstPool__TABLE_h6a925727_0
        [__Vtableidx4];
    vlSelf->__PVT__core_select = Vrtlsim_shim__ConstPool__TABLE_hbf1666d4_0
        [__Vtableidx4];
    vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask) 
           & (IData)(vlSelf->__PVT__per_core_valid_out));
    vlSelf->__PVT__g_fncp__DOT__result_fmvf[0U] = (IData)(
                                                          ((0x1000U 
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                            & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU])
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
    __VdfgRegularize_h6d72849d_0_0 = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                      & (1U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fma__DOT__fma_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                            & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__g_fpus__BRA__0__KET____DOT__fpu_req_valid) 
                                              & (3U 
                                                 == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__g_fdiv__DOT__fdiv_valid = ((IData)(__VdfgRegularize_h6d72849d_0_0) 
                                              & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__g_fsqrt__DOT__fsqrt_valid = ((~ (IData)(vlSelf->__PVT__is_div)) 
                                                & (IData)(__VdfgRegularize_h6d72849d_0_0));
}
