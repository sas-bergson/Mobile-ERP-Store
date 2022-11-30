//programme qui indique l'indice de perfomance d'un supermarche
//programme principal
#include <iostream>
using namespace std;
#include "recetmoy.h"
#include "attractivite.h"
int main(){
	cout<<"welcome to the indicator of perfomance of a store"<<endl;//debut du programma
    Recetmoy p1(1);//classe Recetmoy
	p1.affiche();
	
	Attractivite t1(0,0,0,0);//classe Attractivite
	t1.infos();
	t1.calcul();
	

	return 0;
}
