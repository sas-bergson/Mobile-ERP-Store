#ifndef ARTICLESTATISTICS_H
#define ARTICLESTATISTICS_H

#include "article.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ios>
#include <iomanip>

using namespace std;
/**
 * @class ArticleStatistic
 * @brief This class is used for the different article statistics that are provided.
 * 
 */
class ArticleStatistic{
    private:
    
    vector <Article> articles;

    public:
    ArticleStatistic();
    ~ArticleStatistic();
    void intialize_sample_data();
    void print_articles_out();
    void sort_articles_in_most_revenue_order();

};

#endif