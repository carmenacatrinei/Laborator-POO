#include <iostream>
#include <cstring>
#include "Animale.h"
#include "Angajati.h"

int main()
{
    Leu leu1("Charile", 4, 0, 0);
    Leu leu2("Mario", 3, 0, 0);
    Leu leu3("Carla", 5, 1, 1);
    Urs urs1("Bruno", 2, 1, 1);
    Urs urs2("Fram", 4, 1, 0);
    Urs urs3("Berry", 3, 0, 1);
    Vulpe vulpe1("Fox", 2, 0, 1);
    Vulpe vulpe2("Ria", 1, 1, 0);
    Vulpe vulpe3("Neo", 4, 0, 1);

    std::cout << leu1;

    try
    {
        leu1.dreseaza();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "\n" << leu1;
    std::cout << leu2;
    std::cout << leu3;

    std::cout << urs1;
    
    try
    {
        urs1.dreseaza();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "\n" << urs1;
    std::cout << urs2;
    std::cout << urs3;
 
    std::cout << vulpe1;
    try
    {
        vulpe1.dreseaza();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
    std::cout << "\n" << vulpe1;

    std::cout << vulpe2;
    std::cout << vulpe3;

    Casier casier1("Popescu", "Dan", 30, 5);
    casier1.afisare();
    std::cout << "\n";
    casier1.marire_salariu();
    std::cout << "\n";

    GradinaZoologica zoo1;
    zoo1.adaugare_animal(leu1);
    zoo1.adaugare_animal(urs1);
    zoo1.adaugare_animal(leu2);
    zoo1.adaugare_animal(urs2);
    zoo1.adaugare_animal(leu3);
    zoo1.adaugare_animal(urs3);
    zoo1.adaugare_animal(vulpe1);
    zoo1.adaugare_animal(vulpe2);
    zoo1.adaugare_animal(vulpe3);
    //zoo1.adaugare_angajat(casier1); 
    zoo1.afisare_zoo();
}

