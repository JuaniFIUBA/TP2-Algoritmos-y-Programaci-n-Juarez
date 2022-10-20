#include "perro.h"

Perro::Perro(string nombre, string especie, string personalidad, float crecimiento_hambre, float crecimiento_higiene) : Animal(nombre, personalidad, crecimiento_hambre, crecimiento_higiene){
    this->especie = especie;
}

void Perro::lavarse(){
    cout<<"Se lava como un perro"<<endl;
}

void Perro::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con huesos "<<endl;
}