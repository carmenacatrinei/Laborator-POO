#pragma once
#include "Angajati.h"
#include "Animale.h"
#include <vector>
#include <memory>

class GradinaZoologica
{
private:
	friend class Casier;
	friend class Ingrijitor;
	friend class Dresor;
	static const int salariuBaza_casier = 1500;
	static const int salariuBaza_dresor = 1800;
	static const int salariuBaza_ingrijitor = 1500; 
	//std::vector<std::unique_ptr<Animal>> animale;
	std::vector <Animal*> animale;
	std::vector <Angajat*> angajati;

public:
	GradinaZoologica()
	{}

	~GradinaZoologica() 
	{}

	void adaugare_animal(Leu animal)
	{
		Leu* leu_copie = new Leu(animal);
		if (leu_copie == nullptr)
		{
			throw new std::bad_alloc();
		}
		animale.push_back(leu_copie);
	}

	void adaugare_animal(Urs animal)
	{
		animale.push_back(new Urs(animal));
	}

/*	void adaugare_angajat(Casier angajat)
	{
		angajati.push_back(new Casier(angajat));
	}

	void adaugare_angajat(Ingrijitor angajat)
	{
		angajati.push_back(new Ingrijitor(angajat));
	}

	void adaugare_angajat(Dresor angajat)
	{
		angajati.push_back(new Dresor(angajat));
	} //pentru o implementare ulterioara '\_(:D)_/'
	*/
	void afisare_zoo()
	{
		std::cout << "\nAnimalele sunt: " << "\n";
		for (int i = 0; i < animale.size(); i++)
		{
			animale[i]->afisare();
			std::cout << "\n";
		}
		std::cout << "\n\n";
		/*std::cout << "Angajatii sunt: " << "\n";
		for (int i = 0; i < angajati.size(); i++)
		{
			angajati[i]->afisare();
		}*/
	}
};

