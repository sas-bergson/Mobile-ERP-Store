/********************************************************************************
** Form generated from reading UI file 'department.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENT_H
#define UI_DEPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Department
{
public:
    QPushButton *backButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *Department)
    {
        if (Department->objectName().isEmpty())
            Department->setObjectName(QString::fromUtf8("Department"));
        Department->resize(709, 395);
        backButton = new QPushButton(Department);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(40, 320, 91, 31));
        pushButton = new QPushButton(Department);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 320, 111, 31));
        pushButton_2 = new QPushButton(Department);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 320, 111, 31));
        label = new QLabel(Department);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 100, 381, 171));

        retranslateUi(Department);

        QMetaObject::connectSlotsByName(Department);
    } // setupUi

    void retranslateUi(QDialog *Department)
    {
        Department->setWindowTitle(QApplication::translate("Department", "Dialog", nullptr));
        backButton->setText(QApplication::translate("Department", "Back", nullptr));
        pushButton->setText(QApplication::translate("Department", "Add Department", nullptr));
        pushButton_2->setText(QApplication::translate("Department", "Delete Department", nullptr));
        label->setText(QApplication::translate("Department", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Department: public Ui_Department {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENT_H
