/********************************************************************************
** Form generated from reading UI file 'showexp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWEXP_H
#define UI_SHOWEXP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShowExp
{
public:
    QLabel *label;
    QTableView *ShtableView;
    QPushButton *GBack;
    QPushButton *SBack;
    QLabel *shxconn;
    QLabel *label_2;

    void setupUi(QDialog *ShowExp)
    {
        if (ShowExp->objectName().isEmpty())
            ShowExp->setObjectName(QString::fromUtf8("ShowExp"));
        ShowExp->resize(754, 564);
        ShowExp->setStyleSheet(QString::fromUtf8("#ShowExp\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        label = new QLabel(ShowExp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 541, 41));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        ShtableView = new QTableView(ShowExp);
        ShtableView->setObjectName(QString::fromUtf8("ShtableView"));
        ShtableView->setGeometry(QRect(70, 70, 541, 371));
        GBack = new QPushButton(ShowExp);
        GBack->setObjectName(QString::fromUtf8("GBack"));
        GBack->setGeometry(QRect(600, 0, 161, 61));
        GBack->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(255, 176, 107);"));
        SBack = new QPushButton(ShowExp);
        SBack->setObjectName(QString::fromUtf8("SBack"));
        SBack->setGeometry(QRect(270, 470, 181, 61));
        SBack->setStyleSheet(QString::fromUtf8("#SBack\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#SBack:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        shxconn = new QLabel(ShowExp);
        shxconn->setObjectName(QString::fromUtf8("shxconn"));
        shxconn->setGeometry(QRect(250, 540, 221, 20));
        label_2 = new QLabel(ShowExp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 70, 16, 371));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));

        retranslateUi(ShowExp);

        QMetaObject::connectSlotsByName(ShowExp);
    } // setupUi

    void retranslateUi(QDialog *ShowExp)
    {
        ShowExp->setWindowTitle(QApplication::translate("ShowExp", "Dialog", nullptr));
        label->setText(QApplication::translate("ShowExp", "                                                                      EMPLOYEE EXPERIENCE LIST", nullptr));
        GBack->setText(QApplication::translate("ShowExp", "Back", nullptr));
        SBack->setText(QApplication::translate("ShowExp", "LOAD", nullptr));
        shxconn->setText(QApplication::translate("ShowExp", "TextLabel", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowExp: public Ui_ShowExp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWEXP_H
