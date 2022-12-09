/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QLabel *addconnection;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(1200, 1200);
        Add->setMinimumSize(QSize(1200, 1200));
        Add->setAutoFillBackground(true);
        Add->setStyleSheet(QString::fromUtf8(""));
        scrollArea = new QScrollArea(Add);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(159, 160, 281, 311));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 279, 309));
        scrollArea->setWidget(scrollContents);
        addconnection = new QLabel(Add);
        addconnection->setObjectName(QString::fromUtf8("addconnection"));
        addconnection->setGeometry(QRect(220, 700, 261, 51));

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Dialog", nullptr));
        addconnection->setText(QApplication::translate("Add", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
