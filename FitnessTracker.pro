#-------------------------------------------------
#
# Project created by QtCreator 2021-03-01T07:14:55
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FitnessTracker
TEMPLATE = app

INCLUDEPATH += "public/"



SOURCES += src/main.cpp \
                        src/mainwindow.cpp \
                        src/loginscreen.cpp \
                        src/trackingmenu.cpp \
    src/displayinformation.cpp \
    src/datacontroller.cpp \
    src/database.cpp \
    src/weighttracker.cpp

HEADERS  += public/mainwindow.h \
                         public/loginscreen.h \
                         public/trackingmenu.h \
    public/displayinformation.h \
    public/datacontroller.h \
    public/database.h \
    public/weighttracker.h

FORMS    += ui/mainwindow.ui \
                       ui/loginscreen.ui \
                       ui/trackingmenu.ui \
    ui/displayinformation.ui \
    ui/weighttracker.ui
