#ifndef PERSONALIDAD_HPP
#define PERSONALIDAD_HPP

#include <iostream>
#include <string>


class Personalidad{
public:
    float multiplicador_higiene;
    float multiplicador_hambre;
    Personalidad();
    virtual ~Personalidad();
};

#endif

