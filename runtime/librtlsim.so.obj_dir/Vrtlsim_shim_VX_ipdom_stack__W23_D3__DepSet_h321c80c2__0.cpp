// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_ipdom_stack__W23_D3.h"
#include "Vrtlsim_shim__Syms.h"

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__2__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[2].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[0].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[1].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[2].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___act_comb__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Body
    vlSelf->__Vcellinp__ipdom_store__write = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) 
                                              | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push));
    vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__rd_ptr;
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__wr_ptr;
        vlSelf->__PVT__rd_ptr_n = vlSelf->__PVT__wr_ptr;
    } else {
        vlSelf->__Vcellinp__ipdom_store__waddr = vlSelf->__PVT__rd_ptr;
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            vlSelf->__PVT__rd_ptr_n = (3U & ((IData)(vlSelf->__PVT__rd_ptr) 
                                             - (1U 
                                                & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                                   >> 6U))));
        }
    }
}

VL_INLINE_OPT void Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0(Vrtlsim_shim_VX_ipdom_stack__W23_D3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrtlsim_shim_VX_ipdom_stack__W23_D3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    CData/*1:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    VlWide<3>/*70:0*/ __VdlyVal__ipdom_store__DOT__ram__v0;
    VL_ZERO_W(71, __VdlyVal__ipdom_store__DOT__ram__v0);
    CData/*1:0*/ __VdlyDim0__ipdom_store__DOT__ram__v0;
    __VdlyDim0__ipdom_store__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ipdom_store__DOT__ram__v0;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0;
    // Body
    __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr;
    __VdlySet__ipdom_store__DOT__ram__v0 = 0U;
    __Vdly__wr_ptr = vlSelf->__PVT__wr_ptr;
    if (vlSelf->__Vcellinp__ipdom_store__write) {
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0);
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    << 3U) | (IData)((vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_q0 
                                      >> 0x20U)));
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                  >> 0xbU)))) 
                    >> 0x1dU) | ((IData)(((0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 << 3U));
        } else {
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U] 
                = vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U];
            vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U] 
                = (0x40U | (0x3fU & vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U]));
        }
        if ((2U >= (IData)(vlSelf->__Vcellinp__ipdom_store__waddr))) {
            __VdlyVal__ipdom_store__DOT__ram__v0[0U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[0U];
            __VdlyVal__ipdom_store__DOT__ram__v0[1U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[1U];
            __VdlyVal__ipdom_store__DOT__ram__v0[2U] 
                = vlSelf->ipdom_store__DOT____Vlvbound_hb2714e06__0[2U];
            __VdlyDim0__ipdom_store__DOT__ram__v0 = vlSelf->__Vcellinp__ipdom_store__waddr;
            __VdlySet__ipdom_store__DOT__ram__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
        __Vdly__wr_ptr = 0U;
        vlSelf->__PVT__empty_r = 1U;
        vlSelf->__PVT__full_r = 0U;
        __Vdly__rd_ptr = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSelf->__PVT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:57: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: writing to a full stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 57, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)) 
                          | (~ (IData)(vlSelf->__PVT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:58: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: reading an empty stack!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 58, "");
                }
            }
        }
        if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push) {
            __Vdly__wr_ptr = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__wr_ptr)));
            vlSelf->__PVT__empty_r = 0U;
            vlSelf->__PVT__full_r = (2U == (IData)(vlSelf->__PVT__wr_ptr));
        } else if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop) {
            __Vdly__wr_ptr = (3U & ((IData)(vlSelf->__PVT__wr_ptr) 
                                    - (1U & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                             >> 6U))));
            vlSelf->__PVT__empty_r = ((0U == (IData)(vlSelf->__PVT__rd_ptr)) 
                                      & (vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
                                         >> 6U));
            vlSelf->__PVT__full_r = 0U;
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push)) 
                          | (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__3__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: VX_ipdom_stack.sv:59: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[3].core.schedule.split_join.g_ipdom_stacks[3].ipdom_stack: %t: runtime error: push and pop in same cycle not supported!\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12);
                    VL_STOP_MT("/home/sgyi22/vortex/hw/rtl/core/VX_ipdom_stack.sv", 59, "");
                }
            }
        }
        __Vdly__rd_ptr = vlSelf->__PVT__rd_ptr_n;
    }
    vlSelf->__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelf->__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelf->__PVT__empty = vlSelf->__PVT__empty_r;
    vlSelf->__PVT__full = vlSelf->__PVT__full_r;
    if ((2U >= (IData)(vlSelf->__PVT__rd_ptr_n))) {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->__PVT__ipdom_store__DOT__ram[vlSelf->__PVT__rd_ptr_n][2U];
    } else {
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[0U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[0U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[1U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[1U];
        vlSelf->__PVT__ipdom_store__DOT__g_sync__DOT__g_read_first__DOT__rdata_r[2U] 
            = vlSelf->ipdom_store__DOT____Vxrand_h6dcb2513__1[2U];
    }
    if (__VdlySet__ipdom_store__DOT__ram__v0) {
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][0U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[0U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][1U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[1U];
        vlSelf->__PVT__ipdom_store__DOT__ram[__VdlyDim0__ipdom_store__DOT__ram__v0][2U] 
            = __VdlyVal__ipdom_store__DOT__ram__v0[2U];
    }
}
