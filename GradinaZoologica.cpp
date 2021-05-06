#include "GradinaZoologica.h"

GradinaZoologica::~GradinaZoologica()
{
	for (int i = animale.size() - 1; i >= 0; i--)
	{
		delete animale[i];
	}
	for (int i = angajati.size() - 1; i >= 0; i--)
	{
		delete angajati[i];
	}
}

void GradinaZoologica::adaugare_animal(Leu animal)
{
	animale.push_back(new Leu(animal));
}

void GradinaZoologica::adaugare_animal(Urs animal)
{
	animale.push_back(new Urs(animal));
}

void GradinaZoologica::adaugare_animal(Vulpe animal)
{
	animale.push_back(new Vulpe(animal));
}

void GradinaZoologica::afisare_zoo()
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
