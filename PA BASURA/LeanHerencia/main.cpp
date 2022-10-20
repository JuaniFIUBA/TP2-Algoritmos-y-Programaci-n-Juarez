#include "listaLean.h"
#include "nodoLean.h"
#include "perro.h"
#include "gato.h"

int main(){
    Animal Prueba("Lean");
    Perro PruebaPerro("Lean", "Perro");
    Gato PruebaGato("Lean", "Gato");
    
    Prueba.alimentarse();
    Prueba.lavarse();
    PruebaPerro.alimentarse();
    PruebaPerro.lavarse();
    PruebaGato.alimentarse();
    PruebaGato.lavarse();
    
    Animal *punteroLean = new Animal("LEANPUNTERO");
    Nodo *nodoCero = new Nodo();
    Nodo nodo(punteroLean, nodoCero);

//Probando NODOS

    nodo.obtenerAnimal()->alimentarse();

//Probando LISTAS
    cout<<"Probando listas"<<endl;
    Animal *PerroPuntero = new Perro("Lean", "Perro");
    Animal *PerroDosPuntero = new Perro("LeanDos", "Perro");
    Animal *GatoPuntero = new Gato("GatoLean", "Gato");

    Lista *lista = new Lista();
    lista->agregar(PerroPuntero);
    lista->agregar(PerroDosPuntero);
    lista->agregar(GatoPuntero);

    lista->obtenerNodo();

    delete [] punteroLean;
    delete [] nodoCero;
    
    return 0;
}