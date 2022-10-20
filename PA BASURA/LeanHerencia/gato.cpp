#include "gato.h"

Gato::Gato(string nombre, string especie) : Animal(nombre){
    this->especie = especie;
}

void Gato::lavarse(){
    cout<<"Se lava como gato"<<endl;
}

void Gato::alimentarse(){
    cout<<"Se alimenta como gato"<<endl;
}