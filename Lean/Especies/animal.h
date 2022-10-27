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

    protected:

        string especie;

        float hambre;
        float higiene;
        
        Personalidad *personalidad; //Es un decorador/modificador, que cambia o modifica algunas acciones del animal.    

    public:
        //Pre: Recibe el nombre y edad del animal, además de una clase Personalidad que modifica el comportamiento.
        //Post: Crea un objeto Animal.
        //Leandro.A.Peñaloza
        Animal(string nombre, int edad, string especie, Personalidad *);

        //Pre: -
        //Post: Devuelve el nombre del animal.
        //Leandro.A.Peñaloza
        string obtener_nombre();

        //Pre:-
        //Post: Devuelve la especie del animal.
        //Leandro.A.Peñaloza
        int obtener_edad();

        //Pre:-
        //Post: Devuelve el tamanio del animal.
        //Leandro.A.Peñaloza
        string obtener_especie();

        //Pre:-
        //Post: Devuelve el tipo de personalidad del animal
        //Leandro.A.Peñaloza
        string mostrar_personalidad();
        
        //Pre:-
        //Post:Devuelve el hambre actual del animal.
        //Leandro.A.Peñaloza
        float obtener_hambre();

        //Pre:-
        //Post: Devuelve la higiene actual del animal.
        //Leandro.A.Peñaloza
        float obtener_higiene();

        //Pre:-
        //Post: Cuando el usuario interactue con el menu, la higiene y hambre de los animales cambiara con el tiempo.
        //Leandro.A.Peñaloza
        virtual void pasar_tiempo(){}

        //Pre:-
        //Post: Se alimenta al animal.
        //Leandro.A.Peñaloza
        virtual void alimentarse(){}

        //Pre:-
        //Post: Se baña al animal.
        //Leandro.A.Peñaloza
        virtual void lavarse(){}

        //Pre:
        //Post: Destruye al objeto animal, liberando el espacio.
        //Leandro.A.Peñaloza
        virtual ~Animal();

};

#endif