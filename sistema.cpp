#include <iostream>
#include <fstream>
#include "sistema.hpp"

const char PERRO = 'P';
const char GATO = 'G';
const char CABALLO = 'C';
const char ROEDOR = 'R';
const char CONEJO = 'O';
const char ERIZO = 'E';


Sistema::Sistema(){}

void Sistema::leer_archivo(){
    std::fstream lista_animales("animales.csv");
    if(!lista_animales.is_open()){
        std::cout<< "Error, no se encuentra el archivo"<<std::endl;
    }
    std::string nombre,edad,tamaño,especie,personalidad;
    int i = 0;
    while(getline(lista_animales, nombre,',')){
        getline(lista_animales, edad,',');
        getline(lista_animales, tamaño,',');
        getline(lista_animales, especie,',');
        getline(lista_animales, personalidad,'\n');
        definir_personalidad(personalidad,i,nombre,stoi(edad),tamaño,especie[0]);
        i++;
    }
    lista_animales.close();
}

void Sistema::imprimir_lista(){
    int i = 0;
    while(lista.buscar_nodo(i)->obtener_siguiente()){
        lista.buscar_nodo(i)->obtener_animal()->mostrar_info();
        i++;
    }
}

Animal* Sistema::obtener_especie(std::string n_nombre, int n_edad, std::string n_tamaño, char n_especie){
    if(n_especie == PERRO){
        Animal* n_animal = new Perro(n_nombre,n_edad,n_tamaño);
        return n_animal;
    }
    if(n_especie == GATO){
        Animal* n_animal = new Gato(n_nombre,n_edad,n_tamaño);
        return n_animal;
    }
    if(n_especie == CABALLO){
        Animal* n_animal = new Caballo(n_nombre,n_edad,n_tamaño);
        return n_animal;
    }
    if(n_especie == ROEDOR){
        Animal* n_animal = new Roedor(n_nombre,n_edad,n_tamaño);
        return n_animal;
    }
    if(n_especie == CONEJO){
        Animal* n_animal = new Conejo(n_nombre,n_edad,n_tamaño);
        return n_animal;
    }
    if(n_especie == ERIZO){
        Animal* n_animal = new Erizo(n_nombre,n_edad,n_tamaño);
        return n_animal;
    }else{
        Animal* n_animal = new Lagartija(n_nombre,n_edad,n_tamaño);
        return n_animal;    
    }
}

void Sistema::definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamaño, char n_especie){
    if(n_personalidad == "dormilon"){
        Personalidad* personalidad = new Dormilon(n_personalidad);
        Animal* animal = obtener_especie(n_nombre,n_edad,n_tamaño,n_especie);
        animal->personalidad = personalidad;
        this->lista.alta(animal,posicion);
    }
    if(n_personalidad == "jugueton"){
        Personalidad* personalidad = new Jugueton(n_personalidad);
        Animal* animal = obtener_especie(n_nombre,n_edad,n_tamaño,n_especie);
        animal->personalidad = personalidad;
        this->lista.alta(animal,posicion);
    }
    if(n_personalidad == "sociable"){
        Personalidad* personalidad = new Sociable(n_personalidad);
        Animal* animal = obtener_especie(n_nombre,n_edad,n_tamaño,n_especie);
        animal->personalidad = personalidad;
        this->lista.alta(animal,posicion);
    }
    else{
        Personalidad* personalidad = new Travieso(n_personalidad);
        Animal* animal = obtener_especie(n_nombre,n_edad,n_tamaño,n_especie);
        animal->personalidad = personalidad;
        this->lista.alta(animal,posicion);
    }
}

Sistema::~Sistema(){}



