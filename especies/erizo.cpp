#include "erizo.hpp"

Erizo::Erizo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    this->se_baña = false;
    this->especie = n_especie;
}

void Erizo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con insectos"<<std::endl;
}

void Erizo::pasar_tiempo(){
    this->hambre = hambre + 10*(personalidad->multiplicador_hambre);
    this->higiene = higiene - 10*(personalidad->multiplicador_hambre);
}

Erizo::~Erizo(){
    delete personalidad;
}
