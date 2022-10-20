#include "perro.h"

Perro::Perro(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, personalidad){
    this->tamanio = tamanio;
    this->especie = especie;
}

void Perro::lavarse(){
    cout<<"Se lava como un perro"<<endl;
}

void Perro::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con huesos "<<endl;
}

void Perro::pasar_tiempo(){
    this->hambre = hambre + (10*(personalidad->modificador_hambre()));
    this->higiene = higiene - (10*(personalidad->modificador_higiene()));
}

Perro::~Perro(){
    delete personalidad;
}