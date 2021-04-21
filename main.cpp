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

    std::cout << leu1;
    leu1.dreseaza();
    std::cout << "\n" << leu1;
    std::cout << leu2;
    std::cout << leu3;

    urs1.afisare();
    std::cout << "\n\n";
    urs1.dreseaza();
    std::cout << "\n";
    urs1.afisare(); 
    std::cout << "\n\n";
    urs2.afisare();
    std::cout << "\n\n";
    urs3.afisare();
    std::cout << "\n\n";
    Casier casier1("Popescu", "Dan", 30, 5);
    casier1.afisare();
    std::cout << "\n";
    casier1.marire_salariu();
    std::cout << "\n";

    GradinaZoologica zoo1;

    try
    {
        zoo1.adaugare_animal(leu1);
    }
    catch (std::bad_alloc& badAll)
    {
        std::cerr << "Nu s-a putut adauga acest animal! " << badAll.what() << '\n';
    }
    

    zoo1.adaugare_animal(urs1);
    zoo1.adaugare_animal(leu2);
    zoo1.adaugare_animal(urs2);
    zoo1.adaugare_animal(leu3);
    zoo1.adaugare_animal(urs3);
    //zoo1.adaugare_angajat(casier1); 
    zoo1.afisare_zoo();
}

