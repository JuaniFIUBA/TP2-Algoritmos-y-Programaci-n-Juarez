#include "nodo.h"


Nodo::Nodo(){
    animal = NULL;
    siguiente = NULL;

} //Constructor

Nodo::Nodo(Animal *_animal, Nodo *_siguiente){
    animal = _animal;
    siguiente = _siguiente
}

void Nodo::obtenerAnimal(Animal * _animal){
    animal = _animal;
}

void Nodo::obtenerSiguiente(Nodo * _siguiente){
    siguiente = _siguiente
}

Nodo *Nodo::obtenerSiguiente(){
    return siguiente;
} //Para que retorne el siguiente puntero
Animal *Nodo::obtenerAnimal(){
    return animal;
} //Retorna un puntero de Animal

Nodo::~Nodo(){
    
} //Destructor