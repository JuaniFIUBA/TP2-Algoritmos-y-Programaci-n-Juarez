#include "perro.h"

Perro::Perro(string nombre, string especie, string personalidad) : Animal(nombre, personalidad){
    this->especie = especie;
}

void Perro::lavarse(){
    cout<<"Se lava como un perro"<<endl;
}

void Perro::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con huesos "<<endl;
}