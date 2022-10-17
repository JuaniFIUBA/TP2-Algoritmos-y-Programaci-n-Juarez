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
    int hambre;
    int higiene;

protected:
    personalidad_t personalidad;

public:
    bool se_baña;
    Animal();
    Animal(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_personalidad);
    void mostrar_nombre_edad();
    virtual void ensuciar_aumentar_hambre();
    virtual void alimentar();
    void bañarse();
};

#endif