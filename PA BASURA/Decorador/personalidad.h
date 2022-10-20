#ifndef PERSONALIDAD_H
#define PERSONALIDAD_H

#include<iostream>
#include"animal.h"

using namespace std;

class Personalidad : public Animal
{
    private:
        Personalidad *personalidad_t; 

    public:
        Personalidad(string, Personalidad *);
        Personalidad *mostrar_personalidad();
        virtual void pasar_tiempo() = 0;
}; //Es un decoradaor de la clase especie

#endif