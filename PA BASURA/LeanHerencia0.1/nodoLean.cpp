#include "nodoLean.h"

Nodo::Nodo(){
    this->Ani = 0;
    this->Sig = 0;
} //Es el nodo 0, el primer nodo para probar el programa

Nodo::Nodo(Animal *Ani, Nodo *Sig){
    this->Ani = Ani;
    this->Sig = Sig;
}

void Nodo::establecerAnimal(Animal *Ani){
    this->Ani = Ani;
}

Animal *Nodo::obtenerAnimal(){
    return Ani;
}
void Nodo::establecerSiguiente(Nodo *Sig){
    this->Sig = Sig;
}

Nodo *Nodo::obtenerSiguiente(){
    return Sig;
}