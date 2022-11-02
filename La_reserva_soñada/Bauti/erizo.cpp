#include "erizo.hpp"

Erizo::Erizo(std::string n_nombre, int n_edad, std::string n_tamanio) : Animal(n_nombre, n_edad, n_tamanio){
    se_bania = false;
    especie = "erizo";
}

void Erizo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con insectos"<<std::endl;
}

void Erizo::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

void Erizo::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamanio << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}


Erizo::~Erizo(){
    delete personalidad;
}
