#include "stats_mall.h"
#include <iostream>

using namespace std;

stats_mall::stats_mall(){}

void stats_mall::inputMR()
{
        cout << "Enter information of the Mall: " << endl;

    // storing information
    for(int i = 0; i < 12; ++i)
    {
        s[i].shpID = i+1;
        cout << "For Month" << s[i].shpID << "," << endl;

        cout << "Enter Revenue of the   Mall for  Month: ";
        cin >> s[i].rev;
        cout << endl;

    }
}

void stats_mall::total(){

    Total=(s[i].rev + s[i+1].rev+ s[i+2].rev+ s[i+3].rev+ s[i+4].rev+ s[i+5].rev+ s[i+6].rev+ s[i+7].rev+ s[i+8].rev+ s[i+9].rev+ s[i+10].rev+ s[i+11].rev);
    AVG = (s[i].rev + s[i+1].rev+ s[i+2].rev+ s[i+3].rev+ s[i+4].rev+ s[i+5].rev+ s[i+6].rev+ s[i+7].rev+ s[i+8].rev+ s[i+9].rev+ s[i+10].rev+ s[i+11].rev)/12;
    cout << "DATA BASE FOR Mall: " << endl;

    // Displaying information
    for(int i = 0; i < 12; ++i)
    {
        cout << "\n Month: " << i+1 << endl;
        cout << "Revenue: " << s[i].rev<< endl;}
        cout << "\nThe Total revenue/losses for the year:" << Total << "";
        cout<<"CFA";
        cout << "\nThe average revenue/losses per month:" << AVG << "";
          cout<<"CFA";

}


