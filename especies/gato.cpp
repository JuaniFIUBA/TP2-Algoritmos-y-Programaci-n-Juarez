#include "gato.hpp"

Gato::Gato(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    this->se_baña = false;
    this->especie = n_especie;
}

void Gato::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con atún"<<std::endl;
}

void Gato::pasar_tiempo(){
    this->hambre = hambre + 10*(personalidad->multiplicador_hambre);
}

Gato::~Gato(){
    delete personalidad;
}
