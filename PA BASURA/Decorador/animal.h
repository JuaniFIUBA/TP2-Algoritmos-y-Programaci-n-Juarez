#ifndef ANIMAL_H
#define ANIMAL_H

#include "personalidad.h"

class Animal
{
    private:
        string nombre;
        int edad;
        Personalidad *personalidad;    
    
    protected:
        float hambre;
        float higiene;
    
    public:
        Animal( string nombre, int edad, Personalidad *personalidad);
        string obtener_nombre();
        float obtener_hambre();
        float obtener_higiene();
        virtual void pasar_tiempo();
        virtual void alimentarse();
        virtual void lavarse();
};

#endif