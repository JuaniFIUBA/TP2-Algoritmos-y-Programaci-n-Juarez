#include "dormilon.hpp"

Dormilon::Dormilon(std::string nombre) : Personalidad(){
    this->nombre = nombre;
    this->multiplicador_hambre = 0.5;
}

void Dormilon::modificar_bases(float* base_higiene, float* base_hambre){
    (*base_hambre) = (*base_hambre) * this->multiplicador_hambre;
}

Dormilon::~Dormilon(){}
