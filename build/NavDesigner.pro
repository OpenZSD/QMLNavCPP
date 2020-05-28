TEMPLATE = app
TARGET = NavDesigner
DEPENDPATH += ./src
DEPENDPATH += ./src/banner
INCLUDEPATH += .
QT += core
QT += gui
CONFIG += c++11

HEADERS += ./src/banner/Banner.h

SOURCES += ./src/main.cpp ./src/banner/Banner.cpp \

RESOURCES += \
    src/resources/internal.qrc
