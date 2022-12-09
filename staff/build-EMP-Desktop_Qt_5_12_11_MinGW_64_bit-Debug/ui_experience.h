/********************************************************************************
** Form generated from reading UI file 'experience.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERIENCE_H
#define UI_EXPERIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Experience
{
public:
    QPushButton *Home;
    QPushButton *ShowExp;
    QPushButton *AddExp;

    void setupUi(QDialog *Experience)
    {
        if (Experience->objectName().isEmpty())
            Experience->setObjectName(QString::fromUtf8("Experience"));
        Experience->resize(765, 433);
        Experience->setStyleSheet(QString::fromUtf8("#Experience\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        Home = new QPushButton(Experience);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(624, 10, 141, 51));
        Home->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(255, 176, 107);"));
        ShowExp = new QPushButton(Experience);
        ShowExp->setObjectName(QString::fromUtf8("ShowExp"));
        ShowExp->setGeometry(QRect(200, 130, 271, 81));
        ShowExp->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(0, 129, 23);"));
        AddExp = new QPushButton(Experience);
        AddExp->setObjectName(QString::fromUtf8("AddExp"));
        AddExp->setGeometry(QRect(200, 260, 271, 81));
        AddExp->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(0, 129, 23);"));

        retranslateUi(Experience);

        QMetaObject::connectSlotsByName(Experience);
    } // setupUi

    void retranslateUi(QDialog *Experience)
    {
        Experience->setWindowTitle(QApplication::translate("Experience", "Dialog", nullptr));
        Home->setText(QApplication::translate("Experience", "HOME", nullptr));
        ShowExp->setText(QApplication::translate("Experience", "SHOW EXPERIENECE DETAILS", nullptr));
        AddExp->setText(QApplication::translate("Experience", "MODIFY EXPERIENCE DETAILS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Experience: public Ui_Experience {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIENCE_H
