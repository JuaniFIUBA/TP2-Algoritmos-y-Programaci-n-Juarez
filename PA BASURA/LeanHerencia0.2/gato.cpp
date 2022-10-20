#include "gato.h"

Gato::Gato(string nombre, string especie, string personalidad, float crecimiento_hambre, float crecimiento_higiene) : Animal(nombre, personalidad, crecimiento_hambre, crecimiento_higiene){
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