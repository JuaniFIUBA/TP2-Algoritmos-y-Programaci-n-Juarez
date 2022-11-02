#include "animales.hpp"

Animal::Animal(){}    

Animal::Animal(std::string n_nombre, int n_edad, std::string n_tamanio){ 
    nombre = n_nombre;
    edad = n_edad;
    tamanio = n_tamanio;
    hambre = 0;
    higiene = 100;
    base_hambre = 10;
    base_higiene = 10;

}

void Animal::alimentar(){
    std::cout<<""<<nombre<<" se prepara para comer"<<std::endl;
}

void Animal::baniarse(){
    if(this->se_bania){
        std::cout<<"baniado"<<std::endl;
    }
}

std::string Animal::mostrar_nombre()
{
    return this->nombre;
}