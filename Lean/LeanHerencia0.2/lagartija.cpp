#include "lagartija.h"

Lagartija::Lagartija(string nombre, string especie, string personalidad, float crecimiento_hambre, float crecimiento_higiene) : Animal(nombre, personalidad, crecimiento_hambre, crecimiento_higiene){
    this->especie = especie;
}

void Lagartija::lavarse(){
    cout<<"La lagartija no requiere baño"<<endl;
}

void Lagartija::alimentarse(){
    cout<<"Alimentaste a la "<<especie<<" con atún "<<endl;
}

void Lagartija::pasar_tiempo(){
    hambre = (hambre + 10*crecimiento_hambre);
}