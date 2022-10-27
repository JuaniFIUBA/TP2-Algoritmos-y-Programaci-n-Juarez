#include "perro.h"

Perro::Perro(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, especie, personalidad){
    this->tamanio = tamanio;
}

void Perro::lavarse(){
    cout<<""<<Animal::obtener_nombre()<<", se ha bañado"<<endl;
    higiene = 100;
}

void Perro::alimentarse(){
    cout<<"Alimentaste al "<<especie<<", "<<Animal::obtener_nombre()<<" con huesos "<<endl;
    hambre = 0;

}

void Perro::pasar_tiempo(){
    this->hambre = hambre + (crecimiento_hambre*(personalidad->modificador_hambre()));
    this->higiene = higiene - (decrecimiento_higiene*(personalidad->modificador_higiene()));
}

Perro::~Perro(){
    delete personalidad;
}