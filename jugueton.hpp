#ifndef JUGUETON_HPP
#define JUGUETON_HPP

#include <iostream>
#include <string>
#include "personalidad.hpp"


class Jugueton : public Personalidad{
private:
    std::string nombre;

public:
    Jugueton(std::string nombre);
    void modificar_bases(float* base_higiene, float* base_hambre);
    ~Jugueton();
};

#endif
