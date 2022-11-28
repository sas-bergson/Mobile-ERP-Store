#include <string>
#ifndef REPORT_H
#define REPORT_H

using namespace std;


class Report{
    public:
        string pr[4] = {"Apples","Bananas","Cups","Donuts"};
        int qu[4] = {1,2,3,4};
    public:
        void reportdetail();
};

#endif