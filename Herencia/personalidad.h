#ifndef PERSONALIDAD_H
#define PERSONALIDAD_H

#include<iostream>

using namespace std;

class Personalidad
{
    public:
        virtual string mostrar_personalidad() = 0;
        virtual float modificador() = 0;
}; //Es un decoradaor de la clase animal

#endif