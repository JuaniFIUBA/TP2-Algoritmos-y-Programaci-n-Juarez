#include "caballo.h"

Caballo::Caballo(string nombre, string especie, string personalidad, float crecimiento_hambre, float crecimiento_higiene) : Animal(nombre, personalidad, crecimiento_hambre, crecimiento_higiene){
    this->especie = especie;
}

void Caballo::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con manzanas "<<endl;
}