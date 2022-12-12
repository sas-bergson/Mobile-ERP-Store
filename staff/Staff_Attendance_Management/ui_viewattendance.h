/********************************************************************************
** Form generated from reading UI file 'viewattendance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWATTENDANCE_H
#define UI_VIEWATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewAttendance
{
public:
    QTableView *tableView;

    void setupUi(QWidget *viewAttendance)
    {
        if (viewAttendance->objectName().isEmpty())
            viewAttendance->setObjectName(QString::fromUtf8("viewAttendance"));
        viewAttendance->resize(504, 300);
        tableView = new QTableView(viewAttendance);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(500, 150, 711, 241));
        tableView->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-image: url(:/assets/plan.jpg);\n"
"font-size: 18px;\n"
"opacity: 0.9;"));

        retranslateUi(viewAttendance);

        QMetaObject::connectSlotsByName(viewAttendance);
    } // setupUi

    void retranslateUi(QWidget *viewAttendance)
    {
        viewAttendance->setWindowTitle(QApplication::translate("viewAttendance", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewAttendance: public Ui_viewAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWATTENDANCE_H
