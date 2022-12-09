/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *SearchButton;
    QPushButton *AddButton;
    QPushButton *UpButton;
    QPushButton *DelButton;
    QLabel *connectionLabel;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 899);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow\n"
"{\n"
"	background:#2D2D2D;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -50, 871, 861));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Assets/mainmenu.jpg")));
        SearchButton = new QPushButton(centralwidget);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        SearchButton->setGeometry(QRect(240, 150, 321, 111));
        SearchButton->setStyleSheet(QString::fromUtf8("#SearchButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#SearchButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Assets/icons8_Find_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        SearchButton->setIcon(icon);
        SearchButton->setIconSize(QSize(32, 32));
        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(240, 270, 321, 111));
        AddButton->setStyleSheet(QString::fromUtf8("#AddButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#AddButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Assets/icons8_Add_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddButton->setIcon(icon1);
        AddButton->setIconSize(QSize(32, 32));
        UpButton = new QPushButton(centralwidget);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        UpButton->setGeometry(QRect(240, 390, 321, 111));
        UpButton->setStyleSheet(QString::fromUtf8("#UpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#UpButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Assets/icons8_Registration_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        UpButton->setIcon(icon2);
        UpButton->setIconSize(QSize(32, 32));
        DelButton = new QPushButton(centralwidget);
        DelButton->setObjectName(QString::fromUtf8("DelButton"));
        DelButton->setGeometry(QRect(240, 510, 321, 111));
        DelButton->setStyleSheet(QString::fromUtf8("#DelButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#1F1F1F;\n"
"}\n"
"#DelButton:hover\n"
"{\n"
"	text-align:left;\n"
"	padding-left:26px;\n"
"	border:none;	\n"
"	color:white;	\n"
"	background:#333;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Assets/icons8_Remove_User_Male_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        DelButton->setIcon(icon3);
        DelButton->setIconSize(QSize(32, 32));
        connectionLabel = new QLabel(centralwidget);
        connectionLabel->setObjectName(QString::fromUtf8("connectionLabel"));
        connectionLabel->setGeometry(QRect(230, 640, 351, 61));
        connectionLabel->setStyleSheet(QString::fromUtf8("#connectionLabel\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 10, 591, 131));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Assets/Corporate Management.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        SearchButton->setText(QApplication::translate("MainWindow", "EMPLOYEES INFO", nullptr));
        AddButton->setText(QApplication::translate("MainWindow", "ADD EMPLOYEE", nullptr));
        UpButton->setText(QApplication::translate("MainWindow", "UPDATE EMPLOYEE", nullptr));
        DelButton->setText(QApplication::translate("MainWindow", "DELETE EMPLOYEE", nullptr));
        connectionLabel->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
