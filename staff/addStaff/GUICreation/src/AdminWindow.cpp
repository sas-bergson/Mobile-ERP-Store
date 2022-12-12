/*This is the main widow for Admin.
 * Admin can acess to other windows from this one.
*/
#include "AdminWindow.h"
#include "ui_AdminWindow.h"
#include <string_view>

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    createEmp = new CreateEmp(this); //window for creating employee
    quit = new QuitDialog(this); //window for quit warning
    display = new ViewEmployees(this); //window for displaying employee data
    createLoging = new CreateLogin(this); //window for creating login and password
    promoteDemote = new PromoteDemote(this); //window for promoting and demoting user
    deleteEm = new DeleteEmployee(this); //delete employee

    this->setWindowTitle("Admin");


}

AdminWindow::~AdminWindow()
{
    delete ui;
}


void AdminWindow::on_btnCreateEmp_clicked()
{

    createEmp->show();
}



void AdminWindow::on_btnExit_clicked()
{
    quit->show();
}

void AdminWindow::on_btnViewEmp_clicked()
{
    display->show();
}

void AdminWindow::on_btnCreateLog_clicked()
{
    createLoging->show();
}

void AdminWindow::on_btnPromotr_clicked()
{
    promoteDemote->show();
}

void AdminWindow::on_btnDeleteEmp_clicked()
{
    deleteEm->show();
}
