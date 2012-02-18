#include "Etudiant.h"
#include "Groupe.h"
#include <iostream>

using namespace std;

int main(int argc,char** argv) {
	Groupe groupe("groupe1");
	Etudiant etu("bob","dylan",95193,"adP","adM",groupe);
	groupe.addEtu(etu);
	Etudiant etu2("jean","pierre",54,"adP","adM",groupe);
	groupe.addEtu(etu2);
	for(int i = 0; i<groupe.liste().size(); i++) {
		cout << *groupe.liste().at(i) << endl;
	}
	return 0;
}
