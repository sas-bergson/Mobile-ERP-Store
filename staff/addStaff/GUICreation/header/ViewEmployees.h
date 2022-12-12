#ifndef VIEWEMPLOYEES_H
#define VIEWEMPLOYEES_H

#include <QDialog>
#include <Employee.h>

namespace Ui {
class ViewEmployees;
}

class ViewEmployees : public QDialog
{
    Q_OBJECT

public:
    explicit ViewEmployees(QWidget *parent = nullptr);
    ~ViewEmployees();

private slots:
    void on_btnView_clicked();

    void on_btnView_2_clicked();

private:
    Ui::ViewEmployees *ui;
    Employment::Employee *employee;
};

#endif // VIEWEMPLOYEES_H
