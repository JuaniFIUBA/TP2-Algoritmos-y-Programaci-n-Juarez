#include "caballo.h"

Caballo::Caballo(string nombre, int edad, string tamanio, char especie, Personalidad *personalidad) : Animal(nombre, edad, tamanio, especie, personalidad){
    this->personalidad->modificar_bases(crecimiento_hambre, decrecimiento_higiene);
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
    this->hambre = hambre + crecimiento_hambre;
    this->higiene = higiene - decrecimiento_higiene;
}

Caballo::~Caballo(){
    delete personalidad;
}