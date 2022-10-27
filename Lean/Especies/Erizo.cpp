#include "erizo.h"

Erizo::Erizo(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, especie, personalidad){
    this->tamanio = tamanio;
}

void Erizo::lavarse(){
    cout<<""<<Animal::obtener_nombre()<<", se ha bañado"<<endl;
    higiene = 100;
}

void Erizo::alimentarse(){
    cout<<"Alimentaste al "<<especie<<", "<<Animal::obtener_nombre()<<" con insectos"<<endl;
    hambre = 0;

}

void Erizo::pasar_tiempo(){
    this->hambre = hambre + (crecimiento_hambre*(personalidad->modificador_hambre()));
    this->higiene = higiene - (decrecimiento_higiene*(personalidad->modificador_higiene()));
}

Erizo::~Erizo(){
    delete personalidad;
}