#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

using namespace std;

class Article{
    private:
    int id;
    string category;
    string name;
    int number_sold;
    int article_revenue;

    public:

    Article(int id_param , string category_param , string name_param , int number_sold_param , int revenue_param );
    ~Article();

    int get_article_id();
    string get_article_name();
    string get_category();
    int get_num_article_sold();
    int get_revenue();


};

#endif