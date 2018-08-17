#-------------------------------------------------
#
# Project created by QtCreator 2018-08-16T17:35:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = download
TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .
QT += core network
CONFIG += console

SOURCES += main.cpp\
        downloadmanager.cpp \
    textprogressbar.cpp

HEADERS  += downloadmanager.h \
    textprogressbar.h

FORMS    += downloadmanager.ui
# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/downloadmanager
sources.files = $$SOURCES $$HEADERS $$FORMS $$RESOURCES *.pro *.png
sources.path = $$[QT_INSTALL_EXAMPLES]/network/downloadmanager
INSTALLS += target sources

symbian: include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
maemo5: include($$QT_SOURCE_TREE/examples/maemo5pkgrules.pri)

OTHER_FILES += \
    debian/changelog \
    debian/compat \
    debian/control \
    debian/copyright \
    debian/README \
    debian/rules
symbian: warning(This example might not fully work on Symbian platform)
simulator: warning(This example might not fully work on Simulator platform)
