#include "lagartija.hpp"

Lagartija::Lagartija(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie) : Animal(){
    se_baña = false;
    especie = n_especie;
}

void Lagartija::alimentar(){
    std::cout<<"Alimentaste la"<< especie <<"con insectos"<<std::endl;
}

void Lagartija::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

Lagartija::~Lagartija(){
    delete personalidad;
}
