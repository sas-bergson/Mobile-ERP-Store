/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Delete
{
public:
    QTableView *DeltableView;
    QLabel *label;
    QLabel *label_5;
    QPushButton *BackB;
    QLabel *delconnlabel;
    QPushButton *Load;

    void setupUi(QDialog *Delete)
    {
        if (Delete->objectName().isEmpty())
            Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->resize(697, 827);
        Delete->setStyleSheet(QString::fromUtf8("#Delete\n"
"{\n"
"	background:#2D2D2D;\n"
"}\n"
"\n"
""));
        DeltableView = new QTableView(Delete);
        DeltableView->setObjectName(QString::fromUtf8("DeltableView"));
        DeltableView->setGeometry(QRect(0, 100, 561, 541));
        label = new QLabel(Delete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 50, 561, 51));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        label_5 = new QLabel(Delete);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 0, 191, 51));
        BackB = new QPushButton(Delete);
        BackB->setObjectName(QString::fromUtf8("BackB"));
        BackB->setGeometry(QRect(380, 660, 211, 61));
        BackB->setStyleSheet(QString::fromUtf8("#BackB\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#BackB:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        delconnlabel = new QLabel(Delete);
        delconnlabel->setObjectName(QString::fromUtf8("delconnlabel"));
        delconnlabel->setGeometry(QRect(190, 732, 281, 31));
        Load = new QPushButton(Delete);
        Load->setObjectName(QString::fromUtf8("Load"));
        Load->setGeometry(QRect(60, 660, 221, 61));
        Load->setStyleSheet(QString::fromUtf8("#Load\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#Load:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));

        retranslateUi(Delete);

        QMetaObject::connectSlotsByName(Delete);
    } // setupUi

    void retranslateUi(QDialog *Delete)
    {
        Delete->setWindowTitle(QApplication::translate("Delete", "Dialog", nullptr));
        label->setText(QApplication::translate("Delete", "                                                         EMPLOYEE DATA", nullptr));
        label_5->setText(QApplication::translate("Delete", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">CHOOSE  EMPLOYEE</span></p></body></html>", nullptr));
        BackB->setText(QApplication::translate("Delete", "Back", nullptr));
        delconnlabel->setText(QApplication::translate("Delete", "TextLabel", nullptr));
        Load->setText(QApplication::translate("Delete", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete: public Ui_Delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
