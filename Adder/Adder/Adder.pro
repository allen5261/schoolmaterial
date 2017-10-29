#-------------------------------------------------
#
# Project created by QtCreator 2017-10-22T21:32:36
#
#-------------------------------------------------

QT       += core gui
LIBS += -lpthread libwsock32 libws2_32

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Adder
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

DISTFILES +=
