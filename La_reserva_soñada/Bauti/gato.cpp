#include "gato.hpp"

Gato::Gato(std::string n_nombre, int n_edad, std::string n_tamanio) : Animal(n_nombre, n_edad, n_tamanio){
    se_bania = false;
    especie = "gato";
}

void Gato::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con atún"<<std::endl;
}

void Gato::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

void Gato::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamanio << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}

Gato::~Gato(){
    delete personalidad;
}
