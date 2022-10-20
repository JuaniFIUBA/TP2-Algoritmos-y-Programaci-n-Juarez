#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista
{
    private:
        Nodo *puntero;
    public:
        Lista();
        void ingresaAnimal(Animal *);
        void mostrarAnimal()
        ~Lista();
}

#endif