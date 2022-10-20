#include "listaLean.h"
#include "nodoLean.h"
#include "perro.h"
#include "gato.h"
#include "caballo.h"
#include "lagartija.h"

//Precondicion: Recibe un string para evaluar el crecimiento.
//Postcondicion: Devuelve el crecimiento correspondiente.
float * personalidad(string personalidad){
    float static atributos_crecimiento[1];
    float crecimiento_hambre;
    float crecimiento_higiene;
    if (personalidad == "Dormilón"){
        crecimiento_hambre = 0.5; //Tienen la mitad del hambre habitual
        crecimiento_higiene = 1;
    }
    else if (personalidad == "Juguetón"){
        crecimiento_hambre = 2; //Tienen el doble del hambre habitual
    }

    else if(personalidad == "Sociable"){
        crecimiento_hambre = 1;
        crecimiento_higiene = 0.5; //Se ensucia la mitad de lo usual
    }

    else if(personalidad == "Travieso"){
        crecimiento_hambre = 1;
        crecimiento_higiene = 2; //Se ensucian el doble de rapido
    }
    atributos_crecimiento[0] = crecimiento_hambre;
    atributos_crecimiento[1] = crecimiento_higiene;
    return atributos_crecimiento;
}


int main(){
    Animal *punteroLean = new Animal("LeanPuntero" , "Jugueton" , 2 , 1 );
    Nodo *nodoCero = new Nodo();
    Nodo nodo(punteroLean, nodoCero);

//Probando NODOS

    nodo.obtenerAnimal()->alimentarse();

//Probando LISTAS
    cout<<"Probando listas"<<endl;
    Animal *PerroPuntero = new Perro("Perro", "Perro", "Dormilón", 0.5 , 1);
    Animal *CaballoPuntero = new Caballo("Caballo", "Caballo", "Jugeton", 2, 1);
    Animal *GatoPuntero = new Gato("Gato", "Gato", "Jugeton", 2, 1);
    Animal *LagartijaPuntero = new Lagartija("Lagartija", "Lagartija", "Jugeton", 2, 1);

    Lista *lista = new Lista();
    lista->agregar(PerroPuntero);
    lista->agregar(CaballoPuntero);
    lista->agregar(GatoPuntero);
    lista->agregar(LagartijaPuntero);

    lista->obtenerNodo();

//Probando el arreglo
    float * arreglo = personalidad("Dormilón");

    cout<<"El valor de personalidad en crecimiento hambre, "<<arreglo[0]<<". Y la de crecimiento higiene, "<<arreglo[1]<<""<<endl;

    delete [] punteroLean;
    delete [] nodoCero;
    
    return 0;
}