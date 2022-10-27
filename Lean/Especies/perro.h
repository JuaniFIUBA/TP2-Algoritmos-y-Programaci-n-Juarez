#ifndef PERRO_H
#define PERRO_H
#include "animal.h"

class Perro : public Animal
{
    private:
        int tamanio;

    public:
        //Pre: Recibe el nombre, edad, especie, tamanio y el modificador personalidad
        //Post: Crea un objeto Perro perteneciente a la clase "Madre" Animal.
        //Leandro.A.Peñaloza
        Perro(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad);
        
        //Pre:-
        //Post: El Perro se bañara, aumentando su higiene a 100.
        //Leandro.A.Peñaloza
        void lavarse();
        
        //Pre:-
        //Post: El perro se alimentara como uno. Disminuyendo su hambre a 0.
        //Leandro.A.Peñaloza
        void alimentarse();

        //Pre:-
        //Post: Al pasar el tiempo, el hambre y la higiene del Perro cambiaran.
        //Leandro.A.Peñaloza
        void pasar_tiempo();

        //Pre:-
        //Post: Destruye al objeto Perro.
        //Leandro.A.Peñaloza
        ~Perro();
};

#endif