/********************************************************************************
** Form generated from reading UI file 'jobs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOBS_H
#define UI_JOBS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_jobs
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *jobs)
    {
        if (jobs->objectName().isEmpty())
            jobs->setObjectName(QString::fromUtf8("jobs"));
        jobs->resize(678, 400);
        label = new QLabel(jobs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 601, 351));
        label->setLineWidth(-1);
        label->setPixmap(QPixmap(QString::fromUtf8("IMG-20221128-WA0054.jpg")));
        label_2 = new QLabel(jobs);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 50, 171, 281));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(jobs);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 50, 361, 281));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setLineWidth(1);
        label_3->setMidLineWidth(0);

        retranslateUi(jobs);

        QMetaObject::connectSlotsByName(jobs);
    } // setupUi

    void retranslateUi(QDialog *jobs)
    {
        jobs->setWindowTitle(QApplication::translate("jobs", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("jobs", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("jobs", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jobs: public Ui_jobs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBS_H
