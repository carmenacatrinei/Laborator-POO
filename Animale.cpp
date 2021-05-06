#include "Animale.h"
#include "ExceptieDresare.h"

Leu::Leu()
{
    specie = "";
    nume = "";
    varsta = 0;
    gen = 0;
    dresat = 0;
    portie_zilnica = 0;
}

Leu::Leu(const Leu &copie_leu) 
{
    //constructor de copiere
    this->specie = copie_leu.specie;
    this->nume = copie_leu.nume;
    this->varsta = copie_leu.varsta;
    this->gen = copie_leu.gen;
    this->dresat = copie_leu.dresat;
    this->portie_zilnica = copie_leu.portie_zilnica;
}

Leu Leu::operator=(const Leu& copie_leu) {
    this->specie = copie_leu.specie;
    this->nume = copie_leu.nume;
    this->varsta = copie_leu.varsta;
    this->gen = copie_leu.gen;
    this->dresat = copie_leu.dresat;
    this->portie_zilnica = copie_leu.portie_zilnica;
    return *this;
}

std::ostream& operator<<(std::ostream& output, const Leu& afisare_leu) {
    output << afisare_leu.specie << "l " << afisare_leu.nume << " are varsta de " << afisare_leu.varsta;
    if (afisare_leu.varsta == 1)
    {
        output << " an. ";
    }
    else
    {
        output << " ani. ";
    }
    output << afisare_leu.nume << " are genul ";
    if (afisare_leu.gen == 0)
    {
        output << "masculin,";
    }
    else
    {
        output << "feminin,";
    }
    if (afisare_leu.dresat == 1)
    {
        output << " este dresat ";
    }
    else
    {
        output << " nu este dresat ";
    }
    output << "si mananca zilnic " << afisare_leu.portie_zilnica << " kg de mancare.\n\n";
    return output;
}

Leu::Leu(std::string nume, int varsta, bool gen, bool dresat) : Animal(nume, varsta, gen, dresat) 
{   /*lista initializare*/
    this->specie = "Leu";
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
    std::cout << "Leul (Panthera Leo) este o specie de mamifere carnivore din familia felidelor, fiind una dintre cele patru specii ale genului Panthera, reprezentant al subfamiliei felinelor mari.\n";
    std::cout << "Este una dintre cele mai mari feline si unul dintre cei mai mari rapitori terestri (după ursul polar, ursul brun si tigru).";
    /*Sursa: https://ro.wikipedia.org/wiki/Leu */
}

void Leu::dreseaza() {
    if (this->dresat == true)
    {
        throw ExceptieDresare();
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
    std::cout << this->specie << "l " << this->nume << " are varsta de " << this->varsta;
    if (this->varsta == 1)
    {
        std::cout << " an. ";
    }
    else
    {
        std::cout << " ani. ";
    }
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

Urs::Urs()
{
    specie = "";
    nume = "";
    varsta = 0;
    gen = 0;
    dresat = 0;
    portie_zilnica = 0;
}

Urs::Urs(std::string nume, int varsta, bool gen, bool dresat) : Animal(nume, varsta, gen, dresat) 
{
    this->specie = "Urs";
    if (this->varsta < 3)
    {
        this->portie_zilnica = 3; //in kg
    }
    else
    {
        this->portie_zilnica = 5;
    }
}

void Urs::infoGenerale() {
    std::cout << "Ursidele (Ursidae) sau ursii sunt o familie de mamifere mari din subordinul Caniformia raspandite in emisfera nordica, existand cateva specii si in America de Sud.\n"; 
    /*Sursa: https://ro.wikipedia.org/wiki/Urs */
}

void Urs::dreseaza() {
    if (this->dresat == true)
    {
        throw ExceptieDresare();
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

std::ostream& operator<<(std::ostream& output, const Urs& afisare_urs) {
    output << afisare_urs.specie << "ul " << afisare_urs.nume << " are varsta de " << afisare_urs.varsta;
    if (afisare_urs.varsta == 1)
    {
        output << " an. ";
    }
    else
    {
        output << " ani. ";
    }
    output << afisare_urs.nume << " are genul ";
    if (afisare_urs.gen == 0)
    {
        output << "masculin,";
    }
    else
    {
        output << "feminin,";
    }
    if (afisare_urs.dresat == 1)
    {
        output << " este dresat ";
    }
    else
    {
        output << " nu este dresat ";
    }
    output << "si mananca zilnic " << afisare_urs.portie_zilnica << " kg de mancare.\n\n";
    return output;
}

void Urs::afisare()
{
    std::cout << this->specie << "ul " << this->nume << " are varsta de " << this->varsta;
    if (this->varsta == 1)
    {
        std::cout << " an. ";
    }
    else
    {
        std::cout << " ani. ";
    }
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

Vulpe::Vulpe()
{
    specie = "";
    nume = "";
    varsta = 0;
    gen = 0;
    dresat = 0;
    portie_zilnica = 0;
}

Vulpe::Vulpe(std::string nume, int varsta, bool gen, bool dresat) : Animal(nume, varsta, gen, dresat)
{
    this->specie = "Vulpe";
    if (this->varsta < 2)
    {
        this->portie_zilnica = 3; //in kg
    }
    else
    {
        this->portie_zilnica = 4;
    }
}

void Vulpe::infoGenerale() {
    std::cout << "Vulpea este un mamifer omnivor, de dimensiune mică spre medie, incadrat sistematic in familia Canidae, alaturi de lup, caine, sacal, enot s.a.\n";
    /*Sursa: https://ro.wikipedia.org/wiki/Vulpe */
}

void Vulpe::dreseaza() {
    if (this->dresat == true)
    {
        throw ExceptieDresare();
    }
    else if (this->varsta >= 2 && this->varsta <= 4)
    {
        this->dresat = true;
        std::cout << "Vulpea " << this->nume << " a fost dresata!";
    }
    else
    {
        std::cout << "Vulpea " << this->nume << " nu poate fi dresata!";
    }
}

std::ostream& operator<<(std::ostream& output, const Vulpe& afisare_vulpe) {
    output << afisare_vulpe.specie << "a " << afisare_vulpe.nume << " are varsta de " << afisare_vulpe.varsta;
    if (afisare_vulpe.varsta == 1)
    {
        output << " an. ";
    }
    else
    {
        output << " ani. ";
    }
    output << afisare_vulpe.nume << " are genul ";
    if (afisare_vulpe.gen == 0)
    {
        output << "masculin,";
    }
    else
    {
        output << "feminin,";
    }
    if (afisare_vulpe.dresat == 1)
    {
        output << " este dresat ";
    }
    else
    {
        output << " nu este dresat ";
    }
    output << "si mananca zilnic " << afisare_vulpe.portie_zilnica << " kg de mancare.\n\n";
    return output;
}

void Vulpe::afisare()
{
    std::cout << this->specie << "a " << this->nume << " are varsta de " << this->varsta;
    if (this->varsta == 1)
    {
        std::cout << " an. ";
    }
    else
    {
        std::cout << " ani. ";
    }

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
        std::cout << " este dresata ";
    }
    else
    {
        std::cout << " nu este dresata ";
    }
    std::cout << "si mananca zilnic " << this->portie_zilnica << " kg de mancare.";
}

Vulpe::~Vulpe() {
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