#include "sociable.hpp"

Sociable::Sociable(std::string nombre) : Personalidad(){
    this->nombre = nombre;
    this->multiplicador_higiene = 0.5;
}

void Sociable::modificar_bases(float* base_higiene, float* base_hambre){
    (*base_higiene) = (*base_higiene) * this->multiplicador_higiene;
}

std::string Sociable::mostrar_nombre(){
    return nombre;
}

Sociable::~Sociable(){}
