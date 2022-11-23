
#ifndef SALESVOLUMEREPORT_HPP
#define SALESVOLUMEREPORT_HPP
#include <string>

using namespace std;

class salesvolumereport{

    public:

    // counter
    int i;

    // list of products name and quantity sold 
    string SN[4];
    int SQS[4];
    
    //report sales volume of the day
      
    void volumereport(int i, string SN[], int SQS[]);
    
};

#endif 