#ifndef TRAVIESO_HPP
#define TRAVIESO_HPP

#include <iostream>
#include <string>
#include "personalidad.hpp"


class Travieso : public Personalidad{
private:
    std::string nombre;

public:
    Travieso(std::string nombre);
    ~Travieso();
};

#endif
