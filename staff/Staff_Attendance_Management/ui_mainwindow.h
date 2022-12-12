/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *LoginButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Email;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pass;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuLogin_App;
    QMenu *menuEnter_Your_Cresentials;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(822, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(" color: white;\n"
" display:flex; \n"
"justify-content: center; \n"
"align-items: center;\n"
"background-image: url(:/assets/assets/plan.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 30, 401, 271));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8(" color: black;\n"
" font-family: gill sans;\n"
" font-size: 15px;\n"
"background: white;\n"
"background-image: url(:/assets/assets/plan.jpg);"));
        LoginButton = new QPushButton(groupBox);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(170, 180, 71, 31));
        LoginButton->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
" color: white; \n"
"background: green;\n"
" cursor:pointer;"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 80, 241, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 20px;\n"
"font: Arial;"));

        horizontalLayout->addWidget(label);

        Email = new QLineEdit(layoutWidget);
        Email->setObjectName(QString::fromUtf8("Email"));
        sizePolicy.setHeightForWidth(Email->sizePolicy().hasHeightForWidth());
        Email->setSizePolicy(sizePolicy);
        Email->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout->addWidget(Email);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 130, 241, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: purple;\n"
"font-size: 20px;\n"
"font: Arial;"));

        horizontalLayout_2->addWidget(label_2);

        pass = new QLineEdit(layoutWidget1);
        pass->setObjectName(QString::fromUtf8("pass"));
        sizePolicy.setHeightForWidth(pass->sizePolicy().hasHeightForWidth());
        pass->setSizePolicy(sizePolicy);
        pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(pass);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 180, 71, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
" color: white; \n"
"background:red;\n"
" cursor:pointer;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 822, 20));
        menuLogin_App = new QMenu(menubar);
        menuLogin_App->setObjectName(QString::fromUtf8("menuLogin_App"));
        menuEnter_Your_Cresentials = new QMenu(menubar);
        menuEnter_Your_Cresentials->setObjectName(QString::fromUtf8("menuEnter_Your_Cresentials"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(Email);
        label_2->setBuddy(pass);
#endif // QT_NO_SHORTCUT

        menubar->addAction(menuLogin_App->menuAction());
        menubar->addAction(menuEnter_Your_Cresentials->menuAction());
        menuEnter_Your_Cresentials->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sign In", nullptr));
        LoginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QApplication::translate("MainWindow", "Email", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        menuLogin_App->setTitle(QApplication::translate("MainWindow", "Login App", nullptr));
        menuEnter_Your_Cresentials->setTitle(QApplication::translate("MainWindow", "Enter Your Cresentials", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
