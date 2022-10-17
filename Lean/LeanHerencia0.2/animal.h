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
        float crecimiento_hambre; //Velocidad con la que crece el hambre
        float crecimiento_higiene; //Velocidad con la que ensucia la higiene

    public:
        Animal( string , string , float , float);
        
        string obtener_nombre();
        int obtener_tamanio();
        float obtener_hambre();
        float obtener_higiene();
        
        float obtener_crecimiento_hambre();
        float obtener_crecimiento_higiene();
        
        virtual void alimentarse();
        virtual void lavarse();
        virtual void pasar_tiempo();
        //~animal();
};

#endif