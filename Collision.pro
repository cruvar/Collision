#-------------------------------------------------
#
# Project created by QtCreator 2016-03-18T13:46:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Collision
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    rectitem.cpp \
    triangleitem.cpp

HEADERS  += dialog.h \
    rectitem.h \
    triangleitem.h

FORMS    += dialog.ui
