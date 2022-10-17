#include "erizo.hpp"

Erizo::Erizo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_personalidad, std::string n_especie) : Animal(n_nombre, n_edad, n_tamaño, n_personalidad){
    this->se_baña = false;
    this->especie = n_especie;
}

void Erizo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con insectos"<<std::endl;
}
