#include "lagartija.hpp"

Lagartija::Lagartija(std::string n_nombre, int n_edad, std::string n_tamanio) : Animal(n_nombre, n_edad, n_tamanio){
    se_bania = false;
    especie = "lagartija";
}

void Lagartija::alimentar(){
    std::cout<<"Alimentaste la"<< especie <<"con insectos"<<std::endl;
}

void Lagartija::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

void Lagartija::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamanio << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}

Lagartija::~Lagartija(){
    delete personalidad;
}
