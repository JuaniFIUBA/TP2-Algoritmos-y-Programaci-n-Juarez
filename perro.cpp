#include "perro.hpp"

Perro::Perro(std::string n_nombre, int n_edad, std::string n_tamanio) : Animal(n_nombre, n_edad, n_tamanio){
    se_bania = true;
    especie = "perro";
}

void Perro::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con huesos"<<std::endl;
}

void Perro::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
    higiene = higiene - base_higiene;
}

void Perro::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamanio << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}

Perro::~Perro(){
    delete personalidad;
}
