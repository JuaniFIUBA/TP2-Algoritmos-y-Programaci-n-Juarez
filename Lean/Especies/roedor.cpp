#include "roedor.h"

Roedor::Roedor(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad) : Animal(nombre, edad, especie, personalidad){
    this->tamanio = tamanio;
}

void Roedor::lavarse(){
    cout<<"El "<<especie<<" se rehuso a bañarse, los "<<especie<<"s no necesitan bañarse"<<endl;
}

void Roedor::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con queso "<<endl;
    hambre = 0;
}

void Roedor::pasar_tiempo(){
    this->hambre = hambre + (crecimiento_hambre*(personalidad->modificador_hambre()));
}

Roedor::~Roedor(){
    delete personalidad;
}