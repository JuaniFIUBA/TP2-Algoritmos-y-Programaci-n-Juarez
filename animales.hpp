#ifndef ANIMALES_HPP
#define ANIMALES_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "personalidades.hpp"

const char PERRO = 'P';
const char GATO = 'G';
const char CABALLO = 'C';
const char ROEDOR = 'R';
const char CONEJO = 'O';
const char ERIZO = 'E';
const char LAGARTIJA = 'L'; 

class Animal{
private:
    std::string nombre;
    int edad;
    std::string tamaño;
    

protected:
    bool se_baña;
    float hambre;
    float higiene;
    Personalidad* personalidad;

public:
    Animal();
    Animal(std::string n_nombre, int n_edad, std::string n_tamaño);
    void mostrar_nombre_edad();
    virtual void alimentar();
    void bañarse();
};

#endif