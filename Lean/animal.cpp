#include "animal.h"


Animal::Animal()
{
    nombre = "";
    edad = 0;
    tamanio = 0;
    especie = "";
    personalidad = "";
}

void Animal::mostrarNombre(){
    std::cout<<"El nombre del animal es "<<nombre<<std::endl;
}

void Animal::mostrarEdad(){
    std::cout<<"La edad del animal es "<<edad<<std::endl;
}

void Animal::obtenerAnimal(std::string nombre, int edad, int tamanio, std::string especie, std::string personalidad){
    this->nombre = nombre;
    this->edad = edad;
    this->tamanio = tamanio;
    this->especie = especie;
    this->personalidad = personalidad;
}