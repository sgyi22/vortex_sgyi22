// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_operands_if.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_operands_if___ctor_var_reset(Vrtlsim_shim_VX_operands_if* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_operands_if___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(472, vlSelf->data);
}
