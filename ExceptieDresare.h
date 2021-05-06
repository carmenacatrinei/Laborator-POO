#pragma once
#include <iostream>
#include <exception>
#include <cstring>
#include "GradinaZoologica.h"
#include "Animale.h"
#include "Animal.h"

class ExceptieDresare :
    public std::exception
{   
    public:
        ExceptieDresare() {}

        ~ExceptieDresare() {}

        const char* what() const throw() 
        {
            return "Animalul este deja dresat!";
        }
};

