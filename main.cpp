#include <iostream>
#include <cstring>
#include "Animale.h"
#include "Angajati.h"


int main()
{
    Leu leu1("Charile", 4, 0, 0);
    Urs urs1("Bruno", 2, 1, 1);

    leu1.afisare();
    std::cout << "\n";
    leu1.dreseaza();
    std::cout << "\n";
    leu1.afisare();
    std::cout << "\n\n";
    urs1.afisare();
    std::cout << "\n";
    urs1.dreseaza();
    std::cout << "\n";
    urs1.afisare(); std::cout << "\n";
    std::cout << "\n";
    Casier casier1("Popescu", "Dan", 30, 5, 1500);
    casier1.afisare();
    std::cout << "\n";
    casier1.marire_salariu();
    std::cout << "\n";
}

