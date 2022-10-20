#ifndef NODOLEAN_H
#define NODOLEAN_H
#include "animal.h"

class Nodo{
    private:
        Animal *Ani;
        Nodo *Sig;
    public:
        Nodo();
        Nodo(Animal*, Nodo *);
        void establecerAnimal(Animal *);
        Animal *obtenerAnimal();
        void establecerSiguiente(Nodo *);
        Nodo *obtenerSiguiente();
};

#endif