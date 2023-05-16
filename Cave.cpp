#include "Cave.h"

Cave::Cave()
{
	nbTotalBouteilles = 0;
	for (int i = 0; i < 4; i++)
		regionsViticoles[i].region = static_cast<Region>(i);
} 

void Cave::AjouterCasierDansRegion(Cave::Region region, Casier casier)
{
	regionsViticoles[(int)region].casiers.push_back(casier);
}

void Cave::SupprimerCasierDansRegion(Cave::Region region, int idCasier)
{
	std::vector<Casier>& casiersDelaRegion = regionsViticoles[(int)region].casiers;
	casiersDelaRegion.erase(casiersDelaRegion.begin() + idCasier);
}

std::string Cave::AfficherTousLesCasiersRegion(Cave::Region region)
{
	std::vector<Casier> & casiersDelaRegion = regionsViticoles[(int)region].casiers;
	int nbCasiers = casiersDelaRegion.size();

	std::string affichage = "Informations des casiers de " + nomRegion[region] + "\n \n";

	for (int i = 0; i < nbCasiers; i++)
	{
		affichage += "Casier #"
			+ std::to_string(i+1) 
			+ " "
			+ casiersDelaRegion.at(i).ConsulterInformations();
	}

	return affichage;
}

int Cave::recupTotalBouteilles()
{
	nbTotalBouteilles = 0;
	for (int i = 0; i < 4; i++)
	{
		int nbCasiers = regionsViticoles[i].casiers.size();
		for (int j = 0; j < nbCasiers; j++)
			nbTotalBouteilles += regionsViticoles[i].casiers.at(j).recupNbBouteilles();
	}

	return nbTotalBouteilles;
}