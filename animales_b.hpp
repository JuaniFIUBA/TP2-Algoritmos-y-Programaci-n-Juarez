#ifndef ANIMALES_B_HPP
#define ANIMALES_B_HPP

#include <iostream>
#include <string>
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
    char especie;
    std::string personalidad;
    int hambre;
    int higene;
    std::string nombre_especie();

public:
    Animal();
    Animal(std::string n_nombre, int n_edad, std::string n_tamaño, char n_especie, std::string n_personalidad);
    void mostrar_info();
    void ensuciar_aumentar_hambre();
    void alimentar();
    void bañar();
};

#endif