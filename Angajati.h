#pragma once
#include "Angajat.h"
#include "GradinaZoologica.h"

class Casier : public Angajat{
public:
	Casier();
	Casier(std::string, std::string, int, int);
	~Casier();
	void marire_salariu() { Angajat::marire_salariu(); };
	int get_salariu_baza() override;
	//void afisare();
};

class Ingrijitor : public Angajat {
public:
	Ingrijitor();
	Ingrijitor(std::string, std::string, int, int);
	~Ingrijitor();
	void marire_salariu() { Angajat::marire_salariu(); };
	int get_salariu_baza() override;
	//void afisare();
};

class Dresor : public Angajat {
public:
	Dresor();
	Dresor(std::string, std::string, int, int);
	~Dresor();
	void marire_salariu() { Angajat::marire_salariu(); };
	int get_salariu_baza() override;
	//void afisare();
};


