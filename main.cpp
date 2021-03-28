#include <iostream>
#include <cstring>
#include "Animale.h"
#include "Angajati.h"

int main()
{
    Leu leu1("Charile", 4, 0, 0);
    Urs urs1("Bruno", 2, 1, 1);

    std::cout << leu1;
    std::cout << "\n";
    leu1.dreseaza();
    std::cout << "\n";
    std::cout << leu1;
    std::cout << "\n\n";
    urs1.afisare();
    std::cout << "\n";
    urs1.dreseaza();
    std::cout << "\n";
    urs1.afisare(); std::cout << "\n";
    std::cout << "\n";
    Casier casier1("Popescu", "Dan", 30, 5);
    casier1.afisare();
    std::cout << "\n";
    casier1.marire_salariu();
    std::cout << "\n";

    GradinaZoologica zoo1;
    zoo1.adaugare_animal(leu1);
    zoo1.adaugare_animal(urs1);
    //zoo1.adaugare_angajat(casier1); 
    zoo1.afisare_zoo();
}

