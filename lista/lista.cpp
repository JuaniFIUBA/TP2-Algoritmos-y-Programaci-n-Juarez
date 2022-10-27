#include "lista.hpp"

Lista::Lista() {
    primero = 0;
    cursor = primero;
}

void Lista::alta(Animal* animal, int posicion){
    Nodo* nuevo = new Nodo(animal);
    Nodo* siguiente = primero;
    if(posicion == 1){
        primero = nuevo;
    }else{
        Nodo* anterior = buscar_nodo(posicion -1);
        siguiente = anterior->obtener_siguiente();
        anterior->cambiar_siguiente(nuevo);
    }nuevo->cambiar_siguiente(siguiente);
}

Nodo* Lista::buscar_nodo(int pos){
    Nodo* auxiliar = primero;
    for(int i = 1; i < pos; i++){
        auxiliar = auxiliar->obtener_siguiente();
    }  
    return auxiliar;
}
