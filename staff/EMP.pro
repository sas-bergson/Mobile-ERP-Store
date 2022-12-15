QT       += core gui sql

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
    exp.cpp \
    experience.cpp \
    main.cpp \
    mainwindow.cpp \
    search.cpp \
    searchdetails.cpp \
    showexp.cpp \
    updatabaseutils.cpp \
    update.cpp

HEADERS += \
    addemp.h \
    delete.h \
    exp.h \
    experience.h \
    mainwindow.h \
    search.h \
    searchdetails.h \
    showexp.h \
    update.h \
    update.h

FORMS += \
    addemp.ui \
    delete.ui \
    exp.ui \
    experience.ui \
    mainwindow.ui \
    search.ui \
    searchdetails.ui \
    showexp.ui \
    update.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Images.qrc

DISTFILES += \
    ../../EMP/cal.png \
    android/AndroidManifest.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    android/gradlew.bat \
    android/res/values/libs.xml \
    assets/db/Employ.db \
    assets/db/Employ.sqbpro
android: include(C:/Users/pc/AppData/Local/Android/Sdk/android_openssl/openssl.pri)

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}
