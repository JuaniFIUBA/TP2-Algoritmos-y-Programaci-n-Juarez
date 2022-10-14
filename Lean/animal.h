#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
    private:
        std::string nombre;
        int edad;
        int tamanio;
        std::string especie;
        std::string personalidad;
    public:
        Animal();
        void mostrarNombre();
        void mostrarEdad();
        void Alimentar();   
        void obtenerAnimal(std::string, int, int, std::string, std::string);     
};

#endif