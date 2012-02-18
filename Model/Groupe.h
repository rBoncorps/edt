#ifndef _GROUPE_H_
#define _GROUPE_H_

#include <string>
#include <vector>
class Etudiant;
class Module;
using namespace std;

typedef vector< Etudiant*> listeEtu;
typedef vector<Module*> listeM;

class Groupe {

	public:
		Groupe(string nom);
		~Groupe();
		Groupe(Groupe& groupe);

		// accesseurs
		string nom() const;
		listeEtu liste() const;

		// modifieurs
		void nom(const string nom);
		void addEtu(Etudiant& etu);
	private:
		string nom_;
		listeEtu liste_;
		listeM listeModule_;

};

#endif
