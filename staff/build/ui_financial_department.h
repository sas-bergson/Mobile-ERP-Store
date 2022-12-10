/********************************************************************************
** Form generated from reading UI file 'financial_department.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIAL_DEPARTMENT_H
#define UI_FINANCIAL_DEPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_financial_department
{
public:

    void setupUi(QDialog *financial_department)
    {
        if (financial_department->objectName().isEmpty())
            financial_department->setObjectName(QString::fromUtf8("financial_department"));
        financial_department->resize(722, 439);

        retranslateUi(financial_department);

        QMetaObject::connectSlotsByName(financial_department);
    } // setupUi

    void retranslateUi(QDialog *financial_department)
    {
        financial_department->setWindowTitle(QApplication::translate("financial_department", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class financial_department: public Ui_financial_department {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIAL_DEPARTMENT_H
