/********************************************************************************
** Form generated from reading UI file 'department.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENT_H
#define UI_DEPARTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Department
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLabel *label_8;

    void setupUi(QDialog *Department)
    {
        if (Department->objectName().isEmpty())
            Department->setObjectName(QString::fromUtf8("Department"));
        Department->resize(709, 395);
        label = new QLabel(Department);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 641, 361));
        label->setPixmap(QPixmap(QString::fromUtf8("IMG-20221128-WA0054.jpg")));
        label_2 = new QLabel(Department);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 40, 171, 311));
        label_2->setFrameShape(QFrame::Panel);
        label_2->setPixmap(QPixmap(QString::fromUtf8("IMG-20221128-WA0050.jpg")));
        label_3 = new QLabel(Department);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 40, 401, 311));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setPixmap(QPixmap(QString::fromUtf8("IMG-20221128-WA0050.jpg")));
        pushButton = new QPushButton(Department);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 70, 121, 31));
        pushButton->setMouseTracking(false);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        pushButton_2 = new QPushButton(Department);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 220, 121, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        pushButton_3 = new QPushButton(Department);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 150, 121, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        pushButton_4 = new QPushButton(Department);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 290, 121, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_4 = new QLabel(Department);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 100, 101, 31));
        label_5 = new QLabel(Department);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 170, 101, 31));
        label_6 = new QLabel(Department);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 240, 101, 31));
        label_7 = new QLabel(Department);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 300, 101, 31));
        textEdit = new QTextEdit(Department);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(350, 100, 261, 41));
        textEdit_2 = new QTextEdit(Department);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(350, 170, 261, 41));
        textEdit_3 = new QTextEdit(Department);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(350, 230, 261, 41));
        textEdit_4 = new QTextEdit(Department);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(350, 290, 261, 41));
        label_8 = new QLabel(Department);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 45, 161, 31));

        retranslateUi(Department);

        QMetaObject::connectSlotsByName(Department);
    } // setupUi

    void retranslateUi(QDialog *Department)
    {
        Department->setWindowTitle(QApplication::translate("Department", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("Department", "Add Department", nullptr));
        pushButton_2->setText(QApplication::translate("Department", "Delete Department", nullptr));
        pushButton_3->setText(QApplication::translate("Department", "Update Department", nullptr));
        pushButton_4->setText(QApplication::translate("Department", "Back", nullptr));
        label_4->setText(QApplication::translate("Department", "Department ID", nullptr));
        label_5->setText(QApplication::translate("Department", "Department name", nullptr));
        label_6->setText(QApplication::translate("Department", "Department manager", nullptr));
        label_7->setText(QApplication::translate("Department", "Department Description", nullptr));
        label_8->setText(QApplication::translate("Department", "Department information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Department: public Ui_Department {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENT_H
