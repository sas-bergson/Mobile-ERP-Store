#include <iostream>
#include <string>
#include "salesvolumereport.hpp"

using namespace std;

int main(){

    // object of the SalesVolumeReport class

     SalesVolumeReport store;

        // list of products name and quantity sold 
    store.SN[4]={"glass","cup","plates","spoons","knives"};
    store.SQS[4]={200,20,129,90,70}


    store.volumereport(int i, string SN[], int SQS[]);

}