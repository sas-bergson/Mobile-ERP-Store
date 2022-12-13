QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminWindow.cpp \
    CreateEmp.cpp \
    CreateLogin.cpp \
    DeleteEmployee.cpp \
    Employee.cpp \
    EmployeeTraining.cpp \
    PromoteDemote.cpp \
    QuitDialog.cpp \
    User.cpp \
    ViewEmployees.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    Admin.h \
    AdminWindow.h \
    CreateEmp.h \
    CreateLogin.h \
    DeleteEmployee.h \
    Employee.h \
    EmployeeTraining.h \
    EmploymentData.h \
    MainWindow.h \
    PromoteDemote.h \
    QuitDialog.h \
    User.h \
    ViewEmployees.h

FORMS += \
    AdminWindow.ui \
    CreateEmp.ui \
    CreateLogin.ui \
    DeleteEmployee.ui \
    MainWindow.ui \
    PromoteDemote.ui \
    QuitDialog.ui \
    User.ui \
    ViewEmployees.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
