#pragma once

#include <string>
#include <map>
#include <cliext/map>


ref class Casier
{
public :
	enum class TypeDeVin { Rouge, Rose, Blanc };

private :
	std::string nomDuDomaine;
	TypeDeVin typeDeVin;
	int annee;
	int nbBouteilles;
	int prixParBouteille;

	std::map<TypeDeVin, std::string> nomTypeDeVin = {
		{TypeDeVin::Blanc, "Blanc"},
		{TypeDeVin::Rouge, "Rouge"},
		{TypeDeVin::Rose, "Rose"}
	};

public : 
	Casier();
	/*
	* std::string nomDuDomaine, TypeDeVin typeDeVin, int annee, int nbBouteilles, int prixParBouteille
	*/
	Casier(std::string nomDuDomaine, TypeDeVin typeDeVin, int annee, int nbBouteilles, int prixParBouteille);

	void FixerNomDuDomaine(std::string nomDuDomaine);
	std::string recupNomDuDomaine();

	void FixerTypeDeVin(TypeDeVin typeDeVin);
	TypeDeVin recupTypeDeVin();

	void FixerAnnee(int annee);
	int recupAnnee();

	void FixerNbBouteilles(int nbBouteilles);
	int recupNbBouteilles();

	void FixerPrixParBouteille(int prixParBouteille);
	int recupPrixParBouteille();

	std::string ConsulterInformations();
};

