#include "caballo.hpp"

Caballo::Caballo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie) : Animal(){
    se_baña = true;
    especie = n_especie;
}

void Caballo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con manzanas"<<std::endl;
}

void Caballo::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
    higiene = higiene - base_higiene;
}

Caballo::~Caballo(){
    delete personalidad;
}