#pragma once
#include "Casier.h"
#include <vector>

ref class Cave
{
public:
	enum class Region {Alsace, Bordeaux, Bourgogne, Rhone};

	ref struct RegionViticoles
	{
		Region region;
		std::vector<Casier> casiers;
	};

	std::map<Region, std::string> nomRegion = {
		{Region::Alsace, "Alsace"},
		{Region::Bordeaux, "Bordeaux"},
		{Region::Rhone, "Rhone"},
		{Region::Bourgogne, "Bourgogne"}
	};

private:
	RegionViticoles regionsViticoles[4];
	int nbTotalBouteilles;

public:
	Cave();

	void AjouterCasierDansRegion(Region region, Casier casier);
	void SupprimerCasierDansRegion(Region region, int idCasier);
	std::string AfficherTousLesCasiersRegion(Region region);

	int recupTotalBouteilles();
	
};

