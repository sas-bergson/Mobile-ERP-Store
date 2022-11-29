#ifndef STATS_MALL_H
#define STATS_MALL_H


class stats_mall
{
    public:

        float AVG;
        float Total;
        int i=0;

        struct shop{
            char name[50];
            int shpID;
            float rev;
            } s[12];


    public:
        stats_mall(); // constructor
       void inputMR();  //input monthly revenue method
        void total(); //




};

#endif // STATS_MALL_H
