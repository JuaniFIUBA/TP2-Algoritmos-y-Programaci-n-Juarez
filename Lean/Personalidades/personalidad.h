#ifndef PERSONALIDAD_H
#define PERSONALIDAD_H

#include<iostream>

using namespace std;

class Personalidad
{
    public:
        //Pre:-
        //Post: Muestra la personalidad
        //Leandro.A.Peñaloza
        virtual string mostrar_personalidad() = 0;

        //Pre:-
        //Post: Devuelve el modificador de hambre
        //Leandro.A.Peñaloza
        virtual float modificador_hambre() = 0;

        //Pre:-
        //Post: Devuelve el modificador de higiene
        //Leandro.A.Peñaloza
        virtual float modificador_higiene() = 0;

        //Pre:-
        //Post: Destruye al objeto Personalidad.
        //Leandro.A.Peñaloza
        virtual ~Personalidad(){}
}; //Es un decoradaor de la clase animal

#endif