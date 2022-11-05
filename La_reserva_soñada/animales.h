#ifndef ANIMAL_H
#define ANIMAL_H

#include "personalidad.h"

const int crecimiento_hambre = 10;
const int decrecimiento_higiene = 10;

class Animal
{
    private:
        string nombre;
        int edad;
        string personalidad_t;
        string tamanio;

    protected:
        char especie;
        float hambre;
        float higiene;
        float crecimiento_hambre = 10; //Cuanto aumenta el hambre al pasar el tiempo
        float decrecimiento_higiene = 10; //Cuanto decrece la higiene al pasar el tiempo
        Personalidad *personalidad; //Es un decorador/modificador, que cambia o modifica algunas acciones del animal.    

    public:
        //Pre: Recibe el nombre y edad del animal, además de una clase Personalidad que modifica el comportamiento.
        //Post: Crea un objeto Animal.
        Animal(string nombre, int edad, string tamanio, char especie, Personalidad *);

        //Pre: -
        //Post: Devuelve el nombre del animal.
        string obtener_nombre();

        //Pre:-
        //Post: Devuelve la especie del animal.
        int obtener_edad();

        //Pre:-
        //Post: Devuelve el tamanio del animal.
        char obtener_especie();

        //Pre:-
        //Post: Devuelve el tipo de personalidad del animal
        string mostrar_personalidad();
        
        //Pre:-
        //Post:Devuelve el hambre actual del animal.
        float obtener_hambre();

        //Pre:-
        //Post: Devuelve la higiene actual del animal.
        float obtener_higiene();

        //Pre:-
        //Post: Devuelve el tamanio del animal.
        string obtener_tamanio();

        //Pre:- 
        //Post: Devuelve la especie del animal completa
        virtual string devolver_especie(){return "especie";} 

        //Pre:-
        //Post: Cuando el usuario interactue con el menu, la higiene y hambre de los animales cambiara con el tiempo.
        virtual void pasar_tiempo(){}

        //Pre:-
        //Post: Se alimenta al animal.
        virtual void alimentarse(){}

        //Pre:-
        //Post: Se baña al animal.
        virtual void lavarse(){}

        //Pre:
        //Post: Destruye al objeto animal, liberando el espacio.
        virtual ~Animal();
};

#endif