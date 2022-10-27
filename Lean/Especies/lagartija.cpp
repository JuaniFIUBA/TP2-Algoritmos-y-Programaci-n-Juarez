#include "lagartija.h"

Lagartija::Lagartija(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, especie, personalidad){
    this->tamanio = tamanio;
}

void Lagartija::lavarse(){
    cout<<"La "<<especie<<" no quiere bañarse, las "<<especie<<"s no necesitan bañarse"<<endl;
}

void Lagartija::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con insectos "<<endl;
    hambre = 0;
}

void Lagartija::pasar_tiempo(){
    this->hambre = hambre + (crecimiento_hambre*(personalidad->modificador_hambre()));
}

Lagartija::~Lagartija(){
    delete personalidad;
}