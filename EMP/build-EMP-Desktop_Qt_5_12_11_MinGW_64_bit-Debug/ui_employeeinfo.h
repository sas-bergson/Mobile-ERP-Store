/********************************************************************************
** Form generated from reading UI file 'employeeinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEINFO_H
#define UI_EMPLOYEEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_employeeinfo
{
public:

    void setupUi(QDialog *employeeinfo)
    {
        if (employeeinfo->objectName().isEmpty())
            employeeinfo->setObjectName(QString::fromUtf8("employeeinfo"));
        employeeinfo->resize(400, 300);

        retranslateUi(employeeinfo);

        QMetaObject::connectSlotsByName(employeeinfo);
    } // setupUi

    void retranslateUi(QDialog *employeeinfo)
    {
        employeeinfo->setWindowTitle(QApplication::translate("employeeinfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employeeinfo: public Ui_employeeinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
