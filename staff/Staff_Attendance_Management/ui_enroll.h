/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enroll
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameInp;
    QLabel *emailLabel;
    QLineEdit *emailInp;
    QLabel *addressLabel;
    QLineEdit *addressInp;
    QLabel *roleLabel;
    QLineEdit *roleInp;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *backBtn;

    void setupUi(QWidget *Enroll)
    {
        if (Enroll->objectName().isEmpty())
            Enroll->setObjectName(QString::fromUtf8("Enroll"));
        Enroll->resize(626, 399);
        Enroll->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/assets/How-Does-the-Attendance-Management-System-Help-the-Employees (1).jpg);\n"
"color: black;\n"
""));
        formLayoutWidget = new QWidget(Enroll);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(130, 120, 371, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 20px;\n"
"font: Arial;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameInp = new QLineEdit(formLayoutWidget);
        nameInp->setObjectName(QString::fromUtf8("nameInp"));
        nameInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameInp);

        emailLabel = new QLabel(formLayoutWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 20px;\n"
"font: Arial;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailInp = new QLineEdit(formLayoutWidget);
        emailInp->setObjectName(QString::fromUtf8("emailInp"));
        emailInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, emailInp);

        addressLabel = new QLabel(formLayoutWidget);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));
        addressLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 20px;\n"
"font: Arial;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, addressLabel);

        addressInp = new QLineEdit(formLayoutWidget);
        addressInp->setObjectName(QString::fromUtf8("addressInp"));
        addressInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, addressInp);

        roleLabel = new QLabel(formLayoutWidget);
        roleLabel->setObjectName(QString::fromUtf8("roleLabel"));
        roleLabel->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 20px;\n"
"font: Arial;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, roleLabel);

        roleInp = new QLineEdit(formLayoutWidget);
        roleInp->setObjectName(QString::fromUtf8("roleInp"));
        roleInp->setStyleSheet(QString::fromUtf8("height: 25px;\n"
"color: black;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, roleInp);

        pushButton = new QPushButton(Enroll);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 280, 80, 41));
        pushButton->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
" padding: 10px;\n"
" box-shadow: 2px 2px grey;\n"
" font-size: 18px;\n"
" color: white;\n"
" background: green; \n"
"border-radius: 5px;\n"
"z-index: 1;"));
        label = new QLabel(Enroll);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 70, 231, 31));
        label->setStyleSheet(QString::fromUtf8("color: green;\n"
" font-size:30px;\n"
"opacity: 0.8;"));
        backBtn = new QPushButton(Enroll);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(420, 280, 80, 41));
        backBtn->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
" padding: 10px;\n"
" box-shadow: 2px 2px grey;\n"
" font-size: 18px;\n"
" color: white;\n"
" background: red; \n"
"border-radius: 5px;\n"
"z-index: 1;"));

        retranslateUi(Enroll);

        QMetaObject::connectSlotsByName(Enroll);
    } // setupUi

    void retranslateUi(QWidget *Enroll)
    {
        Enroll->setWindowTitle(QApplication::translate("Enroll", "Form", nullptr));
        nameLabel->setText(QApplication::translate("Enroll", "Name", nullptr));
        emailLabel->setText(QApplication::translate("Enroll", "Email", nullptr));
        addressLabel->setText(QApplication::translate("Enroll", "Address", nullptr));
        roleLabel->setText(QApplication::translate("Enroll", "Role", nullptr));
        pushButton->setText(QApplication::translate("Enroll", "Submit", nullptr));
        label->setText(QApplication::translate("Enroll", "Enroll New Staff", nullptr));
        backBtn->setText(QApplication::translate("Enroll", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enroll: public Ui_Enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
