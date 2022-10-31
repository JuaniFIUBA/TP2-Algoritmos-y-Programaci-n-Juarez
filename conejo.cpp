#include "conejo.hpp"

Conejo::Conejo(std::string n_nombre, int n_edad, std::string n_tamanio) : Animal(n_nombre, n_edad, n_tamanio){
    se_bania = true;
    especie = "conejo";
}

void Conejo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con lechuga"<<std::endl;
}

void Conejo::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamanio << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}

void Conejo::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
    higiene = higiene - base_higiene;
}

Conejo::~Conejo(){
    delete personalidad;
}
