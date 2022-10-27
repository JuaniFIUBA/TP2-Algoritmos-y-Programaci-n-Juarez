#ifndef GATO_H
#define GATO_H
#include "animal.h"

class Gato : public Animal
{
    private:
        int tamanio;

    public:
        //Pre: Recibe el nombre, edad, especie, tamanio y el modificador personalidad
        //Post: Crea un objeto Gato perteneciente a la clase "Madre" Animal.

        //Leandro.A.Peñaloza

        Gato(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad);

        //Pre:-
        //Post: Los gatos no necesitan bañarse, informa al usuario de esto.
        //Leandro.A.Peñaloza
        void lavarse();

        //Pre:-
        //Post: El Gato se alimenta como es debido, disminuyendo su hambre a 0
        //Leandro.A.Peñaloza
        void alimentarse();

        //Pre:-
        //Post: Al pasar el tiempo, el hambre y la higiene del Gato cambiaran.
        //Leandro.A.Peñaloza
        void pasar_tiempo();

        //Pre:-
        //Post: Destruye al objeto Gato.
        //Leandro.A.Peñaloza        
        ~Gato();
};

#endif