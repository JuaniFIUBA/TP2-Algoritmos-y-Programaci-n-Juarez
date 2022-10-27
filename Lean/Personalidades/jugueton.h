#ifndef JUGUETON_H
#define JUGUETON_H
#include "personalidad.h"

class Jugueton : public Personalidad
{
    private:
        string personalidad = "Jugueton";
        
        float estadistica_hambre = 2; //Velocidad con la que crece el hambre
        float estadistica_higiene = 1; //Velocidad con la que decrece la higiene

    public:
        //Pre:-
        //Post: Construye al objeto Jugueton.
        //Leandro.A.Peñaloza
        Jugueton();

        //Pre:-
        //Post: Muestra la personalidad.
        //Leandro.A.Peñaloza
        string mostrar_personalidad();

        //Pre:-
        //Post: Devuelve el modificador hambre.
        //Leandro.A.Peñaloza
        float modificador_hambre(); //Modifica pasar tiempo, en este caso, aumenta el hambre x2
        
        //Pre:-
        //Post Devuelve el modificador higiene.
        //Leandro.A.Peñaloza
        float modificador_higiene(); //Modifica pasar tiempo, en este caso es normal.
        
        //Pre:-
        //Post: Destruye al objeto Jugueton.
        virtual ~Jugueton(){};
};

#endif