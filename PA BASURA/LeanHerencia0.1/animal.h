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
        int hambre;
        int higiene;
        int crecimiento_hambre; //Velocidad con la que crece el hambre
        int crecimiento_higiene; //Velocidad con la que ensucia la higiene

    public:
        Animal(string, string, int, int);
        
        string obtener_nombre();
        int obtener_tamanio();
        int obtener_hambre();
        int obtener_higiene();
        
        int obtener_crecimiento_hambre();
        int obtener_crecimiento_higiene();
        
        virtual void alimentarse();
        virtual void lavarse();
        virtual void pasar_tiempo();
        //~animal();
};

#endif