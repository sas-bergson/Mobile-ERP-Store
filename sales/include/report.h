#include <string>
#ifndef REPORT_H
#define REPORT_H

using namespace std;


class Report{
    public:
        string pr[4] = {"chairs","Televisions","tables","radios"};
        int qu[4] = {10,42,43,104};
    public:
        void reportdetail();
};

#endif
