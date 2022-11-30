#ifndef ATTRACTIVITE_H
#define ATTRACTIVITE_H

class Attractivite
{
	public:
		Attractivite(int passant, int entrant, int s, int d);
		void infos();
		void calcul();
	private:
		int passant;
		int entrant;
		int s;
		int d;
};

#endif
