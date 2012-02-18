#ifndef _ETUDIANT_H_
#define _ETUDIANT_H_

#include "Personne.h"
#include "Groupe.h"
#include <string>
#include <iostream>

using namespace std;

class Etudiant : public Personne {

	public :
		Etudiant(string nom, string prenom, int num, string adressePost, string adresseMail,Groupe& groupe);
		~Etudiant();

		//accesseurs
		int num() const;
		string adressePost() const;
		string adresseMail() const;
		Groupe& groupe() const;
		// modifieurs
		void num(int num);
		void adressePost(string adressePost);
		void adresseMail(string adresseMail);
		void groupe(Groupe& groupe);
	private : 
		int num_;
		string adressePost_;
		string adresseMail_;
		Groupe& groupe_;
};

// gestionnaire d'affichage
ostream& operator<<(ostream& os, const Etudiant& e);
#endif
