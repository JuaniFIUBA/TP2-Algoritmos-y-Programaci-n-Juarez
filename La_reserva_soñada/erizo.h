#ifndef ERIZO_H
#define ERIZO_H
#include "animales.h"

class Erizo : public Animal
{
    public:
        //Pre: Recibe el nombre, edad, especie, tamanio y el modificador personalidad
        //Post: Crea un objeto Erizo perteneciente a la clase "Madre" Animal.
        //Leandro.A.Peñaloza
        Erizo(string nombre, int edad, string tamanio, string especie, Personalidad *personalidad);

        //Pre:-
        //Post: Se baña al Erizo, aumentando su higiene a 100.
        //Leandro.A.Peñaloza
        void lavarse();

        //Pre:-
        //Post: El Erizo come como corresponde, bajando su hambre a 0.
        //Leandro.A.Peñaloza
        void alimentarse();

        //Pre:-
        //Post: Al pasar el tiempo, el hambre y la higiene del Erizo cambiaran.
        //Leandro.A.Peñaloza
        void pasar_tiempo();

        //Pre:-
        //Post: Destruye al objeto Erizo.
        //Leandro.A.Peñaloza        
        ~Erizo();
};

#endif