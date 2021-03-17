#pragma once
#include "Animal.h"
#include <iostream>

class Leu :public Animal {
public:
    Leu(std::string, int,std::string, bool);
    ~Leu();
    Leu(Leu copie_leu);
    Leu operator=(const Leu& copie_leu);
    friend ostream& operator<<(ostream& output, const Leu& afisare_leu);
    void dreseaza();
    void infoGenerale();
    /*void afisare();*/
};

class Urs :public Animal {
public:
    Urs(std::string, int, std::string, bool);
    ~Urs();
    void dreseaza();
    void infoGenerale();
    void afisare();
};

