#ifndef SOCIABLE_HPP
#define SOCIABLE_HPP

#include <iostream>
#include <string>
#include "personalidad.hpp"


class Sociable : public Personalidad{
private:
    std::string nombre;

public:
    Sociable(std::string nombre);
    ~Sociable();
};

#endif
