#include "gato.hpp"

Gato::Gato(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie) : Animal(){
    se_baña = false;
    especie = n_especie;
}

void Gato::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con atún"<<std::endl;
}

void Gato::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

Gato::~Gato(){
    delete personalidad;
}
