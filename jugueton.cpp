#include "jugueton.hpp"

Jugueton::Jugueton(std::string nombre) : Personalidad(){
    this->nombre = nombre;
    this->multiplicador_hambre = 2;
}

void Jugueton::modificar_bases(float* base_higiene, float* base_hambre){
    (*base_hambre) = (*base_hambre) * this->multiplicador_hambre;
}

std::string Jugueton::mostrar_nombre(){
    return nombre;
}

Jugueton::~Jugueton(){}
