#include "animales.hpp"

Animal::Animal(){}    

Animal::Animal(std::string n_nombre, int n_edad, std::string n_tamaño){
    nombre = n_nombre;
    edad = n_edad;
    tamaño = n_tamaño;
    hambre = 0;
    higiene = 100;
    base_hambre = 10;
    base_higiene = 10;
}

void Animal::mostrar_nombre_edad(){
    std::cout<< nombre << edad <<std::endl;
}

void Animal::alimentar(){
    std::cout<<""<<nombre<<" se prepara para comer"<<std::endl;
}

void Animal::bañarse(){
    if(this->se_baña){
        std::cout<<"bañado"<<std::endl;
    }
}
