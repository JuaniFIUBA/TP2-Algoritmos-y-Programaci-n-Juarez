#include "conejo.hpp"

Conejo::Conejo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    this->se_baña = true;
    this->especie = n_especie;
}

void Conejo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con lechuga"<<std::endl;
}

void Conejo::pasar_tiempo(){
    this->hambre = hambre + 10*(personalidad->multiplicador_hambre);
    this->higiene = higiene - 10*(personalidad->multiplicador_hambre);
}

Conejo::~Conejo(){
    delete personalidad;
}
