#include "lagartija.hpp"

Lagartija::Lagartija(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    this->se_baña = false;
    this->especie = n_especie;
}

void Lagartija::alimentar(){
    std::cout<<"Alimentaste la"<< especie <<"con insectos"<<std::endl;
}

void Lagartija::pasar_tiempo(){
    this->hambre = hambre + 10*(personalidad->multiplicador_hambre);
}

Lagartija::~Lagartija(){
    delete personalidad;
}
