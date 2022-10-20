#include "listaLean.h"

Lista::Lista(){
    Primero = nullptr; //La lista esta vacia.
}

void Lista::agregar(Animal_objeto *Ani){
    Primero = new Nodo(Ani, Primero);
}

void Lista::obtenerNodo(){
    Nodo *punteroAuxiliar = Primero;
    while(punteroAuxiliar != NULL){
        punteroAuxiliar->obtenerAnimal()->pasar_tiempo();
        punteroAuxiliar->obtenerAnimal()->alimentarse();
        cout<<"Mostrando hambre["<<punteroAuxiliar->obtenerAnimal()->obtener_hambre()<<"] e higiene["<<punteroAuxiliar->obtenerAnimal()->obtener_higiene()<<"]"<<endl;
        punteroAuxiliar = punteroAuxiliar->obtenerSiguiente();
    }
}