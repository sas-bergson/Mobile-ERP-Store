#include "Salaries.h"
#include "RegInfo.h"
#include <math.h>

Employee reg = Employee();

using namespace std;
int salary = 0;

 int Salary::Calc(){

    
    int wage = 0;
    salary = (wage*reg.kids)*(reg.days_worked*reg.Standard_pay)/reg.working_days;

    return salary;
 };

void Salary::display(){
    if (salary!=0)
    {
        cout <<endl<<"Employee" << reg.name << endl << "Your Salary is " << salary;

    }
}


    



