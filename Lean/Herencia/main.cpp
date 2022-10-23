#include "lista.h"
#include "perro.h"
#include "jugueton.h"
#include "dormilon.h"
#include "gato.h"


//Precondicion: Recibe un string para evaluar el crecimiento.
//Postcondicion: Devuelve el crecimiento correspondiente.

int main(){
    Personalidad *punteroPersonalidad = new Jugueton();
    Personalidad *punteroPersonalidadDos = new Dormilon();

    // Animal *perro_puntero = new Perro("LeanPuntero", 5, "Perro", 10, punteroPersonalidad);

    // Nodo *nodoCero = new Nodo();
    // Nodo nodo(perro_puntero, nodoCero);

//Probando NODOS
    //cout<<"Probando el nodo"<<endl;
    //nodo.obtenerAnimal()->alimentarse();
    //perro_puntero->~Animal();

//Probando LISTAS
    cout<<"Probando listas"<<endl;
    Animal *perro_puntero_dos = new Perro("Dog", 5, "Perro", 10, punteroPersonalidad);
    Animal *gato_puntero = new Gato("Gato", 5, "Gato", 10, punteroPersonalidadDos);
    Lista<Animal*> lista;

    lista.agregar(perro_puntero_dos, 0);
    lista.agregar(gato_puntero, 1);

    delete perro_puntero_dos;
    delete gato_puntero;
    
    return 0;
}