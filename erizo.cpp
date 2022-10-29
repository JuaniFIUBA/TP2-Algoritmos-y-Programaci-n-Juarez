#include "erizo.hpp"

Erizo::Erizo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie) : Animal(){
    se_baña = false;
    especie = n_especie;
}

void Erizo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con insectos"<<std::endl;
}

void Erizo::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

Erizo::~Erizo(){
    delete personalidad;
}
