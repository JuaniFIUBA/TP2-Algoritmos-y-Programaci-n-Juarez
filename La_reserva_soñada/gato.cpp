#include "gato.h"

Gato::Gato(string nombre, int edad, string tamanio, char especie, Personalidad *personalidad) : Animal(nombre, edad, tamanio, especie, personalidad){
    this->personalidad->modificar_bases(crecimiento_hambre, decrecimiento_higiene);
}

string Gato::devolver_especie(){
    return especie_t;
}

void Gato::lavarse(){
    cout<<"El "<<especie<<" se rehuso a bañarse, los "<<especie<<"s no necesitan bañarse"<<endl;
}

void Gato::alimentarse(){
    cout<<"Alimentaste al "<<especie<<" con atun "<<endl;
    hambre = 0;
}

void Gato::pasar_tiempo(){
    this->hambre = hambre + crecimiento_hambre;
}

Gato::~Gato(){
    delete personalidad;
}