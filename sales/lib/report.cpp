#include "../include/report.h"
#include <string>
#include <iostream>

using namespace std;

void Report::reportdetail(){
    cout<<"sold :"<< endl;
    for(int i=0; i< 4; i++){
        cout<< qu[i] << " quantity of "<< pr[i]<< " sold today "<< endl;
    }
}
