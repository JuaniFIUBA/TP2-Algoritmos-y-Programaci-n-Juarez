#include "roedor.hpp"

Roedor::Roedor(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie) : Animal(){
    se_baña = false;
    especie = n_especie;
}

void Roedor::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con queso"<<std::endl;
}

void Roedor::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

Roedor::~Roedor(){
    delete personalidad;
}
