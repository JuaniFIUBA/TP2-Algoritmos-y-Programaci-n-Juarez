#ifndef NODOS_HPP
#define NODOS_HPP

#include <iostream>
#include "animales.hpp"

class Nodo{
private:
    Animal* animal;
    Nodo* siguiente;
public:
    Nodo(Animal* n_animal);
    Nodo(Animal* n_animal, Nodo* n_siguiente);
    void cambiar_siguiente(Nodo* pn);
    Nodo* obtener_siguiente();
    Animal* obtener_animal();
    ~Nodo();
};

#endif