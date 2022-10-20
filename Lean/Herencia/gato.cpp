#include "gato.h"

Gato::Gato(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, personalidad){
    this->tamanio = tamanio;
    this->especie = especie;
}

void Gato::lavarse(){
    cout<<"El gato se rehuso a bañarse"<<endl;
}

void Gato::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con atun "<<endl;
}

void Gato::pasar_tiempo(){
    this->hambre = hambre + (10*(personalidad->modificador_hambre()));
}

Gato::~Gato(){
    delete personalidad;
}