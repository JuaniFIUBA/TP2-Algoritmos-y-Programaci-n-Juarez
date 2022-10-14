#include "lista.h"

Lista::Lista(){
    puntero = NULL;
}
void Lista::ingresaAnimal(Animal *_animal){
    puntero = new Nodo(_animal, puntero);
}

void Lista::mostrarAnimal(){
    Nodo *punteroAuxiliar = puntero;
    while (puntero != NULL){
        std::cout<<puntero->obtenerAnimal()->mostrarNombre()<<std::endl;
        puntero = puntero->obtenerSiguiente();    
    }
}

Lista::~Lista(){
    Nodo *punteroAuxiliar = puntero;
    Nodo *punteroAuxiliar2;
    while(punteroAuxiliar != NULL){
        punteroAuxiliar2 = punteroAuxiliar->obtenerSiguiente();
        delete punteroAuxiliar;
        punteroAuxiliar = punteroAuxiliar2;
    }
    puntero = NULL;
}