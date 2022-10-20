#ifndef GATO_H
#define GATO_H
#include "animal.h"

class Gato : public Animal{
    private:
        int tamanio;
        string especie;

    public:
        Gato(string nombre, int edad, string especie, int tamanio, Personalidad *personalidad);
        void lavarse();
        void alimentarse();
        void pasar_tiempo();
        ~Gato();
};

#endif