#-------------------------------------------------
#
# Liam McBain
# Free Graphic Overlay and Playout System
#
#-------------------------------------------------

QT       += core gui
QT += network
QT += multimedia
QT += xml
QT += svg
QT += opengl

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
    src/overlay.cpp \
    src/updatesvg.cpp


HEADERS  += src/scoreboardmain.h \
    src/overlay.h \
    src/updatesvg.h

FORMS    += ui/scoreboardmain.ui \
    ui/overlay.ui
