QT       += core gui  sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addatabaseutils.cpp \
    addemp.cpp \
    databaseutils.cpp \
    deldatabaseutils.cpp \
    delete.cpp \
    main.cpp \
    mainwindow.cpp \
    search.cpp \
    updatabaseutils.cpp \
    update.cpp

HEADERS += \
    addemp.h \
    delete.h \
    mainwindow.h \
    search.h \
    update.h \
    update.h

FORMS += \
    addemp.ui \
    delete.ui \
    mainwindow.ui \
    search.ui \
    update.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Images.qrc
