QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

TARGET = qtest_window

SOURCES += main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h
