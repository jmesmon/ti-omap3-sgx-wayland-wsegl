lib_LTLIBRARIES = waylandwsegl.la

include $(top_srcdir)/common/common.mk

waylandwsegl_la_SOURCES =	\
	waylandwsegl.c		\
	$(COMMON_SOURCES)

waylandwsegl_la_CFLAGS =	\
	-I$(top_srcdir)/common	\
	-I$(top_srcdir)/libwayland-egl

waylandwsegl_la_LIBADD =		\
	$(top_builddir)/libwayland-egl/libwayland-egl.la \
	$(PVR2D_LIB)

waylandwsegl_la_LDFLAGS = \
	-module		\
	-no-undefined 	\
	-avoid-version

