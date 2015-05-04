#ifndef MOTORO_INFERENCO
#define MOTORO_INFERENCO

#include "arbre_binaire.hpp"

// un objet de type symbole represente une variable. il est est vrais ou faux et il est contient un id "unique" dans le sens ou deux objet initialiser par default retourneront
// false sur un == mais deux objet initialiser avec les meme param retourneron true sur ==
#include "symbole.hpp"

// meme principe que les symbole mais n'est pas vrais ou faux, une regle peut concerner 1 ou 2 element
// une regle peut aussi representer un AND, OR ou XOR  <= inclure dedant ou separer ? une regle peut etre une condition ? 
#include "regle.hpp"


// cr == condition ou regle
class motoro_inferenco
{
	private :
		std::list< arbre_binaire< cr, symbole > > regle;
		std::list< arbre_binaire< cr, symbole > > fait;

	public :
		motoro_inferenco();
		~motoro_inferenco();

		bool	add_regle(arbre_binaire< cr, symbole > ab);
		bool	sup_regle(arbre_binaire< cr, symbole > ab);
		bool	add_fait(symbole v);
		bool	add_fait(arbre_binaire< cr, symbole > ab);
		bool	sup_fait(symbole v);
		bool	sup_fait(arbre_binaire< cr, symbole > ab);
		bool	question(symbole v);
		bool	question(arbre_binaire< cr, symbole > ab);
};

#endif
