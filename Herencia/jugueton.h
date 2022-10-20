#ifndef JUGUETON_H
#define JUGUETON_H
#include "personalidad.h"

class Jugueton : public Personalidad{
    private:
        string personalidad = "Jugueton";
        float modificadorHambre = 2; //Velocidad con la que crece el hambre
    public:
        Jugueton();
        string mostrar_personalidad();
        float modificador(); //Modifica pasar tiempo, en este caso, aumenta el hambre x2
};

#endif