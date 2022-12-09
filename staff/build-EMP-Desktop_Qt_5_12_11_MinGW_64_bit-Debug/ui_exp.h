/********************************************************************************
** Form generated from reading UI file 'exp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXP_H
#define UI_EXP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Exp
{
public:
    QTableView *DttableView;
    QPushButton *ExpB;
    QPushButton *ExUp;
    QPushButton *ExDel;
    QPushButton *ExLd;
    QLabel *label;
    QLineEdit *lineEdit_En;
    QLabel *label_2;
    QLineEdit *lineEdit_ExO;
    QLabel *label_3;
    QLineEdit *lineEdit_Dur;
    QLabel *label_4;
    QLineEdit *lineEdit_Pos;
    QLabel *label_5;
    QLineEdit *lineEdit_ExD;
    QLabel *Exconn;
    QPushButton *HB;
    QLineEdit *lineEdit_id;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;
    QListView *listView;

    void setupUi(QDialog *Exp)
    {
        if (Exp->objectName().isEmpty())
            Exp->setObjectName(QString::fromUtf8("Exp"));
        Exp->resize(712, 637);
        Exp->setStyleSheet(QString::fromUtf8("#Exp\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        DttableView = new QTableView(Exp);
        DttableView->setObjectName(QString::fromUtf8("DttableView"));
        DttableView->setGeometry(QRect(100, 380, 471, 221));
        ExpB = new QPushButton(Exp);
        ExpB->setObjectName(QString::fromUtf8("ExpB"));
        ExpB->setGeometry(QRect(50, 300, 111, 51));
        ExpB->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(204, 10, 4);"));
        ExUp = new QPushButton(Exp);
        ExUp->setObjectName(QString::fromUtf8("ExUp"));
        ExUp->setGeometry(QRect(190, 300, 111, 51));
        ExUp->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(204, 10, 4);"));
        ExDel = new QPushButton(Exp);
        ExDel->setObjectName(QString::fromUtf8("ExDel"));
        ExDel->setGeometry(QRect(320, 300, 111, 51));
        ExDel->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(204, 10, 4);"));
        ExLd = new QPushButton(Exp);
        ExLd->setObjectName(QString::fromUtf8("ExLd"));
        ExLd->setGeometry(QRect(450, 300, 121, 51));
        ExLd->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(204, 10, 4);"));
        label = new QLabel(Exp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 161, 41));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#label:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        lineEdit_En = new QLineEdit(Exp);
        lineEdit_En->setObjectName(QString::fromUtf8("lineEdit_En"));
        lineEdit_En->setGeometry(QRect(240, 50, 241, 41));
        label_2 = new QLabel(Exp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#label_2:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        lineEdit_ExO = new QLineEdit(Exp);
        lineEdit_ExO->setObjectName(QString::fromUtf8("lineEdit_ExO"));
        lineEdit_ExO->setGeometry(QRect(240, 100, 241, 41));
        label_3 = new QLabel(Exp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 150, 161, 41));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#label_3:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        lineEdit_Dur = new QLineEdit(Exp);
        lineEdit_Dur->setObjectName(QString::fromUtf8("lineEdit_Dur"));
        lineEdit_Dur->setGeometry(QRect(240, 150, 241, 41));
        label_4 = new QLabel(Exp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 200, 161, 41));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#label_4:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        lineEdit_Pos = new QLineEdit(Exp);
        lineEdit_Pos->setObjectName(QString::fromUtf8("lineEdit_Pos"));
        lineEdit_Pos->setGeometry(QRect(240, 200, 241, 41));
        label_5 = new QLabel(Exp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 250, 161, 41));
        label_5->setStyleSheet(QString::fromUtf8("#label_5\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#label_5:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        lineEdit_ExD = new QLineEdit(Exp);
        lineEdit_ExD->setObjectName(QString::fromUtf8("lineEdit_ExD"));
        lineEdit_ExD->setGeometry(QRect(240, 250, 241, 41));
        Exconn = new QLabel(Exp);
        Exconn->setObjectName(QString::fromUtf8("Exconn"));
        Exconn->setGeometry(QRect(160, 349, 271, 21));
        HB = new QPushButton(Exp);
        HB->setObjectName(QString::fromUtf8("HB"));
        HB->setGeometry(QRect(614, 0, 101, 51));
        HB->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(255, 176, 107);"));
        lineEdit_id = new QLineEdit(Exp);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(240, 0, 241, 41));
        label_6 = new QLabel(Exp);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 0, 161, 41));
        label_6->setStyleSheet(QString::fromUtf8("#label_6\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#label_6:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        label_7 = new QLabel(Exp);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 380, 16, 221));
        label_7->setStyleSheet(QString::fromUtf8("#label_7\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        comboBox = new QComboBox(Exp);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 380, 61, 22));
        listView = new QListView(Exp);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 400, 61, 201));

        retranslateUi(Exp);

        QMetaObject::connectSlotsByName(Exp);
    } // setupUi

    void retranslateUi(QDialog *Exp)
    {
        Exp->setWindowTitle(QApplication::translate("Exp", "Dialog", nullptr));
        ExpB->setText(QApplication::translate("Exp", "ADD", nullptr));
        ExUp->setText(QApplication::translate("Exp", "UPDATE", nullptr));
        ExDel->setText(QApplication::translate("Exp", "DELETE", nullptr));
        ExLd->setText(QApplication::translate("Exp", "REFRESH", nullptr));
        label->setText(QApplication::translate("Exp", "NAME", nullptr));
        label_2->setText(QApplication::translate("Exp", "ORGANISATION NAME", nullptr));
        label_3->setText(QApplication::translate("Exp", "DURATION", nullptr));
        label_4->setText(QApplication::translate("Exp", "POSITION", nullptr));
        label_5->setText(QApplication::translate("Exp", "DEPARTMENT", nullptr));
        Exconn->setText(QApplication::translate("Exp", "TextLabel", nullptr));
        HB->setText(QApplication::translate("Exp", "BACK", nullptr));
        label_6->setText(QApplication::translate("Exp", "      ID", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Exp: public Ui_Exp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXP_H
