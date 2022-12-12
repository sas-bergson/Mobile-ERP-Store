/*Create Employee allows Admin to create an employee record, all fields from this window are required,
 * the record is checked if the employee number was not created before to avoid an employee number from being added twice,
 * throws an exception if hire date is not in the right format. Salary text field and Employee number are validated
 * to allow user only to type double and integer respectevily.
*/
#include "CreateEmp.h"
#include "ui_CreateEmp.h"
#include <string>
#include <QMessageBox>
#include <fstream>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QIntValidator>
#include <QDoubleValidator>
#include <QDebug>


CreateEmp::CreateEmp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateEmp)
{
    ui->setupUi(this);
    //set validator to avoid user from inputting strings
    ui->lineEditEmpNum->setValidator(new QIntValidator(100, 900, this));
    ui->lineEditSalary->setValidator(new QDoubleValidator(0, 999999, 2, this));
    //window name
    this->setWindowTitle("Create Employee");


}

CreateEmp::~CreateEmp()
{
    delete ui;
}

void CreateEmp::on_btnSubmit_clicked()
{
    QString employeeText = "Employee.txt";
    QString line; //hold a line from the text file
    QStringList token; //to split into different fields
    bool empNumberExist = false; //to avoid from creating an employee that already exist

    QFile fileEmployee(employeeText); //store employee info
    employee = new Employment::Employee();


    QString fName = ui->lineEditFirstName->text();
    QString lName = ui->lineEditLastName->text();
    QString position = ui->lineEditPosition->text();
    QString salary = ui->lineEditSalary->text();
    QString hireDate = ui->lineEditDate->text();
    QString empNumber = ui->lineEditEmpNum->text();



    //if there is no empty fields
    if(!fName.isEmpty() && !lName.isEmpty() && !position.isEmpty() && !salary.isEmpty()
            && !hireDate.isEmpty() && !empNumber.isEmpty())
    {

        //check if employee exist first
        if(fileEmployee.exists()){
            fileEmployee.open(QFile::ReadOnly | QFile::Text);
            QTextStream in(&fileEmployee);
            while(!in.atEnd()){
                line = in.readLine();
                if(line.contains(empNumber)){
                    empNumberExist = true;
                }
            }
            fileEmployee.close();
        }

        //if employee was not created before, proceed with operations
        if(!empNumberExist){
            try {

                if(!fileEmployee.open(QFile::WriteOnly | QFile::Text | QFile::Append))
                {
                    QMessageBox::warning(this, "Warning", "Could not open file");
                }

                QTextStream out(&fileEmployee);


                employee->setFirstName(fName.toStdString());
                employee->setLastName(lName.toStdString());
                employee->setPosition(position.toStdString());
                employee->setPayment(salary.toDouble());
                employee->setHireDate(hireDate.toStdString()); // throws exception
                employee->setEmployeeNumber(empNumber.toInt());

                //write to file
                out << fName << "\t" << lName << "\t" << position << "\t" << salary <<
                       "\t" << hireDate << "\t" << empNumber << "\n";
                fileEmployee.flush();


                QMessageBox::information(this, "Confirmation", "User " + QString::fromStdString(employee->getFirstName()) +
                                         " was stored in the system");
                fileEmployee.close();

                //clear text fields
                ui->lineEditFirstName->clear();
                ui->lineEditLastName->clear();
                ui->lineEditPosition->clear();
                ui->lineEditSalary->clear();
                ui->lineEditDate->clear();
                ui->lineEditEmpNum->clear();

            }
            catch (Employment::EmployeeTraining::InvalidHireDate& e) {
                QMessageBox::information(this, "Invalid Hire Date format", e.what());
            }//end catch
        }//end if
        else{
            QMessageBox::warning(this, "Employee Exists.", "Employee number already in file");
        }//end else

    }

    else
    {

        QMessageBox::information(this, "Missing input", "All the fields are required");
    }//end else


}

void CreateEmp::on_btnHome_clicked()
{
    this->close();
}


