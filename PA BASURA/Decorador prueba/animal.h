#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal{
    private:
        string nombre;
        string personalidad;
        int tamanio;

    protected:

        float hambre;
        float higiene;

    public:
        Animal( string , string );
        
        string obtener_nombre();
        int obtener_tamanio();
        float obtener_hambre();
        float obtener_higiene();
        
        float obtener_crecimiento_hambre();
        float obtener_crecimiento_higiene();
        
        virtual void alimentarse();
        virtual void lavarse();
        virtual void pasar_tiempo() = 0;
        //~animal();
};

#endif