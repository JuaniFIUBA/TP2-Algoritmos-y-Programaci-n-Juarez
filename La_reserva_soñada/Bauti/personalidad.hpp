#ifndef PERSONALIDAD_HPP
#define PERSONALIDAD_HPP

#include <iostream>
#include <string>


class Personalidad{
protected:
    std::string nombre;

public:
    float multiplicador_higiene;
    float multiplicador_hambre;
    Personalidad();
    virtual std::string mostrar_nombre();
    virtual void modificar_bases(float* base_higiene, float* base_hambre){};
    virtual ~Personalidad(){};
};

#endif

