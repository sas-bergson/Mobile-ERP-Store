#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include <Employee.h>
#include <CreateEmp.h>
#include <QuitDialog.h>
#include <ViewEmployees.h>
#include <CreateLogin.h>
#include <PromoteDemote.h>
#include <DeleteEmployee.h>


namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();


private slots:
     void on_btnCreateEmp_clicked();

     void on_btnExit_clicked();

     void on_btnViewEmp_clicked();

     void on_btnCreateLog_clicked();

     void on_btnPromotr_clicked();

     void on_btnDeleteEmp_clicked();

private:
    Ui::AdminWindow *ui;
    CreateEmp *createEmp;
    QuitDialog *quit;
    ViewEmployees *display;
    CreateLogin *createLoging;
    PromoteDemote *promoteDemote;
    DeleteEmployee *deleteEm;

};

#endif // ADMINWINDOW_H
