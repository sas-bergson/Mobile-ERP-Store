#include "..\include\ArticleStatistic.h"

int main(){
    ArticleStatistic test;
    test.intialize_sample_data();
    cout << "This is the list of articles before sort:" << endl;
    test.print_articles_out();
    test.sort_articles_in_most_revenue_order();
    cout << "This is the list of articles after sort: i.e is most peforming to least" << endl;
    test.print_articles_out();
   

    

    return 0;
}