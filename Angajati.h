#pragma once
#include "Angajat.h"
#include "GradinaZoologica.h"

class Casier : public Angajat{
public:
	Casier(std::string, std::string, int, int);
	~Casier();
	void marire_salariu();
	//void afisare();
};

class Ingrijitor : public Angajat {
public:
	Ingrijitor(std::string, std::string, int, int);
	~Ingrijitor();
	void marire_salariu();
	//void afisare();
};

class Dresor : public Angajat {
public:
	Dresor(std::string, std::string, int, int);
	~Dresor();
	void marire_salariu();
	//void afisare();
};

