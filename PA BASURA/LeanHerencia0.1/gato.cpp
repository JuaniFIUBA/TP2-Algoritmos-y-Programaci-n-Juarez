#include "gato.h"

Gato::Gato(string nombre, string especie, string personalidad, int crecimiento_hambre, int crecimiento_higiene) : Animal(nombre, personalidad, crecimiento_hambre, crecimiento_higiene){
    this->especie = especie;
}

void Gato::lavarse(){
    cout<<"Se lava como gato"<<endl;
}

void Gato::alimentarse(){
    cout<<"Se alimenta como gato"<<endl;
}

void Gato::pasar_tiempo(){
    hambre = (hambre + 10*crecimiento_hambre);
}