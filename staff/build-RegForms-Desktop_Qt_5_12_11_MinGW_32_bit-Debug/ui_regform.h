/********************************************************************************
** Form generated from reading UI file 'regform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGFORM_H
#define UI_REGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegForm
{
public:
    QWidget *centralwidget;
    QPushButton *Save_Rec;
    QPushButton *Clear_Rec;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *NameEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegForm)
    {
        if (RegForm->objectName().isEmpty())
            RegForm->setObjectName(QString::fromUtf8("RegForm"));
        RegForm->resize(800, 600);
        centralwidget = new QWidget(RegForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Save_Rec = new QPushButton(centralwidget);
        Save_Rec->setObjectName(QString::fromUtf8("Save_Rec"));
        Save_Rec->setGeometry(QRect(600, 460, 93, 28));
        Clear_Rec = new QPushButton(centralwidget);
        Clear_Rec->setObjectName(QString::fromUtf8("Clear_Rec"));
        Clear_Rec->setGeometry(QRect(480, 460, 93, 28));
        Clear_Rec->setAutoFillBackground(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 71, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: white"));
        label->setFrameShape(QFrame::NoFrame);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 150, 81, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: white"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 220, 55, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: white\n"
""));
        label_3->setFrameShape(QFrame::NoFrame);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 280, 55, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: white\n"
""));
        label_4->setFrameShape(QFrame::NoFrame);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 360, 55, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: white"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 360, 55, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: white"));
        label_6->setFrameShape(QFrame::NoFrame);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(330, 360, 131, 22));
        comboBox->setStyleSheet(QString::fromUtf8("border-radius: 5px\n"
"\n"
""));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 360, 101, 22));
        comboBox_2->setStyleSheet(QString::fromUtf8("border-radius: 5px\n"
"\n"
""));
        NameEdit = new QLineEdit(centralwidget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));
        NameEdit->setGeometry(QRect(140, 90, 411, 31));
        NameEdit->setStyleSheet(QString::fromUtf8("border-radius: 5px\n"
"\n"
"\n"
"\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 150, 491, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius: 5px\n"
"\n"
"\n"
""));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 220, 51, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-radius: 5px\n"
"\n"
""));
        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(150, 280, 73, 22));
        comboBox_3->setStyleSheet(QString::fromUtf8("border-radius: 5px\n"
"\n"
""));
        RegForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        RegForm->setMenuBar(menubar);
        statusbar = new QStatusBar(RegForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RegForm->setStatusBar(statusbar);

        retranslateUi(RegForm);

        QMetaObject::connectSlotsByName(RegForm);
    } // setupUi

    void retranslateUi(QMainWindow *RegForm)
    {
        RegForm->setWindowTitle(QApplication::translate("RegForm", "RegForm", nullptr));
        Save_Rec->setText(QApplication::translate("RegForm", "Save", nullptr));
        Clear_Rec->setText(QApplication::translate("RegForm", "Clear Records", nullptr));
        label->setText(QApplication::translate("RegForm", "Name :", nullptr));
        label_2->setText(QApplication::translate("RegForm", "Surname :", nullptr));
        label_3->setText(QApplication::translate("RegForm", "Age : ", nullptr));
        label_4->setText(QApplication::translate("RegForm", "Sex :     ", nullptr));
        label_5->setText(QApplication::translate("RegForm", "Type :", nullptr));
        label_6->setText(QApplication::translate("RegForm", "Role :", nullptr));
        comboBox->setItemText(0, QApplication::translate("RegForm", "Choice", nullptr));
        comboBox->setItemText(1, QApplication::translate("RegForm", "Manager", nullptr));
        comboBox->setItemText(2, QApplication::translate("RegForm", "Teller", nullptr));
        comboBox->setItemText(3, QApplication::translate("RegForm", "Vendor", nullptr));
        comboBox->setItemText(4, QApplication::translate("RegForm", "Adminstrator", nullptr));
        comboBox->setItemText(5, QApplication::translate("RegForm", "SocialManager", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("RegForm", "Choice", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("RegForm", "Permanent", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("RegForm", "Temporary", nullptr));

        comboBox_3->setItemText(0, QApplication::translate("RegForm", "Male", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("RegForm", "Female", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("RegForm", "Non-binary", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("RegForm", "Others", nullptr));

    } // retranslateUi

};

namespace Ui {
    class RegForm: public Ui_RegForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGFORM_H
