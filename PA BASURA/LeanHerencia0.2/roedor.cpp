#include "roedor.h"

Roedor::Roedor(string nombre, string especie, string personalidad, float crecimiento_hambre, float crecimiento_higiene) : Animal(nombre, personalidad, crecimiento_hambre, crecimiento_higiene){
    this->especie = especie;
}

void Roedor::lavarse(){
    cout<<"La lagartija no requiere baño"<<endl;
}

void Roedor::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con atún "<<endl;
}

void Roedor::pasar_tiempo(){
    hambre = (hambre + 10*crecimiento_hambre);
}