/********************************************************************************
** Form generated from reading UI file 'delete_department.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_DEPARTMENT_H
#define UI_DELETE_DEPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Delete_department
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Delete_department)
    {
        if (Delete_department->objectName().isEmpty())
            Delete_department->setObjectName(QString::fromUtf8("Delete_department"));
        Delete_department->resize(726, 386);
        tableView = new QTableView(Delete_department);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(80, 10, 431, 301));
        pushButton = new QPushButton(Delete_department);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 330, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: green;\n"
"selection-background-color: darkgray;\n"
"}"));
        pushButton_2 = new QPushButton(Delete_department);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 330, 101, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: red;\n"
"selection-background-color: darkgray;\n"
"}"));

        retranslateUi(Delete_department);

        QMetaObject::connectSlotsByName(Delete_department);
    } // setupUi

    void retranslateUi(QDialog *Delete_department)
    {
        Delete_department->setWindowTitle(QApplication::translate("Delete_department", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Delete_department", "LOAD", nullptr));
        pushButton_2->setText(QApplication::translate("Delete_department", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_department: public Ui_Delete_department {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_DEPARTMENT_H
