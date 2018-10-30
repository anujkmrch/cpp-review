TEMPLATE = app
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += link_pkgconfig
PKGCONFIG += opencv

SOURCES += main.cpp \
    classes/car.cpp \
    classes/datetime.cpp

HEADERS += \
    classes/car.h \
    classes/datetime.h
