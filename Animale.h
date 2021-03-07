#pragma once
#include "Animal.h"

class Leu :public Animal {
public:
    Leu(std::string, int, bool, bool);
    ~Leu();
    void dreseaza();
    void infoGenerale();
    void afisare();
};

class Urs :public Animal {
public:
    Urs(std::string, int, bool, bool);
    ~Urs();
    void dreseaza();
    void infoGenerale();
    void afisare();
};


