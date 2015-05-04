#ifndef ARBRE_BINAIRE
#define ARBRE_BINAIRE


template< typename C, typename S >
class ArbreBinaire
{
	private :
		union element
		{
			C	condition;
			S	symbole;
		};

		union element	value;
		ArbreBinaire *	branche_droite;
		ArbreBinaire *	branche_gauche;

	public :
		ArbreBinaire();
		~ArbreBinaire();
		ArbreBinaire *	get_droite();
		ArbreBinaire *	get_gauche();
		union element	get_value();
	private :
};


#include "arbre_binaire.cpp"
#endif
