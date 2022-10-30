#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include "lista.hpp"
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
    Lista lista;

public:
    Sistema();
    void leer_archivo();
    void imprimir_lista();
    ~Sistema();

private:
    Animal* obtener_especie(std::string n_nombre, int n_edad, std::string n_tamaño, char n_especie);
    void definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamaño, char n_especie);
};






#endif