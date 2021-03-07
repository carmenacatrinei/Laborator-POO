#include "Animale.h"

Leu::Leu(std::string nume, int varsta, bool gen, bool dresat) {
    this->specie = "Leu";
    this->nume = nume;
    this->varsta = varsta;
    //numar += 1;
    this->gen = gen;
    this->dresat = dresat;
    if (this->varsta < 3)
    {
        this->portie_zilnica = 2; //in kg
    }
    else
    {
        this->portie_zilnica = 4;
    }
}

void Leu::infoGenerale() {
    std::cout << "\n......."; //aici voi adauga informatii generale despre specie
}

void Leu::dreseaza() {
    if (this->dresat == true)
    {
        std::cout << this->specie << "l " << nume << " este deja dresat!";
    }
    else if (this->varsta >= 3 && this->varsta <= 5)
    {
        this->dresat = true;
        std::cout << "Leul " << this->nume << " a fost dresat!";
    }
    else
    {
        std::cout << "Leul " << this->nume << " nu poate fi dresat!";
    }
}

void Leu::afisare()
{
    std::cout << this->specie << "l " << this->nume << " are varsta de " << this->varsta << " ani. ";
    std::cout << this->nume << " are genul ";
    if (gen == 0)
    {
        std::cout << "masculin,";
    }
    else
    {
        std::cout << "feminin,";
    }
    if (dresat == 1)
    {
        std::cout << " este dresat ";
    }
    else
    {
        std::cout << " nu este dresat ";
    }
    std::cout << "si mananca zilnic " << this->portie_zilnica << " kg de mancare.";
}

Leu::~Leu() {
    specie = "";
    nume = "";
    varsta = 0;
    //numar -= 1;
    if (gen == 0)
    {
        gen = 1;
    }
    else
    {
        gen = 0;
    }
    if (dresat == 0)
    {
        dresat = 1;
    }
    else
    {
        dresat = 0;
    }
    portie_zilnica = 0;
}

//------------------------------------------------------------------

Urs::Urs(std::string nume, int varsta, bool gen, bool dresat) {
    this->specie = "Urs";
    this->nume = nume;
    this->varsta = varsta;
    //numar += 1;
    this->gen = gen;
    this->dresat = dresat;
    if (this->varsta < 3)
    {
        this->portie_zilnica = 2; //in kg
    }
    else
    {
        this->portie_zilnica = 4;
    }
}

void Urs::infoGenerale() {
    std::cout << "\n......."; //aici voi adauga informatii generale despre specie
}

void Urs::dreseaza() {
    if (this->dresat == true)
    {
        std::cout << this->specie << "ul " << nume << " este deja dresat!";
    }
    else if (this->varsta >= 3 && this->varsta <= 5)
    {
        this->dresat = true;
        std::cout << "Ursul " << this->nume << " a fost dresat!";
    }
    else
    {
        std::cout << "Ursul " << this->nume << " nu poate fi dresat!";
    }
}

void Urs::afisare()
{
    std::cout << this->specie << "ul " << this->nume << " are varsta de " << this->varsta << " ani. ";
    std::cout << this->nume << " are genul ";
    if (gen == 0)
    {
        std::cout << "masculin,";
    }
    else
    {
        std::cout << "feminin,";
    }
    if (dresat == 1)
    {
        std::cout << " este dresat ";
    }
    else
    {
        std::cout << " nu este dresat ";
    }
    std::cout << "si mananca zilnic " << this->portie_zilnica << " kg de mancare.";
}

Urs::~Urs() {
    specie = "";
    nume = "";
    varsta = 0;
    //numar -= 1;
    if (gen == 0)
    {
        gen = 1;
    }
    else
    {
        gen = 0;
    }
    if (dresat == 0)
    {
        dresat = 1;
    }
    else
    {
        dresat = 0;
    }
    portie_zilnica = 0;
}

//--------------------------------------------------------------------