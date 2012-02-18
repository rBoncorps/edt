#include "Personne.h"

Personne::Personne(string nom, string prenom)
{
	nom_ = nom;
	prenom_ = prenom;
}

Personne::~Personne()
{

}

string Personne::nom() const
{
	return nom_;
}

string Personne::prenom() const
{
	return prenom_;
}

void Personne::nom(string nom)
{
	nom_ = nom;
}

void Personne::prenom(string prenom)
{
	prenom_ = prenom;
}
