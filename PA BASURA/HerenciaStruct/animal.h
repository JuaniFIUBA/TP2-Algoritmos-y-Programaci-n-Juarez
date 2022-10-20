#ifndef ANIMAL_H
#define ANIMAL_H
#include "perro.h"
#include "dormilon.h"

#include <iostream>

using namespace std;

struct comportamiento{
    Animal *Personalidad;
    Animal *Especie;
};


class Animal{
    private:
        string nombre;
        string personalidad;
        string especie;
        int tamanio;

    protected:

        comportamiento actitudes;
        float hambre;
        float higiene;

    public:
        Animal( string , string , string, float , float);
        
        string obtener_nombre();
        int obtener_tamanio();
        float obtener_hambre();
        float obtener_higiene();
        
        comportamiento info_comportamiento();

        virtual void alimentarse();
        virtual void lavarse();
        virtual void pasar_tiempo();
        //~animal();
};

#endif