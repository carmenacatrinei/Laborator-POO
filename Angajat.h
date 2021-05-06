#pragma once
#include <iostream>
#include <cstring>

class Angajat{
protected:
	std::string job, nume, prenume;
	int varsta, vechime;
	float salariu;

public:
	Angajat() {
		//constructor implicit
		job = "";
		nume = "";
		prenume = "";
		varsta = 0;
		vechime = 0;
		salariu = 0;
	}
	Angajat(std::string nume, std::string prenume, int varsta, int vechime)
	{	//constructor general
		this->job = "";
		this->nume = nume;
		this->prenume = prenume;
		this->varsta = varsta;
		this->vechime = vechime;
	}

	void afisare() {
		std::cout << this->nume << " " << this->prenume << " are job-ul de " << this->job << ". ";
		std::cout << "Angajatul are varsta de " << this->varsta << " ani, o vechime de " << this->vechime << " ani ";
		std::cout << "si un salariu de " << this->salariu << " lei net lunar.";
	}

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

	virtual void marire_salariu() = 0;
	
};

