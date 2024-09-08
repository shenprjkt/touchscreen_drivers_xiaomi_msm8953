#
# Makefile for the touchscreen drivers.
#

# Each configuration option enables a list of files.

obj-$(CONFIG_TOUCHSCREEN_PROPERTIES)	+= of_touchscreen.o

# ysl
obj-$(CONFIG_TOUCHSCREEN_FT5446_E6)	+= ft5446_e6/
obj-$(CONFIG_TOUCHSCREEN_GT917D_E6) += gt917d_e6/
