#
# Makefile for the touchscreen drivers.
#

# Each configuration option enables a list of files.

obj-$(CONFIG_TOUCHSCREEN_PROPERTIES)	+= of_touchscreen.o

# common
obj-$(CONFIG_TOUCHSCREEN_COMMON) += tp_common.o

# ysl
obj-$(CONFIG_TOUCHSCREEN_FTS_MI8953)	+= ft5446_e6/
obj-$(CONFIG_TOUCHSCREEN_GT917D_MI8953) += gt917d_e6/
obj-$(CONFIG_MACH_XIAOMI_YSL) += lct_tp_fm_info_e6.o