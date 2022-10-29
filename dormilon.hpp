#ifndef DORMILON_HPP
#define DORMILON_HPP

#include <iostream>
#include <string>
#include "personalidad.hpp"


class Dormilon : public Personalidad{
private:
    std::string nombre;

public:
    Dormilon(std::string nombre);
    void modificar_bases(float* base_higiene, float* base_hambre);
    ~Dormilon();
};

#endif
