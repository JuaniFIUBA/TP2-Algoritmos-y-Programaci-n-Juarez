#include "caballo.hpp"

Caballo::Caballo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    this->se_baña = true;
    this->especie = n_especie;
}

void Caballo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con manzanas"<<std::endl;
}

void Caballo::pasar_tiempo(){
    this->hambre = hambre + 10*(personalidad->multiplicador_hambre);
    this->higiene = higiene - 10*(personalidad->multiplicador_hambre);
}

Caballo::~Caballo(){
    delete personalidad;
}