#pragma once
#include "Animal.h"
#include <iostream>

class Leu :public Animal {
public:
    Leu();
    Leu(std::string, int, bool, bool);
    ~Leu();
    Leu(const Leu& copie_leu);
    Leu operator=(const Leu& copie_leu);
    friend std::ostream& operator<<(std::ostream& output, const Leu& afisare_leu);
    void dreseaza() override;
    void infoGenerale() override;
    void afisare() override;
};

class Urs :public Animal {
public:
    Urs();
    Urs(std::string, int, bool, bool);
    ~Urs();
    friend std::ostream& operator<<(std::ostream& output, const Urs& afisare_urs);
    void dreseaza() override;
    void infoGenerale() override;
    void afisare() override;
};

class Vulpe :public Animal {
public:
    Vulpe();
    Vulpe(std::string, int, bool, bool);
    ~Vulpe();
    friend std::ostream& operator<<(std::ostream& output, const Vulpe& afisare_vulpe);
    void dreseaza() override;
    void infoGenerale() override;
    void afisare() override;
};


