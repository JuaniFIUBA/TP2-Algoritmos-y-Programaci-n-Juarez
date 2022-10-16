#include "perro.h"

Perro::Perro(string nombre, string especie, string personalidad, int crecimiento_hambre, int crecimiento_higiene) : Animal(nombre, personalidad, crecimiento_hambre, crecimiento_higiene){
    this->especie = especie;
}

void Perro::lavarse(){
    cout<<"Se lava como un perro"<<endl;
}

void Perro::alimentarse(){
    cout<<"Come como un perro"<<endl;
}