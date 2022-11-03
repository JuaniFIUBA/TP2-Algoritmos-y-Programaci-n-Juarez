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
    void leer_archivo();
    void imprimir_lista();
    void mostrar_info_animal(int pos);
    int esta_en_lista(string nombre);
    void agregar_animal(std::string personalidad, std::string nombre, int edad, std::string tamanio, char especie);
    void cerrar_archivo();
    ~Sistema();

private:
    Animal* obtener_especie(std::string n_nombre, int n_edad, char n_especie, std::string n_tamanio, Personalidad *personalidad);
    void definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie);
};






#endif