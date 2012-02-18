#include "Module.h"

Module::Module(string intitule, int nbHeuresTot,int nbHeuresCM, int nbHeuresTD, int nbHeuresTP)
{
	intitule_ = intitule;
	nbHeuresTot_ = nbHeuresTot;
	nbHeuresCM_ = nbHeuresCM;
	nbHeuresTD_ = nbHeuresTD;
	nbHeuresTP_ = nbHeuresTP;
}

Module::~Module()
{

}

string Module::intitule() const
{
	return intitule_;
}

int Module::nbHeuresCM() const
{
	return nbHeuresCM_;
}

int Module::nbHeuresTD() const
{
	return nbHeuresTD_;
}

int Module::nbHeuresTP() const
{
	return nbHeuresTP_;
}

int Module::nbHeuresTot() const
{
	return nbHeuresTot_;
}

listeG Module::listeGroupe() const
{
	return listeGroupe_;
}

void Module::intitule(string intitule)
{
	intitule_ = intitule;
}

void Module::nbHeuresCM(int nbHeuresCM)
{
	nbHeuresCM_ = nbHeuresCM;
}

void Module::nbHeuresTD(int nbHeuresTD)
{
	nbHeuresTD_ = nbHeuresTD;
}

void Module::nbHeuresTP(int nbHeuresTP)
{
	nbHeuresTP_ = nbHeuresTP;
}

void Module::addGroupe(Groupe& groupe)
{
	listeGroupe_.push_back(&groupe);
}
