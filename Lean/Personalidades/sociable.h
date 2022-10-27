#ifndef SOCIABLE_H
#define SOCIABLE_H
#include "personalidad.h"

class Sociable : public Personalidad
{
    private:
        string personalidad = "Sociable";

        float estadistica_hambre = 1; //Velocidad con la que crece el hambre
        float estadistica_higiene = 0.5; //Velocidad con la que decrece la higiene

    public:
        //Pre:-
        //Post: Construye al objeto Sociable.
        //Leandro.A.Peñaloza
        Sociable();

        //Pre:-
        //Post: Muestra la personalidad.
        //Leandro.A.Peñaloza
        string mostrar_personalidad();

        //Pre:-
        //Post: Devuelve el modificador hambre.
        //Leandro.A.Peñaloza
        float modificador_hambre();
        
        //Pre:-
        //Post Devuelve el modificador higiene.
        //Leandro.A.Peñaloza
        float modificador_higiene();
        
        //Pre:-
        //Post: Destruye al objeto Jugueton.
        virtual ~Sociable(){};
};

#endif