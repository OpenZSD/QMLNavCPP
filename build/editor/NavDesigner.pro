TEMPLATE = app
TARGET = NavDesigner
DEPENDPATH += ../src
DEPENDPATH += ../src/banner
INCLUDEPATH += ../src/editor/qmlWidgets/
INCLUDEPATH += ../src/editor/
QT += core
QT += gui
QT += widgets
QT += qml
QT += quickwidgets
CONFIG += c++11

HEADERS += ../src/banner/Banner.h \
    ../src/editor/qmlWidgets/ToolSelectionBar.h \
    ../src/editor/qmlWidgets/ToolSelector.h \
    ../src/editor/MainWindow.h

SOURCES += ../src/main.cpp ../src/banner/Banner.cpp \
    ../src/editor/qmlWidgets/ToolSelectionBar.cpp \
    ../src/editor/qmlWidgets/ToolSelector.cpp \
    ../src/editor/MainWindow.cpp

RESOURCES += \
    ../src/resources/internal.qrc \
    ../src/editor/qmlWidgets/qml/qmlWidgets.qrc

FORMS += \
    ../src/ui/MainWindow.ui

DESTDIR = ../../editor
OBJECTS_DIR = ../generated/.obj
MOC_DIR = ../generated/.moc
RCC_DIR = ../generated/.rcc
UI_DIR = ../generated/.u
