/********************************************************************************
** Form generated from reading UI file 'update_department.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_DEPARTMENT_H
#define UI_UPDATE_DEPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_update_department
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *backButton_1;

    void setupUi(QDialog *update_department)
    {
        if (update_department->objectName().isEmpty())
            update_department->setObjectName(QString::fromUtf8("update_department"));
        update_department->resize(672, 472);
        tableView = new QTableView(update_department);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 20, 461, 351));
        pushButton = new QPushButton(update_department);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 390, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: green;\n"
"selection-background-color: darkgray;\n"
"}"));
        backButton_1 = new QPushButton(update_department);
        backButton_1->setObjectName(QString::fromUtf8("backButton_1"));
        backButton_1->setGeometry(QRect(340, 390, 101, 41));
        backButton_1->setToolTipDuration(1);
        backButton_1->setStyleSheet(QString::fromUtf8("#backButton_1 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: red;\n"
"selection-background-color: darkgray;\n"
"}"));

        retranslateUi(update_department);

        QMetaObject::connectSlotsByName(update_department);
    } // setupUi

    void retranslateUi(QDialog *update_department)
    {
        update_department->setWindowTitle(QApplication::translate("update_department", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("update_department", "LOAD", nullptr));
        backButton_1->setText(QApplication::translate("update_department", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update_department: public Ui_update_department {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_DEPARTMENT_H
