#ifndef _EDT_H_
#define _EDT_H_

#include "Creneau.h"
#include <vector>

typedef std::vector<Creneau*> listeCre;

class Edt {

	public :
	Edt();
	~Edt();
	affecterCreneau();
	rechercher();
	sauvegarder();


	private :
	listeCre liste;
};

#endif
