#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include "lista.hpp"
#include <iostream>
#include <string>

class Sistema{
private:
    Lista lista;

public:
    Sistema();
    void leer_archivo();

private:
    Animal* obtener_especie(std::string n_especie);
    void definir_personalidad(std::string n_personalidad,std::string n_especie, int posicion);
};






#endif