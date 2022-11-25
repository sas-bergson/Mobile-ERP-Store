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

    void setupUi(QDialog *jobs)
    {
        if (jobs->objectName().isEmpty())
            jobs->setObjectName(QString::fromUtf8("jobs"));
        jobs->resize(678, 400);
        label = new QLabel(jobs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 601, 351));

        retranslateUi(jobs);

        QMetaObject::connectSlotsByName(jobs);
    } // setupUi

    void retranslateUi(QDialog *jobs)
    {
        jobs->setWindowTitle(QApplication::translate("jobs", "Dialog", nullptr));
        label->setText(QApplication::translate("jobs", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jobs: public Ui_jobs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBS_H
