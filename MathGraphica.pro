#-------------------------------------------------
#
# Project created by QtCreator 2013-07-24T22:31:03
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MathGraphica
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    graph3D/graph3d.cpp \
    graph3D/graph3d_opengl.cpp \
    calculator/calculator.cpp \
    calculator/parser.cpp \
    calculator/complexo.cpp \
    calculator/mynumber.cpp \
    calculator/mynumber_functions.cpp \
    calculator/formatresult.cpp \
    calculator/equation.cpp \
    calculator/integral.cpp \
    calculator/matrix.cpp

HEADERS  += mainwindow.h \
    graph3D/graph3d.h \
    graph3D/graph3d_opengl.h \
    calculator/calculator.h \
    calculator/parser.h \
    calculator/complexo.h \
    calculator/mynumber.h \
    calculator/mynumber_functions.h \
    calculator/formatresult.h \
    calculator/equation.h \
    calculator/integral.h \
    calculator/matrix.h


FORMS    += mainwindow.ui

RESOURCES += \
    mathgraphica.qrc

OTHER_FILES += \
    shaders/fragmentShaderES2.fsh \
    shaders/vertexShaderES2.vsh