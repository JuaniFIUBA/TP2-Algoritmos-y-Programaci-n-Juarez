#include "conejo.h"

Conejo::Conejo(string nombre, int edad, string tamanio, string especie,  Personalidad *personalidad) : Animal(nombre, edad, tamanio, especie, personalidad){
    this->tamanio = tamanio;
    this->personalidad->modificar_bases(crecimiento_hambre, decrecimiento_higiene)
}

void Conejo::lavarse(){
    cout<<""<<Animal::obtener_nombre()<<", se ha bañado"<<endl;
    higiene = 100;
}

void Conejo::alimentarse(){
    cout<<"Alimentaste al "<<especie<<", "<<Animal::obtener_nombre()<<" con lechuga "<<endl;
    hambre = 0;

}

void Conejo::pasar_tiempo(){
    this->hambre = hambre + crecimiento_hambre;
    this->higiene = higiene - decrecimiento_higiene;
}

Conejo::~Conejo(){
    delete personalidad;
}