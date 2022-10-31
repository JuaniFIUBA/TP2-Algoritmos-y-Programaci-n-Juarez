#include "nodo.h"
#include "Animal.h"


Animal::Animal(string nombre)
{
    this -> nombre = nombre;
}

string Animal::mostrar_nombre()
{
    return this -> nombre;
}


