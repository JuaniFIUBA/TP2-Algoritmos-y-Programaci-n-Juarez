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
    void modificar_bases(float* base_higiene, float* base_hambre);
    std::string mostrar_nombre();
    ~Travieso();
};

#endif
