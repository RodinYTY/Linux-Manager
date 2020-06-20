#-------------------------------------------------
#
# Project created by QtCreator 2020-02-22T03:46:36
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    syst.cpp

HEADERS  += mainwindow.h \
    syst.h

FORMS    += mainwindow.ui

DISTFILES +=

RC_ICONS = manager.ico
