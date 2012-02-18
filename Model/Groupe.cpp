#include "Groupe.h"
#include "Module.h"
#include "Etudiant.h"

Groupe:: Groupe(string nom)
{
	nom_ = nom;
}

Groupe::~Groupe()
{

}

Groupe::Groupe(Groupe& groupe)
{
	liste_ = groupe.liste_;
	nom_ = groupe.nom_;
}

string Groupe::nom() const
{
	return nom_;
}

listeEtu Groupe::liste() const
{
	return liste_;
}

void Groupe::nom(const string nom)
{
	nom_ = nom;
}

void Groupe::addEtu(Etudiant& etu)
{
	liste_.push_back(&etu);
}
