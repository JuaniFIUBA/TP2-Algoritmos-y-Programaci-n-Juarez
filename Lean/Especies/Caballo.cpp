#include "Caballo.h"

Caballo::Caballo(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, especie, personalidad){
    this->tamanio = tamanio;
}

void Caballo::lavarse(){
    cout<<"El "<<especie<<" se ha bañado"<<endl;
    higiene = 100;
}

void Caballo::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con manzanas"<<endl;
    hambre = 0;
}

void Caballo::pasar_tiempo(){
    this->hambre = hambre + (crecimiento_hambre*(personalidad->modificador_hambre()));
    this->higiene = higiene - (decrecimiento_higiene*(personalidad->modificador_higiene()));
}

Caballo::~Caballo(){
    delete personalidad;
}