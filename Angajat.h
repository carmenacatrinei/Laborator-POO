#pragma once
#include <iostream>
#include <cstring>
class Angajat{
protected:
	std::string job, nume, prenume;
	int varsta, vechime;
	float salariu;

public:
	std::string getJob() {
		return this->job;
	}
	std::string getNume() {
		return this->nume;
	}
	std::string getPrenume() {
		return this->prenume;
	}
	int getVarsta() {
		return this->varsta;
	}
	int setVarsta(int varsta_noua) {
		this->varsta = varsta_noua;
	}
	int getVechime() {
		return this->vechime;
	}
	int setVechime(int vechime_actualizata) {
		this->vechime = vechime_actualizata;
	}
	float getSalariu() {
		return this->salariu;
	}
	float setSalariu(float salariu_nou) {
		this->salariu = salariu_nou;
	}
	virtual void afisare() = 0;
	virtual void marire_salariu() = 0;
	
};

