QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    department.cpp \
    financial_department.cpp \
    jobs.cpp \
    main.cpp \
    mainwindow.cpp \
    shifts.cpp \
    update_department.cpp \
    view_department.cpp

HEADERS += \
    department.h \
    financial_department.h \
    jobs.h \
    mainwindow.h \
    shifts.h \
    update_department.h \
    view_department.h

FORMS += \
    department.ui \
    financial_department.ui \
    jobs.ui \
    mainwindow.ui \
    shifts.ui \
    update_department.ui \
    view_department.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
