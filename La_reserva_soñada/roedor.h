#ifndef ROEDOR_H
#define ROEDOR_H
#include "animales.h"

class Roedor : public Animal
{
    public:
        //Pre: Recibe el nombre, edad, especie, tamanio y el modificador personalidad
        //Post: Crea un objeto Roedor perteneciente a la clase "Madre" Animal.

        //Leandro.A.Peñaloza

        Roedor(string nombre, int edad, string tamanio, char especie, Personalidad *personalidad);

        //Pre:-
        //Post: Los roedores no necesitan bañarse, informa al usuario de esto.
        //Leandro.A.Peñaloza
        void lavarse();

        //Pre:-
        //Post: El Roedor se alimenta como es debido. disminuyendo su hambre a 0.
        //Leandro.A.Peñaloza
        void alimentarse();

        //Pre:-
        //Post: Al pasar el tiempo, el hambre y la higiene del Roedor cambiaran.
        //Leandro.A.Peñaloza
        void pasar_tiempo();

        //Pre:-
        //Post: Destruye al objeto Roedor.
        //Leandro.A.Peñaloza        
        ~Roedor();
};

#endif