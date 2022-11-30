#include <iostream>

class fournitures
{
	public : char type;
	public :
		Fournitures()
		{
		};
	
};



int main() 
{
	int o ;
	int b ;
	int t ;
	int f ;
	int y ;
	int x ;
	std::cout<< "bonjour , etes vous un client ? ou alors un employe ? 1 pour client et 0 pour employe " <<std::endl;
	std::cin>> t ;
	
		if(t=1){
		    std::cout << "Hey nouveau client" <<std::endl;
	    	std::cout <<"nous disposons de plusieurs types de fournitures a mettre a votre disposition en fonction de votre besoin"<<std::endl;
	    	std::cout<< "avez vous deja fait vos achats ? 1 pour oui et 0 pour non" <<std::endl;
		    std::cin >> b;
	    
	    		if(b=0){
	    			std::cout << "les articles dont nous disposons sont:" <<std::endl;
					std::cout <<"l'article a"<<std::endl;
					std::cout <<"l'article b"<<std::endl;
					std::cout <<"l'article c"<<std::endl;
					std::cout <<"l'article d"<<std::endl;
					std::cout <<"l'article e"<<std::endl;
		
					std::cout << "voulez vous obtenir une fourniture de type panier pour faire vos achats ? 1 pour oui et 0 pour non" <<std::endl ;
					std::cin >> o ;
    					if(o = 0)
						{
							std::cout << "ok , bien vouloir liberer si vous n'avez rien a acheter" << std::endl ;
						}
						if(o = 1)
						{
							fournitures z;
							std::cout <<"vous vennez d'obtenir une nouvelle fourniture de type panier"<< std::endl ;
							std::cout <<"quel est l'article que vous souhaitez nous acheter ? taper 1 pour l'article a, 2 pour l'article b, et ainsi de suite '" << std::endl ;
							std::cin >> y ;
								do
								{
									if(y=1)
									{
										std::cout<<"vous vener de vous procurrer l'article a, son prix est de 5"<<std::endl ;
										std::cout<<"votre facture est donc de 5"<<std::endl;
									}
									if(y=2)
									{
										std::cout<<"vous venez de vous procurrer l'article b, son prix est de 10 " <<std::endl;
										std::cout<<"votre facture est donc de 10"<<std::endl;
									}
									if(y=3)
									{
										std::cout<<"vous venez de vous procurrer l'article c, son prix est de 15 " <<std::endl;
										std::cout<<"votre facture est donc de 15"<<std::endl;
									}
									if(y=4)
									{
										std::cout<<"vous venez de vous procurrer l'article d, son prix est de 20 " <<std::endl;
										std::cout<<"votre facture est donc de 20"<<std::endl;
									}
									if(y=5)
									{
										std::cout<<"vous venez de vous procurrer l'article e, son prix est de 25 " <<std::endl;
										std::cout<<"votre facture est donc de 25"<<std::endl;
									}
									std::cout<<"avez vous autre chose a acheter? 1 pour oui et 0 pour non" <<std::endl;
									std::cin>> f ;
									}while(f=1);
				
					
									}
				}
				if(b=1)
				{
					std::cout<<"vous avez donc surrement deja obtenu votre facture"<<std::endl;
					std::cout<<"nous vous disons aurevoir et a tres bientot"<<std::endl;
				}
		}
		if(t=0)
		{
			std::cout<<"bonjour employer"<<std::endl;
			std::cout<<"les postes de nos employes sont: "<<std::endl;
			std::cout<<"1.l'acceuil"<<std::endl;
			std::cout<<"2.surveillant de rayon"<<std::endl;
			std::cout<<"3.caissier"<<std::endl;
			std::cout<<"quel est votre poste d'activite ? taper 1 si vous travaillez a l'acceuil et ainsi de suite'"<<std::endl;
			std::cin>>x;
				if(x=1)
				{
					std::cout<<"veuiller rejoindre votre poste aussi tot que possible"<<std::endl;
					std::cout<<"assurez vous que tous ceux qui viendrons aient droit a un acceuil chaleureux et qu'il quittent notre etablissement en esperant y revenir tres bientot"<<std::endl;
				}
				if(x=2)
				{
					std::cout<<"veuiller rejoindre votre poste aussi tot que possible"<<std::endl;
					std::cout<<"assurez vous de venir en aide a tous les clients qui en auront besoins "<<std::endl;
				
				}
				if(x=3)
				{
				std::cout<<"veuiller rejoindre votre poste aussi tot que possible"<<std::endl;
				std::cout<<"assurez vous que chaque client reparte avec une facture"<<std::endl;
				}
		}
	return 0 ; 
}