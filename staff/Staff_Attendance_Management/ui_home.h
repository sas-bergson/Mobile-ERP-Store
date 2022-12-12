/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *AddBtn;
    QPushButton *ViewBtn;
    QPushButton *DelBtn;
    QPushButton *quit;
    QPushButton *EditBtn;
    QLabel *label_2;
    QLabel *pic_label;
    QPushButton *BackBtn;
    QPushButton *EditBtn_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(687, 539);
        home->setMinimumSize(QSize(0, 480));
        home->setAutoFillBackground(false);
        home->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/plan.jpg);"));
        home->setDocumentMode(false);
        centralwidget = new QWidget(home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, -10, 411, 71));
        label->setStyleSheet(QString::fromUtf8("color: green;\n"
" font-size:30px;\n"
"opacity: 0.8;"));
        AddBtn = new QPushButton(centralwidget);
        AddBtn->setObjectName(QString::fromUtf8("AddBtn"));
        AddBtn->setGeometry(QRect(311, 157, 181, 41));
        AddBtn->setStyleSheet(QString::fromUtf8("padding: 10px; box-shadow: 2px 2px grey; font-size: 15px; color: white; background: purple; border-radius: 5px;\n"
"cursor: pointer;"));
        ViewBtn = new QPushButton(centralwidget);
        ViewBtn->setObjectName(QString::fromUtf8("ViewBtn"));
        ViewBtn->setGeometry(QRect(311, 210, 181, 41));
        ViewBtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
" box-shadow: 2px 2px grey; \n"
"font-size: 15px;\n"
" color: white; \n"
"background: purple;\n"
"; border-radius: 5px;\n"
"cursor: pointer;"));
        DelBtn = new QPushButton(centralwidget);
        DelBtn->setObjectName(QString::fromUtf8("DelBtn"));
        DelBtn->setGeometry(QRect(311, 260, 181, 41));
        DelBtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
" box-shadow: 2px 2px grey; \n"
"font-size: 15px;\n"
" color: white; \n"
"background: purple;\n"
"; border-radius: 5px;\n"
"cursor: pointer;"));
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(600, 450, 81, 41));
        quit->setStyleSheet(QString::fromUtf8("font-size:18px; color:white; background: red; border-radius: 5px;\n"
"opacity: 1;"));
        EditBtn = new QPushButton(centralwidget);
        EditBtn->setObjectName(QString::fromUtf8("EditBtn"));
        EditBtn->setGeometry(QRect(310, 310, 181, 41));
        EditBtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
" box-shadow: 2px 2px grey; \n"
"font-size: 15px;\n"
" color: white; \n"
"background: purple;\n"
"; border-radius: 5px;\n"
"cursor: pointer;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 40, 301, 51));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        pic_label = new QLabel(centralwidget);
        pic_label->setObjectName(QString::fromUtf8("pic_label"));
        pic_label->setGeometry(QRect(-50, 140, 351, 281));
        pic_label->setStyleSheet(QString::fromUtf8("background-image: url(:/assets/hero2.png);"));
        pic_label->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/hero2.png")));
        pic_label->setScaledContents(true);
        pic_label->setWordWrap(false);
        BackBtn = new QPushButton(centralwidget);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));
        BackBtn->setGeometry(QRect(500, 450, 91, 41));
        BackBtn->setStyleSheet(QString::fromUtf8("opacity: 1;\n"
" padding: 10px;\n"
" box-shadow: 2px 2px grey;\n"
" font-size: 18px;\n"
" color: white;\n"
" background: green; \n"
"border-radius: 5px;\n"
"z-index: 1;"));
        EditBtn_2 = new QPushButton(centralwidget);
        EditBtn_2->setObjectName(QString::fromUtf8("EditBtn_2"));
        EditBtn_2->setGeometry(QRect(310, 360, 181, 41));
        EditBtn_2->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
" box-shadow: 2px 2px grey; \n"
"font-size: 15px;\n"
" color: white; \n"
"background: purple;\n"
"; border-radius: 5px;\n"
"cursor: pointer;"));
        home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 687, 20));
        home->setMenuBar(menubar);
        statusbar = new QStatusBar(home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        home->setStatusBar(statusbar);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QApplication::translate("home", "MainWindow", nullptr));
#ifndef QT_NO_WHATSTHIS
        home->setWhatsThis(QApplication::translate("home", "<html><head/><body style=\"background-color: yellow; background-image: url(money.jpg);\"><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("home", "Welcome To your Portal!", nullptr));
        AddBtn->setText(QApplication::translate("home", "Enroll New Staff", nullptr));
        ViewBtn->setText(QApplication::translate("home", "Mark Attendance", nullptr));
        DelBtn->setText(QApplication::translate("home", "Attendance Report", nullptr));
        quit->setText(QApplication::translate("home", "Quit", nullptr));
        EditBtn->setText(QApplication::translate("home", "Lookout A Staff", nullptr));
        label_2->setText(QApplication::translate("home", "\"Manage Your Staffs Attendance Details\"", nullptr));
        pic_label->setText(QString());
        BackBtn->setText(QApplication::translate("home", "Back", nullptr));
        EditBtn_2->setText(QApplication::translate("home", "Permissions And  Leaves", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
