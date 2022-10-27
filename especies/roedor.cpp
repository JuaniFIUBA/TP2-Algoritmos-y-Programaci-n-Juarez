#include "roedor.hpp"

Roedor::Roedor(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    this->se_baña = false;
    this->especie = n_especie;
}

void Roedor::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con queso"<<std::endl;
}

void Roedor::pasar_tiempo(){
    this->hambre = hambre + 10*(personalidad->multiplicador_hambre);
}

Roedor::~Roedor(){
    delete personalidad;
}
