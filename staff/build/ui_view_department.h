/********************************************************************************
** Form generated from reading UI file 'view_department.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_DEPARTMENT_H
#define UI_VIEW_DEPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_view_department
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *backButton_1;

    void setupUi(QDialog *view_department)
    {
        if (view_department->objectName().isEmpty())
            view_department->setObjectName(QString::fromUtf8("view_department"));
        view_department->resize(651, 415);
        label = new QLabel(view_department);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -10, 661, 431));
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: darkblack;\n"
"selection-background-color: darkgray;\n"
"}"));
        pushButton = new QPushButton(view_department);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 360, 141, 31));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:green;\n"
"selection-background-color: darkgray;\n"
"}"));
        pushButton->setIconSize(QSize(16, 16));
        tableView = new QTableView(view_department);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 30, 521, 301));
        backButton_1 = new QPushButton(view_department);
        backButton_1->setObjectName(QString::fromUtf8("backButton_1"));
        backButton_1->setGeometry(QRect(410, 360, 141, 31));
        backButton_1->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: red;\n"
"selection-background-color: darkgray;\n"
"}"));

        retranslateUi(view_department);

        QMetaObject::connectSlotsByName(view_department);
    } // setupUi

    void retranslateUi(QDialog *view_department)
    {
        view_department->setWindowTitle(QApplication::translate("view_department", "Dialog", nullptr));
        label->setText(QApplication::translate("view_department", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("view_department", "LOAD", nullptr));
        backButton_1->setText(QApplication::translate("view_department", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_department: public Ui_view_department {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_DEPARTMENT_H
