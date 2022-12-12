/* User is the screen that an employee would have accessed once it was validated.
 * Employees could see all of their information and validate their own data.
 * The information is sent from the MainWindow.
*/
#include "User.h"
#include "ui_User.h"



User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    quit = new QuitDialog(this);
    this->setWindowTitle("Employee Information");


}

User::~User()
{
    delete ui;
}

void User::on_btnClose_clicked()
{
    quit->show();
}

//button slot
void User::onNewEmployee(Employment::Employee employee){
    //converting employee object to the right data type for output
    QString employeeName = QString::fromStdString(employee.getFirstName());
    QString date = QString::fromStdString(employee.getHireDate());
    QString position = QString::fromStdString(employee.getPosition());
    QString salary = QString::number(employee.getSalary());
    QString empNumber = QString::number(employee.getEmployeeNumber());

    //Set data from employee to text fields and labels
    ui->lblUser->setText("Hello, " + employeeName);
    ui->textDate->setText(date);
    ui->textPosition->setText(position);
    ui->textSalary->setText(salary);
    ui->textNumber->setText(empNumber);

}
