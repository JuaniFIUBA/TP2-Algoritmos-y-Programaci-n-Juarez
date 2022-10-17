#include <iostream>
#include <string>
#include "nodos.hpp"

Animal::Animal(){
    std::string nombre = " ";
    int edad = 0;
    std::string tamaño = " ";
    char especie = ' ';
    std::string personalidad = " ";
    int hambre = 0;
    int higene = 100;
}

Animal::Animal(std::string n_nombre, int n_edad, std::string n_tamaño, char n_especie, std::string n_personalidad){
    std::string nombre = n_nombre;
    int edad = n_edad;
    std::string tamaño = n_tamaño;
    char especie = n_especie;
    std::string personalidad = n_personalidad;
    int hambre = 0;
    int higene = 100;
}

void Animal::mostrar_info(){
    std::cout<< nombre <<std::endl;
}
