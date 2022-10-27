#ifndef TRAVIESO_H
#define TRAVIESO_H
#include "personalidad.h"

class Travieso : public Personalidad
{
    private:
        string personalidad = "Travieso";

        float estadistica_hambre = 1; //Velocidad con la que crece el hambre
        float estadistica_higiene = 2; //Velocidad con la que decrece la higiene
        
    public:
        //Pre:-
        //Post: Construye al objeto Travieso.
        //Leandro.A.Peñaloza
        Travieso();

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
        virtual ~Travieso(){};
};

#endif