#include "Casier.h"


Casier::Casier() 
	: nomDuDomaine("Sans Domaine"), typeDeVin(Casier::TypeDeVin::Rouge), annee(2000), nbBouteilles(0), prixParBouteille(150)
{ }

Casier::Casier(std::string nomDuDomaine, TypeDeVin typdeDeVin, int annee, int nbBouteilles, int prixParBouteille)
	: nomDuDomaine(nomDuDomaine), typeDeVin(typdeDeVin), annee(annee), nbBouteilles(nbBouteilles), prixParBouteille(prixParBouteille)
{ }

void Casier::FixerNomDuDomaine(std::string nomDuDomaine) {
	this->nomDuDomaine = nomDuDomaine;
}
std::string Casier::recupNomDuDomaine() {
	return nomDuDomaine;
}

void Casier::FixerTypeDeVin(TypeDeVin typeDeVin) { 
	this->typeDeVin = typeDeVin;
}
Casier::TypeDeVin Casier::recupTypeDeVin() { 
	return typeDeVin;
}

void Casier::FixerAnnee(int annee) { 
	this->annee = annee;
}
int Casier::recupAnnee() {
	return annee;
}

void Casier::FixerNbBouteilles(int nbBouteilles) { 
	this->nbBouteilles = nbBouteilles;
}
int Casier::recupNbBouteilles() {
	return nbBouteilles;
}

void Casier::FixerPrixParBouteille(int prixParBouteille) {
	this->prixParBouteille = prixParBouteille;
}
int Casier::recupPrixParBouteille() {
	return prixParBouteille;
}

std::string Casier::ConsulterInformations() {
	std::string information = 
		nomDuDomaine 
		+ " propose du vin " 
		+ nomTypeDeVin[typeDeVin] 
		+ " de l'an " 
		+ std::to_string(annee) 
		+ ". Il y a " 
		+ std::to_string(nbBouteilles)
		+ " coutant chacune " 
		+ std::to_string(prixParBouteille)
		+ " euros \n";

	return information;
}