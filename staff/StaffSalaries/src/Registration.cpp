#include <iostream>
#include "RegInfo.h"
#include "Registration.h"
#include "Salaries.h"



Registration::Registration(){
     float Payment;
     

     Employee reg= Employee();
     cout << "Enter employee Name: ";
     cin >> reg.name;
     cout << "Enter employee Age: ";
     cin >> reg.age;
     cout << "Enter employee Address: ";
     cin >> reg.address;
     cout << "Enter employee Email ";
     cin >> reg.email;
     cout << "Enter employee Gender: ";
     cin >> reg.gender;
     cout << "Working days i. a Week";
     cin >> reg.working_days;
     cout <<"Wage per kids";
     cin >> reg.kids;
     cout << "Enter Standard pay";
     cin >> reg.Standard_pay;
     cout<< "Days Worked";
     cin >> reg.days_worked;
     cout<<"WAge employee";
     cin >> reg.wage;

}
