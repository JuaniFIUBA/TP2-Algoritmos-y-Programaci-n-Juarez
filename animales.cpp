#include <iostream>
#include <string>
#include "nodos.hpp"



Animal::Animal(){
    std::string nombre = " ";
    int edad = 0;
    std::string tamaño = " ";
    char especie = ' ';
    std::string personalidad = " ";
    int hambre = 0;
    int higene = 100;
}

Animal::Animal(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_personalidad){
    this->nombre = n_nombre;
    this->edad = n_edad;
    this->tamaño = n_tamaño;
    this->personalidad.nombre = n_personalidad;
    int hambre = 0;
    int higene = 100;
}

void Animal::mostrar_nombre_edad(){
    std::cout<< nombre << edad <<std::endl;
}

void Animal::alimentar(){
    std::cout<<""<<nombre<<" se prepara para comer"<<std::endl;
}

void Animal::ensuciar_aumentar_hambre(){
    hambre = hambre+(10*personalidad.crecimiento_hambre);
    higiene = higiene-(10*personalidad.crecimiento_suciedad);
}

void Animal::bañarse(){
    if(this->se_baña){
         std::cout<<"bañado"<<std::endl;
    }
}
