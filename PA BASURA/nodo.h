#ifndef NODO_H
#define NODO_H
#include "animal.h"

class Nodo
{
    private:
        Animal *animal;
        Nodo *siguiente
    public:
        Nodo(); //Constructor
        Nodo(Animal *, Nodo *);
        void obtenerAnimal(Animal *);
        void obtenerSiguiente(Nodo *);
        Nodo *obtenerSiguiente(); //Para que retorne el siguiente puntero
        Animal *(); //Retorna un puntero de Animal
        ~Nodo(); //Destructor
};

#endif