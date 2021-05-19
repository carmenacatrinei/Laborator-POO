#include "Angajati.h"

Casier::Casier()
{
	job = "";
	nume = "";
	prenume = "";
	varsta = 0;
	vechime = 0;
	salariu = 0;
}

Casier::Casier(std::string nume, std::string prenume, int varsta, int vechime) : Angajat(nume, prenume, varsta, vechime)
{
	this->job = "Casier";
	this->salariu = GradinaZoologica::salariuBaza_casier;
}

/*void Casier::afisare() 
{
	std::cout << this->nume << " " << this->prenume << " are job-ul de " << this->job << ". ";
	std::cout << "Angajatul are varsta de " << this->varsta << " ani, o vechime de " << this->vechime << " ani ";
	std::cout << "si un salariu de " << this->salariu << " lei net lunar.";
}
*/

//void Casier::marire_salariu()
//{
//	if (vechime / 2 > 0)
//	{
//		salariu = GradinaZoologica::salariuBaza_casier + 0.1 * GradinaZoologica::salariuBaza_casier;
//	}
//	for (int i = 1; i < vechime / 2; i++)
//	{
//		salariu = 1.1 * salariu;
//	}
//
//	if (salariu > GradinaZoologica::salariuBaza_casier)
//	{
//		std::cout << "Angajatul " << this->nume << " " << this->prenume << " are salariul marit!\n";
//		std::cout << "Salariul actual este de " << this->salariu << " lei net lunar.";
//	}
//}

int Casier::get_salariu_baza()
{
	return GradinaZoologica::get_salariu_baza(1);
}

Casier::~Casier()
{
	job = "";
	nume = "";
	prenume = "";
	varsta = 0;
	vechime = 0;
	salariu = 0;
}

//---------------------------------------------------------------

Ingrijitor::Ingrijitor()
{
	job = "";
	nume = "";
	prenume = "";
	varsta = 0;
	vechime = 0;
	salariu = 0;
}

Ingrijitor::Ingrijitor(std::string nume, std::string prenume, int varsta, int vechime) : Angajat(nume, prenume, varsta, vechime)
{
	this->job = "Ingrijitor";
	this->salariu = GradinaZoologica::salariuBaza_ingrijitor;
}

/*void Ingrijitor::afisare()
{
	std::cout << this->nume << " " << this->prenume << " are job-ul de " << this->job << ". ";
	std::cout << "Angajatul are varsta de " << this->varsta << " ani, o vechime de " << this->vechime << " ani ";
	std::cout << "si un salariu de " << this->salariu << " lei net lunar.";
}*/

//void Ingrijitor::marire_salariu()
//{
//	if (vechime / 2 > 0)
//	{
//		salariu = GradinaZoologica::salariuBaza_ingrijitor + 0.1 * GradinaZoologica::salariuBaza_ingrijitor;
//	}
//	for (int i = 1; i < vechime / 2; i++)
//	{
//		salariu = 1.1 * salariu;
//	}
//
//	if (salariu > GradinaZoologica::salariuBaza_ingrijitor)
//	{
//		std::cout << "Angajatul " << this->nume << " " << this->prenume << " are salariul marit!\n";
//		std::cout << "Salariul actual este de " << this->salariu << " lei net lunar.";
//	}
//}

int Ingrijitor::get_salariu_baza()
{
	return GradinaZoologica::get_salariu_baza(3);
}

Ingrijitor::~Ingrijitor()
{
	job = "";
	nume = "";
	prenume = "";
	varsta = 0;
	vechime = 0;
	salariu = 0;
}

//-------------------------------------------------------------------

Dresor::Dresor()
{
	job = "";
	nume = "";
	prenume = "";
	varsta = 0;
	vechime = 0;
	salariu = 0;
}

Dresor::Dresor(std::string nume, std::string prenume, int varsta, int vechime) : Angajat(nume, prenume, varsta, vechime)
{
	this->job = "Dresor";
	this->salariu = GradinaZoologica::salariuBaza_dresor;
}

/*void Dresor::afisare()
{
	std::cout << this->nume << " " << this->prenume << " are job-ul de " << this->job << ". ";
	std::cout << "Angajatul are varsta de " << this->varsta << " ani, o vechime de " << this->vechime << " ani ";
	std::cout << "si un salariu de " << this->salariu << " lei net lunar.";
}*/

//void Dresor::marire_salariu()
//{
//	if (vechime / 2 > 0)
//	{
//		salariu = GradinaZoologica::salariuBaza_dresor + 0.1 * GradinaZoologica::salariuBaza_dresor;
//	}
//	for (int i = 1; i < vechime / 2; i++)
//	{
//		salariu = 1.1 * salariu;
//	}
//
//	if (salariu > GradinaZoologica::salariuBaza_dresor)
//	{
//		std::cout << "Angajatul " << this->nume << " " << this->prenume << " are salariul marit!\n";
//		std::cout << "Salariul actual este de " << this->salariu << " lei net lunar.";
//	}
//}

int Dresor::get_salariu_baza()
{
	return GradinaZoologica::get_salariu_baza(2);
}

Dresor::~Dresor()
{
	job = "";
	nume = "";
	prenume = "";
	varsta = 0;
	vechime = 0;
	salariu = 0;
}

//---------------------------------------------------------------------