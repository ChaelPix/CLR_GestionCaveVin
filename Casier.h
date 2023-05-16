#pragma once

using namespace System;
using namespace System::Collections::Generic;

#include <string>
#include <map>


ref class Casier
{
public :
	enum class TypeDeVin { Rouge, Rose, Blanc };

private :
	String^ nomDuDomaine;
	TypeDeVin typeDeVin;
	int annee;
	int nbBouteilles;
	int prixParBouteille;

	Dictionary<TypeDeVin, String^>^ nomTypeDeVin;

public : 
	Casier();

	Casier(String^ nomDuDomaine, TypeDeVin typeDeVin, int annee, int nbBouteilles, int prixParBouteille);

	void FixerNomDuDomaine(String^ nomDuDomaine);
	String^ recupNomDuDomaine();

	void FixerTypeDeVin(TypeDeVin typeDeVin);
	TypeDeVin recupTypeDeVin();

	void FixerAnnee(int annee);
	int recupAnnee();

	void FixerNbBouteilles(int nbBouteilles);
	int recupNbBouteilles();

	void FixerPrixParBouteille(int prixParBouteille);
	int recupPrixParBouteille();

	String^ ConsulterInformations();
};

