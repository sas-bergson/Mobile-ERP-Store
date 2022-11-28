/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Update
{
public:
    QLabel *upconnection;
    QLabel *label_10;
    QPushButton *Back;
    QPushButton *UpButton;
    QTableView *UptableView;
    QLineEdit *UpName;
    QLineEdit *Upid;
    QComboBox *Updep;
    QLineEdit *UpPhone;
    QComboBox *Upgen;
    QDateEdit *dateEdit;
    QLineEdit *UpSalary;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *Ref;

    void setupUi(QDialog *Update)
    {
        if (Update->objectName().isEmpty())
            Update->setObjectName(QString::fromUtf8("Update"));
        Update->resize(662, 1011);
        Update->setStyleSheet(QString::fromUtf8("#Update\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        upconnection = new QLabel(Update);
        upconnection->setObjectName(QString::fromUtf8("upconnection"));
        upconnection->setGeometry(QRect(190, 10, 271, 31));
        upconnection->setStyleSheet(QString::fromUtf8("#upconnection\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        label_10 = new QLabel(Update);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 0, 111, 31));
        Back = new QPushButton(Update);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(300, 650, 191, 61));
        Back->setStyleSheet(QString::fromUtf8("#Back\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#Back:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        UpButton = new QPushButton(Update);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        UpButton->setGeometry(QRect(190, 320, 181, 41));
        UpButton->setStyleSheet(QString::fromUtf8("#UpButton\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#UpButton:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        UptableView = new QTableView(Update);
        UptableView->setObjectName(QString::fromUtf8("UptableView"));
        UptableView->setGeometry(QRect(0, 390, 511, 251));
        UpName = new QLineEdit(Update);
        UpName->setObjectName(QString::fromUtf8("UpName"));
        UpName->setGeometry(QRect(10, 120, 231, 51));
        Upid = new QLineEdit(Update);
        Upid->setObjectName(QString::fromUtf8("Upid"));
        Upid->setGeometry(QRect(100, 50, 231, 51));
        Updep = new QComboBox(Update);
        Updep->setObjectName(QString::fromUtf8("Updep"));
        Updep->setGeometry(QRect(260, 120, 241, 51));
        UpPhone = new QLineEdit(Update);
        UpPhone->setObjectName(QString::fromUtf8("UpPhone"));
        UpPhone->setGeometry(QRect(10, 190, 231, 51));
        Upgen = new QComboBox(Update);
        Upgen->setObjectName(QString::fromUtf8("Upgen"));
        Upgen->setGeometry(QRect(260, 260, 241, 51));
        dateEdit = new QDateEdit(Update);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(260, 190, 241, 51));
        UpSalary = new QLineEdit(Update);
        UpSalary->setObjectName(QString::fromUtf8("UpSalary"));
        UpSalary->setGeometry(QRect(10, 260, 231, 51));
        label = new QLabel(Update);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 360, 511, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_2 = new QLabel(Update);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 89, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"	color:white;\n"
"}"));
        label_3 = new QLabel(Update);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(106, 23, 51, 21));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"	color:white;\n"
"}"));
        label_4 = new QLabel(Update);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 95, 71, 21));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"	color:white;\n"
"}"));
        label_5 = new QLabel(Update);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 170, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("#label_5\n"
"{\n"
"	color:white;\n"
"}"));
        label_6 = new QLabel(Update);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 240, 71, 21));
        label_6->setStyleSheet(QString::fromUtf8("#label_6\n"
"{\n"
"	color:white;\n"
"}"));
        label_7 = new QLabel(Update);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(260, 170, 91, 16));
        label_7->setStyleSheet(QString::fromUtf8("#label_7\n"
"{\n"
"	color:white;\n"
"}"));
        label_8 = new QLabel(Update);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 240, 101, 16));
        label_8->setStyleSheet(QString::fromUtf8("#label_8\n"
"{\n"
"	color:white;\n"
"}"));
        Ref = new QPushButton(Update);
        Ref->setObjectName(QString::fromUtf8("Ref"));
        Ref->setGeometry(QRect(40, 650, 191, 61));
        Ref->setStyleSheet(QString::fromUtf8("#Ref\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#Ref:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));

        retranslateUi(Update);

        QMetaObject::connectSlotsByName(Update);
    } // setupUi

    void retranslateUi(QDialog *Update)
    {
        Update->setWindowTitle(QApplication::translate("Update", "Dialog", nullptr));
        upconnection->setText(QString());
        label_10->setText(QApplication::translate("Update", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#00aaff;\">UPDATE INFO</span><span style=\" font-style:italic; color:#00aaff;\"> : </span></p></body></html>", nullptr));
        Back->setText(QApplication::translate("Update", "Back", nullptr));
        UpButton->setText(QApplication::translate("Update", "Update", nullptr));
        label->setText(QApplication::translate("Update", "                                                         EMPLOYEE DATA", nullptr));
        label_2->setText(QApplication::translate("Update", "Name", nullptr));
        label_3->setText(QApplication::translate("Update", "  ID", nullptr));
        label_4->setText(QApplication::translate("Update", "Department", nullptr));
        label_5->setText(QApplication::translate("Update", "Phone No", nullptr));
        label_6->setText(QApplication::translate("Update", "Joining Salary", nullptr));
        label_7->setText(QApplication::translate("Update", "  Date Of Birth", nullptr));
        label_8->setText(QApplication::translate("Update", "Gender", nullptr));
        Ref->setText(QApplication::translate("Update", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update: public Ui_Update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
