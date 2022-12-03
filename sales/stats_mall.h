#ifndef STATS_MALL_H
#define STATS_MALL_H


class stats_mall
{
    public:

        float AVG;
        float Total;
        int i=0;

        struct shop{
            int shpID;
            float rev;
            } s[12];


    public:
        stats_mall(); // constructor
       void inputMR();  //input month revenue method
        void total(); //Get the total and average revenue for the year
        void BM();
        void SMall();



};

#endif // STATS_MALL_H
