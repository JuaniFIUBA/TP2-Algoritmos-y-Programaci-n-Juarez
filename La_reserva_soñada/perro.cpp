#include "perro.h"

Perro::Perro(string nombre, int edad, string tamanio, char especie, Personalidad *personalidad) : Animal(nombre, edad, tamanio, especie, personalidad){
    this->tamanio = tamanio;
    this->personalidad->modificar_bases(crecimiento_hambre, decrecimiento_higiene);
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
    this->hambre = hambre + crecimiento_hambre;
    this->higiene = higiene - decrecimiento_higiene;
}

Perro::~Perro(){
    delete personalidad;
}