#-------------------------------------------------
#
# Project created by QtCreator 2017-10-19T16:22:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = programa
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ajuste.cpp \
    alarmas.cpp

HEADERS  += mainwindow.h \
    ajuste.h \
    alarmas.h

FORMS    += mainwindow.ui \
    ajuste.ui \
    alarmas.ui

CONFIG += mobility
MOBILITY = 

