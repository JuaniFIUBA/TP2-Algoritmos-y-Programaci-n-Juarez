#include "roedor.hpp"

Roedor::Roedor(std::string n_nombre, int n_edad, std::string n_tamaño) : Animal(n_nombre, n_edad, n_tamaño){
    se_baña = false;
    especie = "roedor";
}

void Roedor::alimentar(){
    std::cout<<"Alimentaste al"<< especie <<"con queso"<<std::endl;
}

void Roedor::pasar_tiempo(){
    personalidad->modificar_bases(&base_higiene,&base_hambre);
    hambre = hambre - base_hambre;
}

void Roedor::mostrar_info(){
    std::cout<< nombre << " - " << edad << " - " <<tamaño << " - " << especie << " - " << personalidad->mostrar_nombre() << " - hambre:" << hambre << " - higiene:" << higiene <<std::endl;
}

Roedor::~Roedor(){
    delete personalidad;
}
