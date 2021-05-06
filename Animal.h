#pragma once
#include <iostream>
#include <cstring>

class Animal {      //clasa abstracta pe care o vor mosteni animalele
protected:
    std::string specie, nume;
    int varsta;
    //static int numar;
    bool gen; //0 masculin, 1 feminin 
    bool dresat; // 0-nu, 1-da
    float portie_zilnica;
public:
    Animal()
    {
        specie = "";
        nume = "";
        varsta = 0;
        gen = 0;
        dresat = 0;
        portie_zilnica = 0;
    }
    Animal(std::string nume, int varsta, bool gen, bool dresat) {
        this->nume = nume;
        this->varsta = varsta;
        this->gen = gen;
        this->dresat = dresat;
    }
    std::string getSpecie() {
        return this->specie;
    }
    std::string getNume() {
        return this->nume;
    }
    void setNume(std::string nume_nou) {
        this->nume = nume_nou;
    }
    int getVarsta() {
        return varsta;
    }
    void setVarsta(int varsta_noua) {
        this->varsta = varsta_noua;
    }
    //int getNumar() {
    //    return numar;
    //}
    bool getGen() {
        return gen;
    }
    float getPortieZilnica() {
        return portie_zilnica;
    }
    void setPortieZilnica(float portie_noua) {
        this->portie_zilnica = portie_noua;
    }
    bool isDresat() {
        return dresat;
    }
    virtual void afisare() = 0;
    virtual void dreseaza() = 0;
    virtual void infoGenerale() = 0;
};

//int Animal::numar = 0;
