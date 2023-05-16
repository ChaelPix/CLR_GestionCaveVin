#include "Cave.h"

Cave::Cave()
{
    nomRegion = gcnew Dictionary<Region, String^>();
    nomRegion->Add(Region::Alsace, "Alsace");
    nomRegion->Add(Region::Bordeaux, "Bordeaux");
    nomRegion->Add(Region::Rhone, "Rhone");
    nomRegion->Add(Region::Bourgogne, "Bourgogne");

    regionsViticoles = gcnew array<RegionViticoles>(4);

    nbTotalBouteilles = 0;
    for (int i = 0; i < 4; i++)
        regionsViticoles[i].region = static_cast<Region>(i);
}

void Cave::AjouterCasierDansRegion(Cave::Region region, Casier^ casier)
{
    regionsViticoles[(int)region].casiers->Add(casier);
}

void Cave::SupprimerCasierDansRegion(Cave::Region region, int idCasier)
{
    List<Casier^>^ casiersDelaRegion = regionsViticoles[(int)region].casiers;
    casiersDelaRegion->RemoveAt(idCasier);
}

String^ Cave::AfficherTousLesCasiersRegion(Cave::Region region)
{
    List<Casier^>^ casiersDelaRegion = regionsViticoles[(int)region].casiers;
    int nbCasiers = casiersDelaRegion->Count;

    String^ affichage = "Informations des casiers de " + nomRegion[region] + "\n \n";

    for (int i = 0; i < nbCasiers; i++)
    {
        affichage += "Casier #" + (i + 1).ToString() + " " + casiersDelaRegion[i]->ConsulterInformations() + "\n";
    }

    return affichage;
}

int Cave::recupTotalBouteilles()
{
    nbTotalBouteilles = 0;
    for (int i = 0; i < 4; i++)
    {
        List<Casier^>^ casiersDelaRegion = regionsViticoles[i].casiers;
        int nbCasiers = casiersDelaRegion->Count;
        for (int j = 0; j < nbCasiers; j++)
            nbTotalBouteilles += casiersDelaRegion[j]->recupNbBouteilles();
    }

    return nbTotalBouteilles;
}
