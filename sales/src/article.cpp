#include "../include/article.h"

Article::Article(int id_param , string category_param , string name_param , int number_sold_param , int revenue_param ){
    id = id_param;
    category = category_param;
    name = name_param; 
    number_sold =number_sold_param;
    article_revenue = revenue_param;
}

Article::~Article(){
    //nothing
}

int Article:: get_article_id(){
    return id;
}
string Article::get_article_name(){
    return name;
}
string Article::get_category(){
    return category;
}
int Article::get_num_article_sold(){
     return number_sold;
}
int Article::get_revenue(){
     return article_revenue;
}
