#include "caballo.hpp"

Caballo::Caballo(std::string n_nombre, int n_edad, std::string n_tamanio) : Animal(n_nombre, n_edad, n_tamanio){
    se_bania = true;
    especie = "caballo";
}

void Caballo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con manzanas"<<std::endl;
}

void Caballo::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamanio << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}

void Caballo::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
    higiene = higiene - base_higiene;
}

Caballo::~Caballo(){
    delete personalidad;
}