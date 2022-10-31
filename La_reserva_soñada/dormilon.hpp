#ifndef DORMILON_HPP
#define DORMILON_HPP

#include <iostream>
#include <string>
#include "personalidad.hpp"


class Dormilon : public Personalidad{

public:
    std::string nombre;
    Dormilon(std::string nombre);
    void modificar_bases(float* base_higiene, float* base_hambre);
    std::string mostrar_nombre();
    ~Dormilon();
};

#endif
