#ifndef DORMILON_H
#define DORMILON_H
#include "personalidad.h"

class Dormilon : public Personalidad
{
    private:
        string personalidad = "Dormilon";

        float estadistica_hambre = 0.5; //Velocidad con la que crece el hambre
        float estadistica_higiene = 1; //Velocidad con la que decrece la higiene
    
    public:
        //Pre:-
        //Post: Crea el objeto Dormilon
        //Leandro.A.Peñaloza
        Dormilon();

        //Pre:-
        //Post: Muestra la personalidad.
        //Leandro.A.Peñaloza
        string mostrar_personalidad();

        //Pre:-
        //Post: Devuelve el modificador hambre.
        //Leandro.A.Peñaloza
        float modificador_hambre(); //Modifica pasar tiempo, en este caso, el hambre aumenta la mitad
        
        //Pre:-
        //Post: Devuelve el modificador higiene.
        //Leandro.A.Peñaloza
        float modificador_higiene(); //Modifica pasar tiempo, en este caso es normal.

        //Pre:-
        //Post: Destruye al dormilon.
        virtual ~Dormilon(){}
};

#endif