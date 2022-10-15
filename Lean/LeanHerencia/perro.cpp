#include "perro.h"

Perro::Perro(string nombre,string especie): Animal(nombre){
    this->especie = especie;
}

void Perro::lavarse(){
    cout<<"Se lava como un perro"<<endl;
}

void Perro::alimentarse(){
    cout<<"Come como un perro"<<endl;
}