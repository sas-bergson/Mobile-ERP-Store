#include "Conversion.h"
#include <iostream>
using namespace std;
Conversion::Conversion(double article_vendu, double enter){
	article_vendu=recu;
	enter=personne;
}
void Conversion::affiche(){
	cout<<"entre le nombre de personnes entres dans la boutique"<<endl;
	cin>>personne;
	cout<<"combien de personnes sont finalement passe par la caisse"<<endl;
	cin>>recu;
	
}
void Conversion::operation(){
	double o,p;
	o=recu/personne;
	p=o*100;
	cout<<"le taux de conversion de votre boutique est de: "<<p<<endl;
}
