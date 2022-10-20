#include <iostream>
#include "nodos.hpp"

Nodo::Nodo(Animal* n_animal){
    animal = n_animal;
    siguiente = NULL;
}

Nodo::Nodo(Animal* n_animal, Nodo* n_siguiente){
    animal = n_animal;
    siguiente = n_siguiente;
}

void Nodo::cambiar_siguiente(Nodo* pn){
    siguiente = pn;
}

Nodo* Nodo::obtener_siguiente(){
    return siguiente;
}

Animal* Nodo::obtener_animal(){
    return animal;
}