#ifndef DORMILON_H
#define DORMILON_H
#include "personalidad.h"

class Dormilon : public Personalidad{
    private:
        string personalidad = "Dormilon";
        float estadistica_hambre = 0.5; //Velocidad con la que crece el hambre
        float estadistica_higiene = 1; //Velocidad con la que decrece la higiene
    public:
        Dormilon();
        string mostrar_personalidad();
        float modificador_hambre(); //Modifica pasar tiempo, en este caso, el hambre aumenta la mitad
        float modificador_higiene(); //Modifica pasar tiempo, en este caso es normal.
};

#endif