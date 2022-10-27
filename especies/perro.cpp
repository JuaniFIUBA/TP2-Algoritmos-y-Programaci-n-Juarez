#include "perro.hpp"

Perro::Perro(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    this->se_baña = true;
    this->especie = n_especie;
}

void Perro::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con huesos"<<std::endl;
}

void Perro::pasar_tiempo(){
    this->hambre = hambre + 10*(personalidad->multiplicador_hambre);
    this->higiene = higiene - 10*(personalidad->multiplicador_hambre);
}

Perro::~Perro(){
    delete personalidad;
}
