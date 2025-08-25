# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrtlsim_shim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vrtlsim_shim \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__0 \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__1 \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__2 \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__3 \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__4 \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__5 \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__6 \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__7 \
	Vrtlsim_shim___024root__DepSet_h76d00735__0 \
	Vrtlsim_shim___024unit__DepSet_hace02784__0 \
	Vrtlsim_shim_VX_dcr_bus_if__DepSet_h5515fba4__0 \
	Vrtlsim_shim_VX_schedule_if__DepSet_hb0fc5ff1__0 \
	Vrtlsim_shim_VX_fetch_if__DepSet_h43c9af56__0 \
	Vrtlsim_shim_VX_lmem_switch__pi16__DepSet_h462b57ec__0 \
	Vrtlsim_shim_VX_lmem_switch__pi16__DepSet_h903569f7__0 \
	Vrtlsim_shim_VX_lsu_adapter__pi18__DepSet_h6846d728__0 \
	Vrtlsim_shim_VX_lsu_adapter__pi18__DepSet_h0dc23bc2__0 \
	Vrtlsim_shim_VX_ipdom_stack__W23_D3__DepSet_h321c80c2__0 \
	Vrtlsim_shim_VX_pe_switch__pi38__DepSet_hd30cb5e8__0 \
	Vrtlsim_shim_VX_pe_switch__pi38__DepSet_he2a2a172__0 \
	Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130__DepSet_h953e8c02__0 \
	Vrtlsim_shim_VX_gather_unit__N4_O3__DepSet_h3df2deb0__0 \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__DepSet_h3d927cfb__0 \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__DepSet_h905337e5__0 \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__DepSet_h905337e5__1 \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__DepSet_h905337e5__2 \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__DepSet_h905337e5__3 \
	Vrtlsim_shim_VX_decode_if__DepSet_hec0ff856__0 \
	Vrtlsim_shim_VX_warp_ctl_if__DepSet_h448cbde1__0 \
	Vrtlsim_shim_VX_commit_if__DepSet_h0a2013ef__0 \
	Vrtlsim_shim_VX_writeback_if__DepSet_hbec6a2fd__0 \
	Vrtlsim_shim_VX_ibuffer_if__DepSet_h9e6b7012__0 \
	Vrtlsim_shim_VX_scoreboard_if__DepSet_hb42751bf__0 \
	Vrtlsim_shim_VX_operands_if__DepSet_h63796706__0 \
	Vrtlsim_shim_VX_mem_bus_if__D40_T9__DepSet_hd3a2ef97__0 \
	Vrtlsim_shim_VX_mem_bus_if__D4_T3__DepSet_h7eef97f1__0 \
	Vrtlsim_shim_VX_mem_bus_if__D40_T5__DepSet_hcdc2fd35__0 \
	Vrtlsim_shim_VX_mem_bus_if__D40_T8__DepSet_hb9add7eb__0 \
	Vrtlsim_shim_VX_mem_bus_if__D4_T5__DepSet_h014fb4c8__0 \
	Vrtlsim_shim_VX_mem_bus_if__D10_T5__DepSet_h02df09b7__0 \
	Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2__DepSet_h8213916b__0 \
	Vrtlsim_shim_VX_mem_bus_if__D4_T2__DepSet_hc46aa700__0 \
	Vrtlsim_shim_VX_lsu_mem_if__D10_T3__DepSet_h1be1a364__0 \
	Vrtlsim_shim_VX_mem_bus_if__D40_T7__DepSet_h5f5c0e7f__0 \
	Vrtlsim_shim_VX_execute_if__N4__DepSet_hbc7feef6__0 \
	Vrtlsim_shim_VX_stream_xbar__pi39__DepSet_hd5433a48__0 \
	Vrtlsim_shim_VX_stream_xbar__pi39__DepSet_h6a9ff7fa__0 \
	Vrtlsim_shim_VX_stream_xbar__D22_Az137_O3__DepSet_hc8ad20d8__0 \
	Vrtlsim_shim_VX_stream_xbar__D22_Az137_O3__DepSet_h5f9dcb8e__0 \
	Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137__DepSet_h5acff2c8__0 \
	Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137__DepSet_h5ea1e91a__0 \
	Vrtlsim_shim_VX_gpu_pkg__DepSet_h4e1ee330__0 \
	Vrtlsim_shim_VX_elastic_buffer__D68_S4_O1__DepSet_hb3efd396__0 \
	Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1__DepSet_h895518a2__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrtlsim_shim__ConstPool_0 \
	Vrtlsim_shim___024root__Slow \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__0__Slow \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__1__Slow \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__2__Slow \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__3__Slow \
	Vrtlsim_shim___024root__DepSet_hcd27c75d__4__Slow \
	Vrtlsim_shim___024root__DepSet_h76d00735__0__Slow \
	Vrtlsim_shim___024unit__Slow \
	Vrtlsim_shim___024unit__DepSet_h1792a75c__0__Slow \
	Vrtlsim_shim_VX_dcr_bus_if__Slow \
	Vrtlsim_shim_VX_dcr_bus_if__DepSet_h5515fba4__0__Slow \
	Vrtlsim_shim_VX_schedule_if__Slow \
	Vrtlsim_shim_VX_schedule_if__DepSet_hb0fc5ff1__0__Slow \
	Vrtlsim_shim_VX_fetch_if__Slow \
	Vrtlsim_shim_VX_fetch_if__DepSet_h43c9af56__0__Slow \
	Vrtlsim_shim_VX_lmem_switch__pi16__Slow \
	Vrtlsim_shim_VX_lmem_switch__pi16__DepSet_h462b57ec__0__Slow \
	Vrtlsim_shim_VX_lmem_switch__pi16__DepSet_h903569f7__0__Slow \
	Vrtlsim_shim_VX_lsu_adapter__pi18__Slow \
	Vrtlsim_shim_VX_lsu_adapter__pi18__DepSet_h6846d728__0__Slow \
	Vrtlsim_shim_VX_lsu_adapter__pi18__DepSet_h0dc23bc2__0__Slow \
	Vrtlsim_shim_VX_ipdom_stack__W23_D3__Slow \
	Vrtlsim_shim_VX_ipdom_stack__W23_D3__DepSet_h07e8f328__0__Slow \
	Vrtlsim_shim_VX_pe_switch__pi38__Slow \
	Vrtlsim_shim_VX_pe_switch__pi38__DepSet_hd30cb5e8__0__Slow \
	Vrtlsim_shim_VX_pe_switch__pi38__DepSet_he2a2a172__0__Slow \
	Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130__Slow \
	Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130__DepSet_h82f54428__0__Slow \
	Vrtlsim_shim_VX_dispatch_unit__N4_O3_Ez130__DepSet_h953e8c02__0__Slow \
	Vrtlsim_shim_VX_gather_unit__N4_O3__Slow \
	Vrtlsim_shim_VX_gather_unit__N4_O3__DepSet_ha8c52515__0__Slow \
	Vrtlsim_shim_VX_gather_unit__N4_O3__DepSet_h3df2deb0__0__Slow \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__Slow \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__DepSet_h3d927cfb__0__Slow \
	Vrtlsim_shim_VX_fpu_dpi__N4_O3__DepSet_h905337e5__0__Slow \
	Vrtlsim_shim_VX_decode_if__Slow \
	Vrtlsim_shim_VX_decode_if__DepSet_hec0ff856__0__Slow \
	Vrtlsim_shim_VX_warp_ctl_if__Slow \
	Vrtlsim_shim_VX_warp_ctl_if__DepSet_h448cbde1__0__Slow \
	Vrtlsim_shim_VX_commit_if__Slow \
	Vrtlsim_shim_VX_commit_if__DepSet_h0a2013ef__0__Slow \
	Vrtlsim_shim_VX_writeback_if__Slow \
	Vrtlsim_shim_VX_writeback_if__DepSet_hbec6a2fd__0__Slow \
	Vrtlsim_shim_VX_ibuffer_if__Slow \
	Vrtlsim_shim_VX_ibuffer_if__DepSet_h9e6b7012__0__Slow \
	Vrtlsim_shim_VX_scoreboard_if__Slow \
	Vrtlsim_shim_VX_scoreboard_if__DepSet_hb42751bf__0__Slow \
	Vrtlsim_shim_VX_operands_if__Slow \
	Vrtlsim_shim_VX_operands_if__DepSet_h63796706__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T9__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T9__DepSet_hd3a2ef97__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D4_T3__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D4_T3__DepSet_h7eef97f1__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T5__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T5__DepSet_hcdc2fd35__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T8__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T8__DepSet_hb9add7eb__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D4_T5__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D4_T5__DepSet_h014fb4c8__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D10_T5__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D10_T5__DepSet_h02df09b7__0__Slow \
	Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2__Slow \
	Vrtlsim_shim_VX_lsu_mem_if__N4_D4_T2__DepSet_h8213916b__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D4_T2__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D4_T2__DepSet_hc46aa700__0__Slow \
	Vrtlsim_shim_VX_lsu_mem_if__D10_T3__Slow \
	Vrtlsim_shim_VX_lsu_mem_if__D10_T3__DepSet_h1be1a364__0__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T7__Slow \
	Vrtlsim_shim_VX_mem_bus_if__D40_T7__DepSet_h5f5c0e7f__0__Slow \
	Vrtlsim_shim_VX_execute_if__N4__Slow \
	Vrtlsim_shim_VX_execute_if__N4__DepSet_hbc7feef6__0__Slow \
	Vrtlsim_shim_VX_stream_xbar__pi39__Slow \
	Vrtlsim_shim_VX_stream_xbar__pi39__DepSet_hd5433a48__0__Slow \
	Vrtlsim_shim_VX_stream_xbar__pi39__DepSet_h6a9ff7fa__0__Slow \
	Vrtlsim_shim_VX_stream_xbar__D22_Az137_O3__Slow \
	Vrtlsim_shim_VX_stream_xbar__D22_Az137_O3__DepSet_hc8ad20d8__0__Slow \
	Vrtlsim_shim_VX_stream_xbar__D22_Az137_O3__DepSet_h5f9dcb8e__0__Slow \
	Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137__Slow \
	Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137__DepSet_h5acff2c8__0__Slow \
	Vrtlsim_shim_VX_stream_xbar__N3_D6_Az137__DepSet_h5ea1e91a__0__Slow \
	Vrtlsim_shim_VX_gpu_pkg__Slow \
	Vrtlsim_shim_VX_gpu_pkg__DepSet_h430a52bf__0__Slow \
	Vrtlsim_shim_VX_elastic_buffer__D68_S4_O1__Slow \
	Vrtlsim_shim_VX_elastic_buffer__D68_S4_O1__DepSet_hc0280192__0__Slow \
	Vrtlsim_shim_VX_elastic_buffer__D68_S4_O1__DepSet_hb3efd396__0__Slow \
	Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1__Slow \
	Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1__DepSet_h39a33fa8__0__Slow \
	Vrtlsim_shim_VX_elastic_buffer__D1d8_S2_O1__DepSet_h895518a2__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrtlsim_shim__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrtlsim_shim__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
