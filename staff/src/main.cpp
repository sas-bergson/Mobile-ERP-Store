#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <map>

using namespace std;

#include "util.h"
#include "person.h"
#include "quicksort.h"
#include "department.h"
#include "querySearch.h"

void printHomeChoice()
{

    SET_CONSOLE_COLOR(YELLOW);
    cout << "--- MAIN MENU ---\n\n";
    cout << "1. Add new employee" << endl;
    cout << "2. Delete employee information" << endl;
    cout << "3. Update employee information" << endl;
    cout << "4. Make reports based on specific field" << endl;
    cout << "5. Search Employee" << endl;
    cout << "6. Quit" << endl;
    cout << "7. Show All Employees" << endl;
    cout << "8. Query Search" << endl;
    cout << "9. Insert Dummy Data" << endl;
    SET_CONSOLE_COLOR(WHITE);
    cout << "Please enter the related number of your requested command? ";
}

void displayEmployees(map<int, Person> data)
{

    map<int, Person>::iterator itr;

    if (data.size() == 0)
    {
        ShowMessage("\n--- NO MATCHING RECORDS FOUND!!!\n\n", RED);
        return;
    }
    cout << "FirstName\tLastName\tPersonalID\tSalaryPerYear (Euros)\n";
    cout << "--------------------------------------------------------------------\n";
    for (itr = data.begin(); itr != data.end(); itr++)
    {
        cout << itr->second.Get_FirstName() << "\t\t" << itr->second.Get_LastName() << "\t\t" << itr->second.Get_PersonalID() << "\t\t" << itr->second.Get_SalaryPerYear() << "\n";
    }
}

map<int, Person> doQuerySearch(QuerySearch qs, map<int, Person> data)
{

    map<int, Person> originalData = data;

    map<int, Person> res = data;

    int choice, op;
    StringOperation operationS;
    ShowMessage("--- QUERY OPTION ---\n", CYAN);
    ShowMessage("1. FirstName\n2. LastName\n3. ID\n4. Salary\n5. Select All Records\n", YELLOW);

    cout << "Please enter a value ? ";
    cin >> choice;

    if (choice == 1 || choice == 2)
    {
        ShowMessage("\n1. StartsWith\n2. EndsWith\n3. Contains\n", YELLOW);

        cout << "Please choose an operation ? ";
        cin >> op;
        operationS = (StringOperation)op;

        string fieldName = choice == 1 ? "FirstName" : "LastName";

        string str;
        cout << "Enter the search string? ";
        cin >> str;
        res = qs.SearchByFieldNameString(res, fieldName, operationS, str);
    }
    else if (choice == 3 || choice == 4)
    {
        ShowMessage("\n1. Equal To\n2. Not Equal To\n3. Less Than\n4. Greater Than\n5. Less than or Equal To\n6. Greater than or equal To\n", YELLOW);
        NumOperation operationN;

        cout << "Please choose an operation ? ";
        cin >> op;

        operationN = (NumOperation)op;
        string fieldName = choice == 3 ? "PersonalID" : "Salary";

        double val;
        cout << "Enter the search Value? ";
        cin >> val;
        res = qs.SearchByFieldNameNumber(res, fieldName, operationN, val);
    }

    displayEmployees(res);

    return res;
}

int main()
{

    CLEAR_CONSOLE();

    Department hrmdep;

    int choice;

    cout << "Welcome to Human Resourse Management (HRM) Software of Company XYZ.\n\nTo do Specific task please choose one of the following commands.\n\n";

    do
    {

        printHomeChoice();
        cin >> choice;
        switch (choice)
        {
        case 1:
            hrmdep.AddPerson();
            break;
        case 2:
            hrmdep.DeletePerson();
            break;
        case 3:
            hrmdep.UpdatePerson();
            break;
        case 4:
            hrmdep.ReportList();
            break;
        // case 5:
        //     hrmdep.SearchPerson();
        //     break;
        case 7:
            hrmdep.ShowAllEmployees();
            break;
        case 8:
        {
            int choice;
            char repeat;

            map<int, Person> prev, curr;
            QuerySearch qs;
            prev = doQuerySearch(qs, hrmdep.Get_employees());
            cout << "\nDo you want to continue operations(y/n)? ";
            cin >> repeat;
            while (repeat == 'y' || repeat == 'Y')
            {
                cout << "--- OPTIONS ---\n1. AND Queries\n2. OR Queries\n3. NOT Query\n";
                cout << "Please enter your choice? ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    curr = doQuerySearch(qs, hrmdep.Get_employees());
                    ShowMessage("Current Query!!!\n", GREEN);
                    displayEmployees(curr);
                    ShowMessage("\nRESULT After AND Operation...\n", CYAN);
                    prev = qs.AndOperation(prev, curr);
                    displayEmployees(prev);

                    break;
                }
                case 2:
                {
                    curr = doQuerySearch(qs, hrmdep.Get_employees());
                    ShowMessage("\n\nRESULT After OR Operation...\n", CYAN);
                    prev = qs.OrOperation(prev, curr);
                    displayEmployees(prev);
                    break;
                }
                case 3:
                {
                    ShowMessage("\n\nRESULT After NOT Operation...\n", CYAN);
                    prev = qs.NotOperation(prev, hrmdep.Get_employees());
                    displayEmployees(prev);
                    break;
                }
                default:
                    break;
                }
                cout << "\nDo you want to continue operations(y/n)? ";
                cin >> repeat;
            }
            break;
        }
        case 9:
        {
            hrmdep.addData("Gokul", "Krishna", 35, 23);
            hrmdep.addData("Harish", "Raja", 30, 20);
            hrmdep.addData("Guru", "Nadhan", 40, 25);
            hrmdep.addData("Ajith", "Kumar", 35, 50);
            hrmdep.addData("Gopi", "Krishna", 32, 23);
            hrmdep.addData("Bebin", "John", 50, 23);
            hrmdep.addData("Abdul", "Reheman", 25, 23);
            hrmdep.addData("Ashik", "Meeran", 39, 23);
            break;
        }
        default:
            cout << "\nInvalid Option!!!\n\n";
            break;
        }
        WaitForKeyPress();
        CLEAR_CONSOLE();

    } while (1);
    return 0;
}