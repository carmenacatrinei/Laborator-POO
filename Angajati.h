#pragma once
#include "Angajat.h"
#include "GradinaZoologica.h"

class Casier : public Angajat{
public:
	Casier(std::string, std::string, int, int, float);
	~Casier();
	void afisare();
	void marire_salariu();
};

class Ingrijitor : public Angajat {
public:
	Ingrijitor(std::string, std::string, int, int, float);
	~Ingrijitor();
	void afisare();
	void marire_salariu();
};

class Dresor : public Angajat {
public:
	Dresor(std::string, std::string, int, int, float);
	~Dresor();
	void afisare();
	void marire_salariu();
};


