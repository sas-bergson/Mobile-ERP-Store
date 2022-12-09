/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QTableView *SearchtableView;
    QPushButton *Close;
    QLabel *searchconnLabel;
    QLabel *label;
    QPushButton *loadButton;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(680, 586);
        Search->setStyleSheet(QString::fromUtf8("#Search\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        SearchtableView = new QTableView(Search);
        SearchtableView->setObjectName(QString::fromUtf8("SearchtableView"));
        SearchtableView->setGeometry(QRect(10, 100, 511, 321));
        SearchtableView->setStyleSheet(QString::fromUtf8("#label_8\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        Close = new QPushButton(Search);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(350, 460, 191, 61));
        Close->setStyleSheet(QString::fromUtf8("#Close\n"
"{\n"
"	border:none;\n"
"	background:#F33253;\n"
"	color:white;\n"
"	border-radius:16px;\n"
"}\n"
"\n"
"#Close:hover\n"
"{\n"
"	border:2px solid #F33253;\n"
"	background:#2D2D2D;\n"
"	color:#F33253;\n"
"	border-radius:16px;\n"
"}"));
        searchconnLabel = new QLabel(Search);
        searchconnLabel->setObjectName(QString::fromUtf8("searchconnLabel"));
        searchconnLabel->setGeometry(QRect(180, 550, 221, 20));
        label = new QLabel(Search);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 511, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"	color:white;\n"
"	background:#11110E;\n"
"padding-left:10px;\n"
"}"));
        loadButton = new QPushButton(Search);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(50, 460, 201, 61));
        loadButton->setStyleSheet(QString::fromUtf8("#loadButton\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#loadButton:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Dialog", nullptr));
        Close->setText(QApplication::translate("Search", "Close", nullptr));
        searchconnLabel->setText(QApplication::translate("Search", "TextLabel", nullptr));
        label->setText(QApplication::translate("Search", "                                                         Employee List", nullptr));
        loadButton->setText(QApplication::translate("Search", "Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
