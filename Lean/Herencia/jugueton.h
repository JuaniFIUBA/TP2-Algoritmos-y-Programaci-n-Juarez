#ifndef JUGUETON_H
#define JUGUETON_H
#include "personalidad.h"

class Jugueton : public Personalidad{
    private:
        string personalidad = "Jugueton";
        float estadistica_hambre = 2; //Velocidad con la que crece el hambre
        float estadistica_higiene = 1; //Velocidad con la que decrece la higiene

    public:
        Jugueton();
        string mostrar_personalidad();
        float modificador_hambre(); //Modifica pasar tiempo, en este caso, aumenta el hambre x2
        float modificador_higiene(); //Modifica pasar tiempo, en este caso es normal.
};

#endif