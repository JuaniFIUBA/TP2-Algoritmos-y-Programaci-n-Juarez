#ifndef PERRO_H
#define PERRO_H
#include "animal.h"

class Perro : public Animal{
    private:
        int tamanio;
        string especie;

    public:
        Perro(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad);
        void lavarse();
        void alimentarse();
        void pasar_tiempo();
};

#endif