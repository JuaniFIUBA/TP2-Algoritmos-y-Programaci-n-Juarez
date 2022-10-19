#include "animales.hpp"

Animal::Animal(){
    
}

Animal::Animal(std::string n_nombre, int n_edad, std::string n_tamaño){
    this->nombre = n_nombre;
    this->edad = n_edad;
    this->tamaño = n_tamaño;
    hambre = 0;
    higiene = 100;
}

void Animal::mostrar_nombre_edad(){
    std::cout<< nombre << edad <<std::endl;
}

void Animal::alimentar(){
    std::cout<<""<<nombre<<" se prepara para comer"<<std::endl;
}
/*
void Animal::ensuciar_aumentar_hambre(){
    hambre = hambre+(10*personalidad.crecimiento_hambre);
    higiene = higiene-(10*personalidad.crecimiento_suciedad);
}
*/
void Animal::bañarse(){
    if(this->se_baña){
         std::cout<<"bañado"<<std::endl;
    }
}
