QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 3): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    attendancereport.cpp \
    enroll.cpp \
    home.cpp \
    main.cpp \
    mainwindow.cpp \
    registerattendance.cpp \
    viewattendance.cpp \
    viewstaff.cpp

HEADERS += \
    attendancereport.h \
    enroll.h \
    home.h \
    mainwindow.h \
    INCLUDES/database.h \
    INCLUDES/staff.h \
    INCLUDES/attendance.h \
    registerattendance.h \
    viewattendance.h \
    viewstaff.h

FORMS += \
    attendancereport.ui \
    enroll.ui \
    home.ui \
    mainwindow.ui \
    registerattendance.ui \
    viewattendance.ui \
    viewstaff.ui

RESOURCES += \
    asset.qrc \
    database/Staff.db \
    assets/


TRANSLATIONS += \
 Staff_Attendance_Management.ts

CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


DISTFILES += \
    docs/STAFF ATTENDANCE MANAGEMENT SYSTEM.pdf \
    docs/STAFF ATTENDANCE MANAGEMENT SYSTEM.pdf
