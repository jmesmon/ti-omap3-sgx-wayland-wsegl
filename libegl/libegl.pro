TEMPLATE = lib
TARGET = EGL

QT = 
SOURCES = egl.cpp


include(../common/common.pri)

CONFIG += link_pkgconfig
PKGCONFIG += wayland-client wayland-server

LIBS += -ldl

target.path = /usr/lib
INSTALLS += target
