#include <bits/stdc++.h>
#include <iostream>
#include <vector>

#include <map>

using namespace std;

#include "database.h"
   
void printHomeChoice()
{
    cout << "--- MAIN MENU ---\n\n";
    cout << "1. Add new employee" << endl;
    cout << "2. Delete employee information" << endl;
    cout << "3. Update employee information" << endl;
    cout << "4. Search Employee" << endl;
    cout << "5. Show All Employees" << endl;
    cout << "6. Quit" << endl; 
    cout << "Please enter the related number of your requested command? "; 
}

int main(){

    database db;
    printHomeChoice();
    db.connection();
    db.insert();
    db.select();
}