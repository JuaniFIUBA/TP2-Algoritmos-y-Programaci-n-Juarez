#ifndef ANIMAL_H
#define ANIMAL_H

#include <string.h>
#include <iostream>
class Animal
{
private:
    string nombre;
public:
    Animal(string nombre);
    // ~Animal();

    string mostrar_nombre();
};



#endif