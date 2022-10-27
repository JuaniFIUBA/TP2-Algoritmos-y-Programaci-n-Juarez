#include "conejo.h"

Conejo::Conejo(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, especie, personalidad){
    this->tamanio = tamanio;
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
    this->hambre = hambre + (crecimiento_hambre*(personalidad->modificador_hambre()));
    this->higiene = higiene - (decrecimiento_higiene*(personalidad->modificador_higiene()));
}

Conejo::~Conejo(){
    delete personalidad;
}