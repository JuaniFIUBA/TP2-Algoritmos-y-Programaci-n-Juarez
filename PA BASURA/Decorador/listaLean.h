#ifndef LISTALEAN_H
#define LISTALEAN_H
#include "nodoLean.h"

class Lista
{
    private:
        Nodo *Primero;
    public:
        Lista();
        void agregar(Animal_objeto *);
        void obtenerNodo();
};

#endif