#include "listaLean.h"
#include "nodoLean.h"
#include "perro.h"
#include "gato.h"

int main(){
    Animal Prueba( "Lean" , "Jugueton" , 2 , 1 );
    Perro PruebaPerro("LeanPerro", "Perro", "Jugeton", 2, 1);
    Gato PruebaGato("Lean", "Gato", "Jugeton", 2 , 1);
    
    Prueba.alimentarse();
    Prueba.lavarse();
    PruebaPerro.alimentarse();
    PruebaPerro.lavarse();
    PruebaGato.alimentarse();
    PruebaGato.lavarse();
    
    Animal *punteroLean = new Animal("LeanPuntero" , "Jugueton" , 2 , 1 );
    Nodo *nodoCero = new Nodo();
    Nodo nodo(punteroLean, nodoCero);

//Probando NODOS

    nodo.obtenerAnimal()->alimentarse();

//Probando LISTAS
    cout<<"Probando listas"<<endl;
    Animal *PerroPuntero = new Perro("LeanPerro", "Perro", "Jugeton", 2, 1);
    Animal *PerroDosPuntero = new Perro("LeanPerroDos", "Perro", "Jugeton", 2, 1);
    Animal *GatoPuntero = new Gato("GatoLean", "Gato", "Jugeton", 2, 1);

    Lista *lista = new Lista();
    lista->agregar(PerroPuntero);
    lista->agregar(PerroDosPuntero);
    lista->agregar(GatoPuntero);

    lista->obtenerNodo();

    delete [] punteroLean;
    delete [] nodoCero;
    
    return 0;
}