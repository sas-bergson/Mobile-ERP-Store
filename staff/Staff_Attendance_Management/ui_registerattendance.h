/********************************************************************************
** Form generated from reading UI file 'registerattendance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERATTENDANCE_H
#define UI_REGISTERATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterAttendance
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *emailLabel;
    QLineEdit *emailInp;
    QLabel *startTimeLabel;
    QLineEdit *startTimeInp;
    QLabel *closeTimeLabel;
    QLineEdit *closeTimeInp;
    QLabel *dateLabel;
    QLineEdit *dateInp;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *RegisterAttendance)
    {
        if (RegisterAttendance->objectName().isEmpty())
            RegisterAttendance->setObjectName(QString::fromUtf8("RegisterAttendance"));
        RegisterAttendance->resize(802, 380);
        RegisterAttendance->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/assets/plan.jpg);\n"
"font-size: 16px;"));
        formLayoutWidget = new QWidget(RegisterAttendance);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 100, 651, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        emailLabel = new QLabel(formLayoutWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 25px;\n"
"font: Arial;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        emailInp = new QLineEdit(formLayoutWidget);
        emailInp->setObjectName(QString::fromUtf8("emailInp"));
        emailInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;\n"
"font: italic;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, emailInp);

        startTimeLabel = new QLabel(formLayoutWidget);
        startTimeLabel->setObjectName(QString::fromUtf8("startTimeLabel"));
        startTimeLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 25px;\n"
"font: Arial;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, startTimeLabel);

        startTimeInp = new QLineEdit(formLayoutWidget);
        startTimeInp->setObjectName(QString::fromUtf8("startTimeInp"));
        startTimeInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;\n"
"font: italic;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, startTimeInp);

        closeTimeLabel = new QLabel(formLayoutWidget);
        closeTimeLabel->setObjectName(QString::fromUtf8("closeTimeLabel"));
        closeTimeLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 25px;\n"
"font: Arial;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, closeTimeLabel);

        closeTimeInp = new QLineEdit(formLayoutWidget);
        closeTimeInp->setObjectName(QString::fromUtf8("closeTimeInp"));
        closeTimeInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;\n"
"font: italic;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, closeTimeInp);

        dateLabel = new QLabel(formLayoutWidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 25px;\n"
"font: Arial;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, dateLabel);

        dateInp = new QLineEdit(formLayoutWidget);
        dateInp->setObjectName(QString::fromUtf8("dateInp"));
        dateInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;\n"
"font: italic;\n"
"font-size: 16px;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, dateInp);

        pushButton = new QPushButton(RegisterAttendance);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 310, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
" padding: 10px;\n"
" box-shadow: 2px 2px grey;\n"
" font-size: 18px;\n"
" color: white;\n"
" background: green; \n"
"border-radius: 5px;\n"
"z-index: 1;"));
        textEdit = new QTextEdit(RegisterAttendance);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(220, 29, 331, 51));
        textEdit->setStyleSheet(QString::fromUtf8("color: blue;"));
        pushButton_2 = new QPushButton(RegisterAttendance);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 310, 101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
" padding: 10px;\n"
" box-shadow: 2px 2px grey;\n"
" font-size: 18px;\n"
" color: white;\n"
" background: red; \n"
"border-radius: 5px;\n"
"z-index: 1;\n"
""));

        retranslateUi(RegisterAttendance);

        QMetaObject::connectSlotsByName(RegisterAttendance);
    } // setupUi

    void retranslateUi(QWidget *RegisterAttendance)
    {
        RegisterAttendance->setWindowTitle(QApplication::translate("RegisterAttendance", "Form", nullptr));
        emailLabel->setText(QApplication::translate("RegisterAttendance", "Email", nullptr));
        startTimeLabel->setText(QApplication::translate("RegisterAttendance", "Start Time", nullptr));
        closeTimeLabel->setText(QApplication::translate("RegisterAttendance", "Close Time", nullptr));
        dateLabel->setText(QApplication::translate("RegisterAttendance", "Date", nullptr));
        pushButton->setText(QApplication::translate("RegisterAttendance", "Submit", nullptr));
        textEdit->setHtml(QApplication::translate("RegisterAttendance", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#0000ff;\"> Register Staff Attendance</span></h2></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("RegisterAttendance", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterAttendance: public Ui_RegisterAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERATTENDANCE_H
