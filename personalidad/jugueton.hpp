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
    ~Jugueton();
};

#endif
