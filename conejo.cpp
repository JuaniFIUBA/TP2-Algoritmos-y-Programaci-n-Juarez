#include "conejo.hpp"

Conejo::Conejo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie) : Animal(){
    se_baña = true;
    especie = n_especie;
}

void Conejo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con lechuga"<<std::endl;
}

void Conejo::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
    higiene = higiene - base_higiene;
}

Conejo::~Conejo(){
    delete personalidad;
}
