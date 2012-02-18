#ifndef _PERSONNE_H_
#define _PERSONNE_H_

#include <string>

using namespace std;

class Personne {

	public :
		Personne(string nom, string prenom);
		~Personne();
		
		// accesseurs
		string nom() const;
		string prenom() const;
		// modifieurs
		void nom(string nom);
		void prenom(string prenom);

	private :
		string nom_;
		string prenom_;
};

#endif
