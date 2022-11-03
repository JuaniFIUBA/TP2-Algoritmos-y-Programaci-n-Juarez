#include "lagartija.h"

Lagartija::Lagartija(string nombre, int edad, string tamanio, char especie, Personalidad *personalidad) : Animal(nombre, edad, tamanio, especie, personalidad){
    this->personalidad->modificar_bases(crecimiento_hambre, decrecimiento_higiene);
}

string Lagartija::devolver_especie(){
    return especie_t;
}

void Lagartija::lavarse(){
    cout<<"La "<<especie<<" no quiere bañarse, las "<<especie<<"s no necesitan bañarse"<<endl;
}

void Lagartija::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con insectos "<<endl;
    hambre = 0;
}

void Lagartija::pasar_tiempo(){
    this->hambre = hambre + crecimiento_hambre;
}

Lagartija::~Lagartija(){
    delete personalidad;
}