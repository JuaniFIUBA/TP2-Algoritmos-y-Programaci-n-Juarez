#ifndef PERSONALIDAD_H
#define PERSONALIDAD_H

#include<iostream>

using namespace std;

class Personalidad
{
    public:
        virtual string mostrar_personalidad() = 0;
        virtual float modificador_hambre() = 0;
        virtual float modificador_higiene() = 0;
}; //Es un decoradaor de la clase animal

#endif