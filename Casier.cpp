#include "Casier.h"


Casier::Casier() 
	: nomDuDomaine("Sans Domaine"), typeDeVin(Casier::TypeDeVin::Rouge), annee(2000), nbBouteilles(0), prixParBouteille(150)
{
	nomTypeDeVin = gcnew Dictionary<TypeDeVin, String^>();
	nomTypeDeVin->Add(TypeDeVin::Blanc, "Blanc");
	nomTypeDeVin->Add(TypeDeVin::Rouge, "Rouge");
	nomTypeDeVin->Add(TypeDeVin::Rose, "Rose");
}

Casier::Casier(String^ nomDuDomaine, TypeDeVin typdeDeVin, int annee, int nbBouteilles, int prixParBouteille)
	: nomDuDomaine(nomDuDomaine), typeDeVin(typdeDeVin), annee(annee), nbBouteilles(nbBouteilles), prixParBouteille(prixParBouteille)
{ }

void Casier::FixerNomDuDomaine(String^ nomDuDomaine) {
	this->nomDuDomaine = nomDuDomaine;
}
String^ Casier::recupNomDuDomaine() {
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

String^ Casier::ConsulterInformations() {
	String^ information = 
		nomDuDomaine 
		+ " propose du vin " 
		+ nomTypeDeVin[typeDeVin] 
		+ " de l'an " 
		+ Convert::ToString(annee)
		+ ". Il y a " 
		+ Convert::ToString(nbBouteilles)
		+ " coutant chacune " 
		+ Convert::ToString(prixParBouteille)
		+ " euros \n";

	return information;
}