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
    std::string tamaño;
    bool se_baña;
    float hambre;
    float higiene;
    float base_hambre;
    float base_higiene;
    
public:
    Animal();
    Animal(std::string n_nombre, int n_edad, std::string n_tamaño);
    Personalidad* personalidad;
    virtual void mostrar_info(){};
    virtual void alimentar();
    virtual void pasar_tiempo(){};
    void bañarse();
    virtual ~Animal(){};
};

#endif