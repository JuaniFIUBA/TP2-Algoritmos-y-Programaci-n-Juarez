#include "erizo.h"

Erizo::Erizo(string nombre, int edad, string tamanio, char especie, Personalidad *personalidad) : Animal(nombre, edad, tamanio, especie, personalidad){
    this->personalidad->modificar_bases(crecimiento_hambre, decrecimiento_higiene);
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
    this->hambre = hambre + crecimiento_hambre;
    this->higiene = higiene - decrecimiento_higiene;
}

Erizo::~Erizo(){
    delete personalidad;
}