#pragma once
#include "search.h"


void search::get_data(){
    cout <<"Enter the name of the customer you wish to access" ;
    cin >> name;
    cout <<"Enter the date the receipt was issued" ;
    cin >> date;
}

void search::display_data(){
    cout <<"           SEARCH RESULTS           " ;
    cout <<    name;
    cout <<   date;
    }

search::~search()
{
  cout <<"Enter the date the receipt was issued" ;   
}



