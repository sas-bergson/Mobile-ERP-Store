/********************************************************************************
** Form generated from reading UI file 'addemp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMP_H
#define UI_ADDEMP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddEmp
{
public:
    QLabel *addconnection;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Ename;
    QComboBox *Egen;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLabel *label_5;
    QLineEdit *Ephone;
    QLabel *label_6;
    QLineEdit *Ejon;
    QPushButton *SubButton;
    QPushButton *BackButton;
    QLabel *label_7;
    QLineEdit *Eid;
    QLabel *label_8;
    QPushButton *pushButton;
    QComboBox *Edep;

    void setupUi(QDialog *AddEmp)
    {
        if (AddEmp->objectName().isEmpty())
            AddEmp->setObjectName(QString::fromUtf8("AddEmp"));
        AddEmp->resize(688, 708);
        AddEmp->setStyleSheet(QString::fromUtf8("#AddEmp\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        addconnection = new QLabel(AddEmp);
        addconnection->setObjectName(QString::fromUtf8("addconnection"));
        addconnection->setGeometry(QRect(190, 660, 291, 31));
        addconnection->setStyleSheet(QString::fromUtf8("#addconnection\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        label = new QLabel(AddEmp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 311, 71));
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
        label_2 = new QLabel(AddEmp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 100, 311, 71));
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
        label_3 = new QLabel(AddEmp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 350, 311, 71));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#labe_3l:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        Ename = new QLineEdit(AddEmp);
        Ename->setObjectName(QString::fromUtf8("Ename"));
        Ename->setGeometry(QRect(360, 20, 311, 71));
        Ename->setStyleSheet(QString::fromUtf8("#lineEdit_name\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        Egen = new QComboBox(AddEmp);
        Egen->setObjectName(QString::fromUtf8("Egen"));
        Egen->setGeometry(QRect(360, 350, 311, 71));
        Egen->setStyleSheet(QString::fromUtf8("#Egen\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        label_4 = new QLabel(AddEmp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 430, 311, 71));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#labe_4:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        dateEdit = new QDateEdit(AddEmp);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(360, 430, 311, 71));
        dateEdit->setStyleSheet(QString::fromUtf8("#dateEdit\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        label_5 = new QLabel(AddEmp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 260, 311, 71));
        label_5->setStyleSheet(QString::fromUtf8("#label_5\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#labe_5:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        Ephone = new QLineEdit(AddEmp);
        Ephone->setObjectName(QString::fromUtf8("Ephone"));
        Ephone->setGeometry(QRect(360, 260, 311, 71));
        Ephone->setStyleSheet(QString::fromUtf8("#lineEdit_PH\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        label_6 = new QLabel(AddEmp);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 510, 311, 71));
        label_6->setStyleSheet(QString::fromUtf8("#label_6\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#labe_6:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        Ejon = new QLineEdit(AddEmp);
        Ejon->setObjectName(QString::fromUtf8("Ejon"));
        Ejon->setGeometry(QRect(360, 510, 311, 71));
        Ejon->setStyleSheet(QString::fromUtf8("#lineEdit_jo\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        SubButton = new QPushButton(AddEmp);
        SubButton->setObjectName(QString::fromUtf8("SubButton"));
        SubButton->setGeometry(QRect(90, 600, 211, 51));
        SubButton->setStyleSheet(QString::fromUtf8("#SubButton\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#SubButton:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        BackButton = new QPushButton(AddEmp);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(420, 600, 211, 51));
        BackButton->setStyleSheet(QString::fromUtf8("#BackButton\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#BackButton:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        label_7 = new QLabel(AddEmp);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, -30, 241, 71));
        Eid = new QLineEdit(AddEmp);
        Eid->setObjectName(QString::fromUtf8("Eid"));
        Eid->setGeometry(QRect(360, 180, 311, 71));
        label_8 = new QLabel(AddEmp);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 180, 311, 71));
        label_8->setStyleSheet(QString::fromUtf8("#label_8\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#label_8:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        pushButton = new QPushButton(AddEmp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(610, 190, 61, 41));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"	border:none;\n"
"	background:white;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Assets/id_card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        Edep = new QComboBox(AddEmp);
        Edep->setObjectName(QString::fromUtf8("Edep"));
        Edep->setGeometry(QRect(360, 100, 311, 71));
        Edep->setStyleSheet(QString::fromUtf8("#Edep\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));

        retranslateUi(AddEmp);

        QMetaObject::connectSlotsByName(AddEmp);
    } // setupUi

    void retranslateUi(QDialog *AddEmp)
    {
        AddEmp->setWindowTitle(QApplication::translate("AddEmp", "Dialog", nullptr));
        addconnection->setText(QApplication::translate("AddEmp", "TextLabel", nullptr));
        label->setText(QApplication::translate("AddEmp", "Name", nullptr));
        label_2->setText(QApplication::translate("AddEmp", "Department", nullptr));
        label_3->setText(QApplication::translate("AddEmp", "Gender", nullptr));
        label_4->setText(QApplication::translate("AddEmp", "Date Of Birth", nullptr));
        label_5->setText(QApplication::translate("AddEmp", "Phone No", nullptr));
        label_6->setText(QApplication::translate("AddEmp", "Joining Salary ", nullptr));
        SubButton->setText(QApplication::translate("AddEmp", "Submit", nullptr));
        BackButton->setText(QApplication::translate("AddEmp", "Back", nullptr));
        label_7->setText(QApplication::translate("AddEmp", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#00aaff;\">EMPLOYEES INFO</span><span style=\" font-style:italic; color:#00aaff;\"> : </span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("AddEmp", "Employee ID", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddEmp: public Ui_AddEmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMP_H
