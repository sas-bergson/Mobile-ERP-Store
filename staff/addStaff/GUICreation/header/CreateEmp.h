#ifndef CREATEEMP_H
#define CREATEEMP_H

#include <QDialog>
#include <Employee.h>

namespace Ui {
class CreateEmp;
}

class CreateEmp : public QDialog
{
    Q_OBJECT

public:
    explicit CreateEmp(QWidget *parent = nullptr);
    ~CreateEmp();

private slots:
    void on_btnSubmit_clicked();

    void on_btnHome_clicked();

private:
    Ui::CreateEmp *ui;
    Employment::Employee *employee;
};

#endif // CREATEEMP_H
