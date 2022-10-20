#ifndef JUGUETON_H
#define JUGUETON_H
#include "personalidad.h"

class Jugueton : public Personalidad{
    private:
        string personalidad = "Jugueton";
    public:
        Jugueton()
        string obtener_personalidad();
        virtual void pasar_tiempo();
        Jugueton pasar_tiempo();
};

#endif