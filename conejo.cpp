#include "conejo.hpp"

Conejo::Conejo(std::string n_nombre, int n_edad, std::string n_tamaño) : Animal(n_nombre, n_edad, n_tamaño){
    se_baña = true;
    especie = "conejo";
}

void Conejo::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con lechuga"<<std::endl;
}

void Conejo::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamaño << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}

void Conejo::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
    higiene = higiene - base_higiene;
}

Conejo::~Conejo(){
    delete personalidad;
}
