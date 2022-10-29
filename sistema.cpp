#include <iostream>
#include <fstream>
#include "sistema.hpp"

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
        definir_personalidad(personalidad,i,nombre,stoi(edad),tamaño,especie);
        i++;
    }
    lista_animales.close();
}

Animal* Sistema::obtener_especie(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
    if(n_especie == "perro"){
        Animal* n_animal = new Perro(n_nombre,n_edad,n_tamaño,n_especie);
        return n_animal;
    }
    if(n_especie == "gato"){
        Animal* n_animal = new Gato(n_nombre,n_edad,n_tamaño,n_especie);
        return n_animal;
    }
    if(n_especie == "caballo"){
        Animal* n_animal = new Caballo(n_nombre,n_edad,n_tamaño,n_especie);
        return n_animal;
    }
    if(n_especie == "roedor"){
        Animal* n_animal = new Roedor(n_nombre,n_edad,n_tamaño,n_especie);
        return n_animal;
    }
    if(n_especie == "conejo"){
        Animal* n_animal = new Conejo(n_nombre,n_edad,n_tamaño,n_especie);
        return n_animal;
    }
    if(n_especie == "Erizo"){
        Animal* n_animal = new Erizo(n_nombre,n_edad,n_tamaño,n_especie);
        return n_animal;
    }else{
        Animal* n_animal = new Lagartija(n_nombre,n_edad,n_tamaño,n_especie);
        return n_animal;    
    }
}

void Sistema::definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie){
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



