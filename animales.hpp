#ifndef ANIMALES_HPP
#define ANIMALES_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "personalidad.hpp"

class Animal{

protected:
    std::string nombre;
    int edad;
    std::string tamanio;
    bool se_bania;
    float hambre;
    float higiene;
    float base_hambre;
    float base_higiene;
    
public:
    Animal();
    Animal(std::string n_nombre, int n_edad, std::string n_tamanio);
    Personalidad* personalidad;
    std::string mostrar_nombre();
    virtual void mostrar_info(){};
    virtual void alimentar();
    virtual void pasar_tiempo(){};
    void baniarse();
    virtual ~Animal(){};
};

#endif