/********************************************************************************
** Form generated from reading UI file 'attendancereport.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEREPORT_H
#define UI_ATTENDANCEREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attendanceReport
{
public:
    QTableView *tableView;
    QPushButton *backBtn;

    void setupUi(QWidget *attendanceReport)
    {
        if (attendanceReport->objectName().isEmpty())
            attendanceReport->setObjectName(QString::fromUtf8("attendanceReport"));
        attendanceReport->resize(755, 307);
        tableView = new QTableView(attendanceReport);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 0, 671, 251));
        tableView->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-image: url(:/assets/plan.jpg);\n"
"font-size: 18px;\n"
"opacity: 0.9;\n"
"overflow-y: scroll;\n"
"overflow-x: scroll;\n"
"height: auto;\n"
"width: 100%;"));
        backBtn = new QPushButton(attendanceReport);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(350, 260, 91, 41));
        backBtn->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
" padding: 10px;\n"
" box-shadow: 2px 2px grey;\n"
" font-size: 18px;\n"
" color: white;\n"
" background: red; \n"
"border-radius: 5px;\n"
"z-index: 1;\n"
""));

        retranslateUi(attendanceReport);

        QMetaObject::connectSlotsByName(attendanceReport);
    } // setupUi

    void retranslateUi(QWidget *attendanceReport)
    {
        attendanceReport->setWindowTitle(QApplication::translate("attendanceReport", "Form", nullptr));
        backBtn->setText(QApplication::translate("attendanceReport", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class attendanceReport: public Ui_attendanceReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEREPORT_H
