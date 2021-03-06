#-------------------------------------------------
#
# Project created by QtCreator 2015-09-30T17:18:11
#
#-------------------------------------------------

QT       += core gui
QT += network
QT += multimedia
QT += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

RC_FILE = myapp.rc

TARGET = Scoreboard
TEMPLATE = app

DESTDIR=bin #Target file directory
OBJECTS_DIR=build #Intermediate object files directory
MOC_DIR=build #Intermediate moc files directory
UI_DIR=ui
RCC_DIR=rcc

CONFIG += releas
SOURCES += src/main.cpp\
        src/scoreboardmain.cpp \
    src/dialog.cpp\
    src/intermission.cpp\
    src/overlay.cpp


HEADERS  += src/scoreboardmain.h \
    src/dialog.h\
    src/intermission.h\
    src/overlay.h

FORMS    += ui/scoreboardmain.ui \
    ui/dialog.ui\
    ui/intermission.ui\
    ui/overlay.ui
