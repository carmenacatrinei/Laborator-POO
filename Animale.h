#pragma once
#include "Animal.h"
#include <iostream>

class Leu :public Animal {
public:
    Leu();
    Leu(std::string, int, bool, bool);
    ~Leu();
    Leu(Leu& copie_leu);
    Leu operator=(const Leu& copie_leu);
    friend std::ostream& operator<<(std::ostream& output, const Leu& afisare_leu);
    void dreseaza();
    void infoGenerale();
    void afisare();
};

class Urs :public Animal {
public:
    Urs();
    Urs(std::string, int, bool, bool);
    ~Urs();
    void dreseaza();
    void infoGenerale();
    void afisare();
};



