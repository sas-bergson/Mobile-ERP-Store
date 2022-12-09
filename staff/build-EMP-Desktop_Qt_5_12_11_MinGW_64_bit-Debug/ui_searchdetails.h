/********************************************************************************
** Form generated from reading UI file 'searchdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDETAILS_H
#define UI_SEARCHDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Searchdetails
{
public:
    QLabel *label;
    QComboBox *SearchBox;
    QLineEdit *lineEdit_Sname;
    QPushButton *SearchBut;
    QTableView *EmptableView;
    QPushButton *HomeButton;
    QLabel *searchconnection;
    QLabel *label_2;

    void setupUi(QDialog *Searchdetails)
    {
        if (Searchdetails->objectName().isEmpty())
            Searchdetails->setObjectName(QString::fromUtf8("Searchdetails"));
        Searchdetails->resize(759, 540);
        Searchdetails->setStyleSheet(QString::fromUtf8("#Searchdetails\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        label = new QLabel(Searchdetails);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(176, 3, 361, 71));
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)\n"
""));
        SearchBox = new QComboBox(Searchdetails);
        SearchBox->addItem(QString());
        SearchBox->addItem(QString());
        SearchBox->addItem(QString());
        SearchBox->setObjectName(QString::fromUtf8("SearchBox"));
        SearchBox->setGeometry(QRect(178, 70, 361, 51));
        SearchBox->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_Sname = new QLineEdit(Searchdetails);
        lineEdit_Sname->setObjectName(QString::fromUtf8("lineEdit_Sname"));
        lineEdit_Sname->setGeometry(QRect(180, 140, 361, 51));
        SearchBut = new QPushButton(Searchdetails);
        SearchBut->setObjectName(QString::fromUtf8("SearchBut"));
        SearchBut->setGeometry(QRect(180, 220, 361, 51));
        SearchBut->setStyleSheet(QString::fromUtf8("#SearchBut\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#SearchBut:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        EmptableView = new QTableView(Searchdetails);
        EmptableView->setObjectName(QString::fromUtf8("EmptableView"));
        EmptableView->setGeometry(QRect(70, 290, 601, 181));
        HomeButton = new QPushButton(Searchdetails);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setGeometry(QRect(620, 10, 141, 61));
        HomeButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(255, 176, 107);"));
        searchconnection = new QLabel(Searchdetails);
        searchconnection->setObjectName(QString::fromUtf8("searchconnection"));
        searchconnection->setGeometry(QRect(190, 489, 321, 31));
        label_2 = new QLabel(Searchdetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 290, 16, 181));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));

        retranslateUi(Searchdetails);

        QMetaObject::connectSlotsByName(Searchdetails);
    } // setupUi

    void retranslateUi(QDialog *Searchdetails)
    {
        Searchdetails->setWindowTitle(QApplication::translate("Searchdetails", "Dialog", nullptr));
        label->setText(QApplication::translate("Searchdetails", "                                     SEARCH  EMPLOYEE", nullptr));
        SearchBox->setItemText(0, QApplication::translate("Searchdetails", "Employee ID", nullptr));
        SearchBox->setItemText(1, QApplication::translate("Searchdetails", "Name", nullptr));
        SearchBox->setItemText(2, QApplication::translate("Searchdetails", "Department", nullptr));

        SearchBut->setText(QApplication::translate("Searchdetails", "SEARCH", nullptr));
        HomeButton->setText(QApplication::translate("Searchdetails", "HOME", nullptr));
        searchconnection->setText(QApplication::translate("Searchdetails", "TextLabel", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Searchdetails: public Ui_Searchdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDETAILS_H
