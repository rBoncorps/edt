#include "Etudiant.h"

Etudiant::Etudiant(string nom,string prenom, int num, string adressePost, string adresseMail,Groupe& groupe) : Personne(nom,prenom),groupe_(groupe)
{
	num_ = num;
	adressePost_ = adressePost;
	adresseMail_ = adresseMail;
}

Etudiant::~Etudiant()
{

}

int Etudiant::num() const
{
	return num_;
}

string Etudiant::adressePost() const
{
	return adressePost_;
}

string Etudiant::adresseMail() const
{
	return adresseMail_;
}

void Etudiant::num(int num)
{
	num_ = num;
}

void Etudiant::adressePost(string adressePost)
{
	adressePost_ = adressePost;
}

void Etudiant::adresseMail(string adresseMail)
{
	adresseMail_ = adresseMail;
}

Groupe& Etudiant::groupe() const
{
	return groupe_;
}

void Etudiant::groupe(Groupe& groupe)
{
	groupe_ = groupe;
}
std::ostream& operator<<(ostream& os, const Etudiant& e)
{
	os << e.nom() << " " << e.prenom() << "" << e.num();
	return os;
}
