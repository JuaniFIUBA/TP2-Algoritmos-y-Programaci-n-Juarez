#ifndef ANIMAL_H
#define ANIMAL_H

#include "personalidad.h"

class Animal
{
    private:
        string nombre;
        int edad;
    
    protected:

        float hambre;
        float higiene;
        Personalidad *personalidad;    

    public:
        Animal(string nombre, int edad, Personalidad *);
        string obtener_nombre();
        int obtener_edad();
        string mostrar_personalidad();
        
        float obtener_hambre();
        float obtener_higiene();

        virtual void pasar_tiempo(){}
        virtual void alimentarse(){}
        virtual void lavarse(){}

        virtual ~Animal();

};

#endif