#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include "lista.h"
#include "sistema.hpp"
#include "animales.hpp"
#include "perro.hpp"
#include "gato.hpp"
#include "caballo.hpp"
#include "roedor.hpp"
#include "conejo.hpp"
#include "erizo.hpp"
#include "lagartija.hpp"
#include "dormilon.hpp"
#include "jugueton.hpp"
#include "sociable.hpp"
#include "travieso.hpp"
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
    ~Sistema();

private:
    Animal* obtener_especie(std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie);
    void definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie);
};






#endif