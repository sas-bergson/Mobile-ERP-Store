/********************************************************************************
** Form generated from reading UI file 'shifts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIFTS_H
#define UI_SHIFTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_shifts
{
public:

    void setupUi(QDialog *shifts)
    {
        if (shifts->objectName().isEmpty())
            shifts->setObjectName(QString::fromUtf8("shifts"));
        shifts->resize(400, 300);

        retranslateUi(shifts);

        QMetaObject::connectSlotsByName(shifts);
    } // setupUi

    void retranslateUi(QDialog *shifts)
    {
        shifts->setWindowTitle(QApplication::translate("shifts", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shifts: public Ui_shifts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIFTS_H
