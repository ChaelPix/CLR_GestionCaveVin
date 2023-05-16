#pragma once
#include "Casier.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Cave
{
public :
    enum class Region { Alsace, Bordeaux, Bourgogne, Rhone };
private:
    value struct RegionViticoles
    {
        Region region;
        List<Casier^>^ casiers;
    };

    Dictionary<Region, String^>^ nomRegion;
    array<RegionViticoles>^ regionsViticoles;
    int nbTotalBouteilles;

public:
    Cave();

	void AjouterCasierDansRegion(Region region, Casier^ casier);
	void SupprimerCasierDansRegion(Region region, int idCasier);
	String^ AfficherTousLesCasiersRegion(Region region);

    int recupNbCasiersRegion();
    Casier^ RecupInfoCasier();

	int recupTotalBouteilles();
	
};

