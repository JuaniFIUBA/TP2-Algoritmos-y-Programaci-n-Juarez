#include "gato.h"

Gato::Gato(string nombre, string especie, string personalidad) : Animal(nombre, personalidad){
    this->especie = especie;
}

void Gato::lavarse(){
    cout<<"El gato no requiere bañarse"<<endl;
}

void Gato::alimentarse(){
    Animal::alimentarse();
    cout<<"Alimentaste al "<<especie<<" con atún "<<endl;
}

void Gato::pasar_tiempo(){
    hambre = (hambre + 10*crecimiento_hambre);
}