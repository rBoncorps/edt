#ifndef _MODULE_H_
#define _MODULE_H_
#include <string>
#include "Groupe.h"

using namespace std;
typedef vector<Groupe*> listeG;

class Module {

	public:
		Module(string intitule,int nbHeuresTot,int nbHeuresCM, int nbHeuresTD, int nbHeuresTP);
		~Module();

		// accesseurs
		string intitule() const;
		int nbHeuresCM() const;
		int nbHeuresTD() const;
		int nbHeuresTP() const;
		int nbHeuresTot() const;
		listeG listeGroupe() const;
		
		// modifieurs
		void intitule(string intitule);
		void nbHeuresCM(int nbHeuresCM);
		void nbHeuresTD(int nbHeuresTD);
		void nbHeuresTP(int nbHeuresTP);
		void addGroupe(Groupe& groupe);

	private:
		string intitule_;
		int nbHeuresCM_;
		int nbHeuresTD_;
		int nbHeuresTP_;
		int nbHeuresTot_;
		listeG listeGroupe_;
};

#endif
	
