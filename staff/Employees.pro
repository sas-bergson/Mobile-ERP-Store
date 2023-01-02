TEMPLATE = app

QT += qml quick quickcontrols2 widgets  sql

CONFIG += c++11

TARGET = UserLoginApp-master

SOURCES += main.cpp \
    sources/database.cpp \
    sources/listmodel.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

android:
    {
DISTFILES += \
    android/AndroidManifest.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    android/gradlew.bat \
    android/res/values/libs.xml \
    backend.js
android: include(C:/Users/pc/AppData/Local/Android/Sdk/android_openssl/openssl.pri)

!android:
    {
        # copie la base de données dans le dossier build
        CONFIG += file_copies
        COPIES += bd
        bd.files = Staff.db
        bd.path = $$OUT_PWD/
        bd.base = $$PWD/
    }

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
        deployment.files += Staff.db
        deployment.path = /assets/db
        INSTALLS += deployment
}

HEADERS += \
    headers/database.h \
    headers/listmodel.h

contains(ANDROID_TARGET_ARCH,x86) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
        deployment.files += Staff.db
        deployment.path = /assets/db
        INSTALLS += deployment
}

}
