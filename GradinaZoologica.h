#pragma once
#include "Angajati.h"
#include "Animale.h"

class GradinaZoologica
{
private:
	friend class Casier;
	friend class Ingrijitor;
	friend class Dresor;
	static const int salariuBaza_casier = 1500;
	static const int salariuBaza_dresor = 1800;
	static const int salariuBaza_ingrijitor = 1500;
};

