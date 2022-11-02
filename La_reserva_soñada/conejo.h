#ifndef CONEJO_H
#define CONEJO_H
#include "animales.h"

class Conejo : public Animal
{
    private:
        int tamanio;

    public:
        //Pre: Recibe el nombre, edad, especie, tamanio y el modificador personalidad
        //Post: Crea un objeto Conejo perteneciente a la clase "Madre" Animal.
        //Leandro.A.Peñaloza
        Conejo(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad);
        
        //Pre:-
        //Post: El Conejo se bañara, aumentando su higiene a 100.
        //Leandro.A.Peñaloza
        void lavarse();
        
        //Pre:-
        //Post: El Conejo se alimentara como uno, disminuyendo su hambre a 0.
        //Leandro.A.Peñaloza
        void alimentarse();

        //Pre:-
        //Post: Al pasar el tiempo, el hambre y la higiene del Conejo cambiaran.
        //Leandro.A.Peñaloza
        void pasar_tiempo();

        //Pre:-
        //Post: Destruye al objeto Conejo.
        //Leandro.A.Peñaloza
        ~Conejo();
};

#endif