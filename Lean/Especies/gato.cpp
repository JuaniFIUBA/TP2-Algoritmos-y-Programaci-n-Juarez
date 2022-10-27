#include "gato.h"

Gato::Gato(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, especie, personalidad){
    this->tamanio = tamanio;
}

void Gato::lavarse(){
    cout<<"El "<<especie<<" se rehuso a bañarse, los "<<especie<<"s no necesitan bañarse"<<endl;
}

void Gato::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con atun "<<endl;
    hambre = 0;
}

void Gato::pasar_tiempo(){
    this->hambre = hambre + (crecimiento_hambre*(personalidad->modificador_hambre()));
}

Gato::~Gato(){
    delete personalidad;
}