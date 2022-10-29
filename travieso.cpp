#include "travieso.hpp"

Travieso::Travieso(std::string nombre) : Personalidad(){
    this->nombre = nombre;
    this->multiplicador_higiene = 2;
}

void Travieso::modificar_bases(float* base_higiene, float* base_hambre){
    (*base_higiene) = (*base_higiene) * this->multiplicador_higiene;
}

Travieso::~Travieso(){}
