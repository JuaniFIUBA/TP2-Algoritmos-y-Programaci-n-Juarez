#ifndef CABALLO_H
#define CABALLO_H
#include "animal.h"

class Caballo : public Animal
{
    private:
        int tamanio;

    public:
        //Pre: Recibe el nombre, edad, especie, tamanio y el modificador personalidad
        //Post: Crea un objeto Caballo perteneciente a la clase "Madre" Animal.

        //Leandro.A.Peñaloza

        Caballo(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad);

        //Pre:-
        //Post: Se baña al Caballo, aumentando su higiene a 100.
        //Leandro.A.Peñaloza
        void lavarse();

        //Pre:-
        //Post: El Caballo come como corresponde, disminuyendo su hambre a 0
        //Leandro.A.Peñaloza
        void alimentarse();

        //Pre:-
        //Post: Al pasar el tiempo, el hambre y la higiene del Caballo cambiaran.
        //Leandro.A.Peñaloza
        void pasar_tiempo();

        //Pre:-
        //Post: Destruye al objeto Caballo.
        //Leandro.A.Peñaloza        
        ~Caballo();
};

#endif