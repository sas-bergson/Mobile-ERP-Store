#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "mainwindow.h"

#include <QDialog>

namespace Ui {
class Department;
}

class Department : public QDialog
{
    Q_OBJECT

public:
    explicit Department(QWidget *parent = nullptr);
    ~Department();


private slots:
    //void on_pushButton_clicked();

//    void on_backButton_clicked();

    void on_pushButton_5_clicked();



    void on_backButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Department *ui;
};

#endif // DEPARTMENT_H
