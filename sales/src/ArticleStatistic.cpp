#include "../include/ArticleStatistic.h"


ArticleStatistic::ArticleStatistic()
                :articles()
{
    // nothing
}

void ArticleStatistic::intialize_sample_data(){
    articles.insert(articles.begin() ,Article(1, "food", "yam", 34 , 90000));
    articles.insert(articles.begin() ,Article(2, "cann", "coca", 60 , 200000));
    articles.insert(articles.begin() ,Article(3, "cann", "fanta", 20 ,12000));
    articles.insert(articles.begin() ,Article(4, "groseries", "bonbon", 50 , 10000));
    articles.insert(articles.begin() ,Article(5, "food", "bread", 600 , 100000));
}

ArticleStatistic:: ~ArticleStatistic(){
    articles.clear();
}

void  ArticleStatistic::print_articles_out(){
    cout << endl;
        cout << "ID"<< setw(20) << "NAME"<< setw(20)   << "Q_sold(units)"<< setw(20) << "REVENUE(FCFA)"<<endl;
    for (Article article : articles){
        cout<< article.get_article_id()<< setw(20) << article.get_article_name()<< setw(20) << article.get_num_article_sold()<< setw(20) << article.get_revenue()<<endl;
    }
}

void ArticleStatistic::sort_articles_in_most_revenue_order(){
   sort(articles.begin(), articles.end(), 
    []( Article &a,  Article &b) -> bool
{ 
    return a.get_revenue() > b.get_revenue(); 
});
}

