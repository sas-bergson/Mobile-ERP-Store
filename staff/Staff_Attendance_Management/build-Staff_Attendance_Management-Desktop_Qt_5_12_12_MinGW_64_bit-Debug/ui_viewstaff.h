/********************************************************************************
** Form generated from reading UI file 'viewstaff.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSTAFF_H
#define UI_VIEWSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewStaff
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *viewStaff)
    {
        if (viewStaff->objectName().isEmpty())
            viewStaff->setObjectName(QString::fromUtf8("viewStaff"));
        viewStaff->resize(755, 382);
        viewStaff->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/assets/banner (2).jpg);"));
        tableView = new QTableView(viewStaff);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 0, 741, 311));
        tableView->setStyleSheet(QString::fromUtf8("color: white;\n"
"background: black;\n"
"opacity: 0.8;\n"
"fon-size: 16px;\n"
"background-image: url(:/assets/banner (2).jpg);\n"
""));
        pushButton = new QPushButton(viewStaff);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 320, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
" padding: 10px;\n"
" box-shadow: 2px 2px grey;\n"
" font-size: 18px;\n"
" color: white;\n"
" background: red; \n"
"border-radius: 5px;\n"
"z-index: 1;"));

        retranslateUi(viewStaff);

        QMetaObject::connectSlotsByName(viewStaff);
    } // setupUi

    void retranslateUi(QWidget *viewStaff)
    {
        viewStaff->setWindowTitle(QApplication::translate("viewStaff", "Form", nullptr));
        pushButton->setText(QApplication::translate("viewStaff", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewStaff: public Ui_viewStaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSTAFF_H
