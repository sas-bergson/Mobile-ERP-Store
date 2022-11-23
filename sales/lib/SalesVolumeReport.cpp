
#include "salesvolumereport.hpp"
#include <iostream>
#include <string>

using namespace std;


    void salesvolumereport::volumereport(int i, string SN[], int SQS[]){

        cout<< "The following products and quantities were sold"<< endl;

        // loops across the table of stocks sold
            for (i=0; i<SN.lenght()-1; i++){
                cout<< SQS[i] << " quantities of "<< SN[i];
            }
    }


};

