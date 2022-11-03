#ifndef LAGARTIJA_H
#define LAGARTIJA_H
#include "animales.h"

class Lagartija : public Animal
{
    public:
        //Pre: Recibe el nombre, edad, especie, tamanio y el modificador personalidad
        //Post: Crea un objeto Lagartija perteneciente a la clase "Madre" Animal.
        //Leandro.A.Peñaloza
        Lagartija(string nombre, int edad, string tamanio, char especie, Personalidad *personalidad);

        //Pre:-
        //Post: Las lagartijas no necesitan bañarse, informa al usuario de esto.
        //Leandro.A.Peñaloza
        void lavarse();

        //Pre:-
        //Post: La lagartija se alimenta como es debido, disminuye su hammbre hasta 0
        //Leandro.A.Peñaloza
        void alimentarse();

        //Pre:-
        //Post: Al pasar el tiempo, el hambre y la higiene de la Lagartija cambiaran.
        //Leandro.A.Peñaloza
        void pasar_tiempo();

        //Pre:-
        //Post: Destruye al objeto Lagartija.
        //Leandro.A.Peñaloza        
        ~Lagartija();
};

#endif