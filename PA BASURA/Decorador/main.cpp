#include "listaLean.h"
#include "nodoLean.h"
#include "perro.h"
#include "jugueton.h"


//Precondicion: Recibe un string para evaluar el crecimiento.
//Postcondicion: Devuelve el crecimiento correspondiente.

int main(){
    Personalidad *punteroPersonalidad = new Jugueton();

    Animal *perro_puntero = new Perro("LeanPuntero", 5, "Perro", 10, punteroPersonalidad);

    Nodo *nodoCero = new Nodo();
    Nodo nodo(perro_puntero, nodoCero);

//Probando NODOS

    nodo.obtenerAnimal()->alimentarse();

//Probando LISTAS
    cout<<"Probando listas"<<endl;
    Animal *perro_puntero_dos = new Perro("Dog", 5, "Perro", 10, punteroPersonalidad);
    Lista *lista = new Lista();
    lista->agregar(perro_puntero_dos);

    lista->obtenerNodo();


    delete [] perro_puntero_dos;
    delete [] perro_puntero;
    delete [] nodoCero;
    
    return 0;
}