#include <iostream>
#include <fstream>
#include "sistema.hpp"
#include "animales.hpp"
#include "erizo.hpp"
#include "travieso.hpp"

Sistema::Sistema(){

}

void Sistema::leer_archivo(){
    std::fstream lista_animales("animales.csv");
    if(!lista_animales.is_open()){
        std::cout<< "Error, no se encuentra el archivo"<<std::endl;
    }
    std::string nombre,edad,tamaño,especie,personalidad;
    int i = 1;
    while(getline(lista_animales, nombre,',')){
        getline(lista_animales, edad,',');
        getline(lista_animales, tamaño,',');
        getline(lista_animales, especie,',');
        getline(lista_animales, personalidad,'\n');
        definir_personalidad(personalidad,especie,i);
        i++;
    }
    lista_animales.close();
}

Animal* Sistema::obtener_especie(std::string n_especie){
    if(n_especie == "erizo"){
        Animal* n_animal = new Erizo();
        return n_animal;
    }
}

void Sistema::definir_personalidad(std::string n_personalidad,std::string n_especie, int posicion){
    if(n_personalidad == "travieso"){
        Personalidad* n_personalidad = new Travieso();
        Animal* animal = obtener_especie(n_especie);
        animal->personalidad = n_personalidad;
        this->lista.alta(animal,posicion);
    }
}



