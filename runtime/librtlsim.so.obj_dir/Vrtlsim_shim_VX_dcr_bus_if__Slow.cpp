// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"
#include "Vrtlsim_shim_VX_dcr_bus_if.h"
#include "Vrtlsim_shim__Syms.h"

void Vrtlsim_shim_VX_dcr_bus_if___ctor_var_reset(Vrtlsim_shim_VX_dcr_bus_if* vlSelf);

Vrtlsim_shim_VX_dcr_bus_if::Vrtlsim_shim_VX_dcr_bus_if(Vrtlsim_shim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrtlsim_shim_VX_dcr_bus_if___ctor_var_reset(this);
}

void Vrtlsim_shim_VX_dcr_bus_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrtlsim_shim_VX_dcr_bus_if::~Vrtlsim_shim_VX_dcr_bus_if() {
}
