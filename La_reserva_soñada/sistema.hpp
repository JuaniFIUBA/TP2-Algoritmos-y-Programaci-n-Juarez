#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include "lista.h"
#include "sistema.hpp"
#include "animales.h"
#include "perro.h"
#include "gato.h"
#include "caballo.h"
#include "roedor.h"
#include "conejo.h"
#include "erizo.h"
#include "lagartija.h"
#include "dormilon.h"
#include "jugueton.h"
#include "sociable.h"
#include "travieso.h"
#include <iostream>
#include <string>

class Sistema{
private:
    Lista<Animal*> lista;

public:
    Sistema();
    //pre: el archivo está en formato csv correcto (ordenado) 
    //pos: crea una lista de <Animal*>
    void leer_archivo();
    //pre: -
    //pos:  Devuelva la lista.
    Lista<Animal*> obtener_lista();
    
    void alimentar(int pos);
    void baniar(int pos);
    void elegir_individualmente();
    void alimentar_todos();
    void baniar_todos();
    void actualizar_atributos();
    //pre: 
    //pos: muestra por pantalla los datos de los animales registrados
    void imprimir_lista();
    //pre: pos < cantidad_elementos (lista)
    //pos: muestra todas las características del animal en la posición <<pos>>
    void mostrar_info_animal(int pos);
    //pre: 
    //pos: devuelve el string en minuscula (no devuelve Ñ en minúsculas)
    void a_minuscula(string &cadena);
    //pre: 
    //pos: devuelve la posicion en la lista en caso de que esté, -1 en caso de que no se haya encontrado
    int esta_en_lista(string nombre); //mandarlo a menu
    //pre: 
    //pos:
    void agregar_animal(std::string personalidad, std::string nombre, int edad, std::string tamanio, char especie);
    //pre:
    //post: Muestra según el tamanio disponible los animales y una vez elegido uno de ellos lo elimina de la lista.
    void adoptar_animal();
    //pre: 
    //pos: Actualiza el archivo "animales.csv" con las modificaciones realizadas por el usuario.
    void cerrar_archivo();
    ~Sistema();


private:
    Animal* obtener_especie(std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie, Personalidad *personalidad);
    void definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie);
};






#endif