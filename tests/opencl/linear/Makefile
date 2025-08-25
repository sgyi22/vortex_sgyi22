ROOT_DIR := $(realpath ../../..)
include $(ROOT_DIR)/config.mk

PROJECT := linear

SRC_DIR := $(VORTEX_HOME)/tests/opencl/$(PROJECT)

SRCS := $(SRC_DIR)/main.cc

common.h: $(SRC_DIR)/common.h
	cp $< $@

kernel.cl: $(SRC_DIR)/kernel.cl
	cp $< $@

KERNEL_SRCS := kernel.cl common.h

# Default options for qkv_proj configuration
OPTS ?= -b 1 -t 10 -i 3072 -o 5120 -u 0

include ../common.mk


