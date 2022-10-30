#ifndef LISTA_H
#define LISTA_H

#include "nodos.hpp"
#include "animales.hpp"

class Lista {
    private:
        Nodo* primero;
        Nodo* cursor;
        int cantidad_elementos;
    public:
        //constructor
        Lista();


        //pre:
        //pos: agrega un nodo en la posicion <<pos>> con pos >= 0
        void alta(Animal* animal, int posicion);

        //pre:
        //pos: borra el nodo de la posicion <<pos>>, con pos >= 0;
        void baja(int pos);

        //pre:
        //pos: devuelve el dato almacenado en pos, con pos < cantidad_elementos
        Animal* consulta(int pos);

        Nodo* buscar_nodo(int posicion);

        //destructor
        ~Lista();
    private:
        bool es_vacia();
        
};


#endif