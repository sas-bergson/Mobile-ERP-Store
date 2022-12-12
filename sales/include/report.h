#include <string>
#include <vector>
#ifndef REPORT_H
#define REPORT_H

using namespace std;


class Report{
    public:
        int count;
        vector<int> user_id;
        
    public:
        void report_order_number();
};

#endif
