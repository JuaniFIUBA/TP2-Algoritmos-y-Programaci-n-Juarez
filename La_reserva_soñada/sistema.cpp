#include <iostream>
#include <fstream>
#include "sistema.hpp"

const char PERRO = 'P';
const char GATO = 'G';
const char CABALLO = 'C';
const char ROEDOR = 'R';
const char CONEJO = 'O';
const char ERIZO = 'E';


Sistema::Sistema(){
    leer_archivo();
}

void Sistema::leer_archivo(){
    std::fstream lista_animales("animales.csv");
    if(!lista_animales.is_open()){
        std::cout<< "Error, no se encuentra el archivo"<<std::endl;
    }
    std::string nombre,edad,tamanio,especie,personalidad;
    int i = 0;
    while(getline(lista_animales, nombre,',')){
        getline(lista_animales, edad,',');
        getline(lista_animales, tamanio,',');
        getline(lista_animales, especie,',');
        getline(lista_animales, personalidad);
        i++;
        definir_personalidad(personalidad, i, nombre, stoi(edad), tamanio, especie[0]);
        cout<<nombre<<endl;
    }
    lista_animales.close();
}

void Sistema::mostrar_info_animal(int pos)
{
    lista.consulta(pos)->obtener_nombre();
    lista.consulta(pos)->obtener_edad();
    lista.consulta(pos)->obtener_tamanio();
    lista.consulta(pos)->obtener_especie();
    lista.consulta(pos)->mostrar_personalidad();
}

void Sistema::imprimir_lista(){
    int largo = lista.mostrar_cantidad() - 1; //el - 1 es porque lista siemrpe tiene 1 elemento menos que su cantidad
    for(int i = 0; i < largo; i++)
    {
        cout<<"==============ANIMAL============"<< i+1<<endl;
        cout<<lista.consulta(i)->obtener_nombre()<<endl;
        cout<<lista.consulta(i)->obtener_edad()<<endl;
        cout<<lista.consulta(i)->obtener_especie()<<endl;
        cout<<lista.consulta(i)->obtener_tamanio()<<endl;
        cout<<lista.consulta(i)->mostrar_personalidad()<<endl;
        cout<<endl;
    }
}

Animal* Sistema::obtener_especie(std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie, Personalidad* personalidad){
    if(n_especie == PERRO){
        Animal* n_animal = new Perro(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == GATO){
        Animal* n_animal = new Gato(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == CABALLO){
        Animal* n_animal = new Caballo(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == ROEDOR){
        Animal* n_animal = new Roedor(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == CONEJO){
        Animal* n_animal = new Conejo(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == ERIZO){
        Animal* n_animal = new Erizo(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }else{
        Animal* n_animal = new Lagartija(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;    
    }
}

void Sistema::definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie){
   
    if(n_personalidad == "dormilon"){
        Personalidad* personalidad = new Dormilon();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    else if(n_personalidad == "jugueton"){
        Personalidad* personalidad = new Jugueton();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    else if(n_personalidad == "sociable"){
        Personalidad* personalidad = new Sociable();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    else{
        Personalidad* personalidad = new Travieso();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    cout<<"vuelta"<<endl;
    
}

//devuelve la posicion si lo encuentra y -1 en el caso de que no encuentre el nombre
int Sistema::esta_en_lista(string nombre)
{
    for(int i = 0; i < lista.mostrar_cantidad(); i++)
    {
        if(lista.consulta(i)->obtener_nombre() == nombre)
            return i;
        
    }
    return -1;
}

void Sistema::agregar_animal(std::string personalidad, std::string nombre, int edad, std::string tamanio, char especie)
{
    //chequear cada parametro por fuera
    definir_personalidad(personalidad, lista.mostrar_cantidad(), nombre, edad, tamanio ,especie);
}

void Sistema::cerrar_archivo(){
    
    ofstream lista_animales ("animales.csv");

    for(int i = 0; i < lista.mostrar_cantidad(); i++){
        lista_animales << lista.consulta(i)->obtener_nombre() << ',' 
                       << lista.consulta(i)->obtener_edad() << ',' 
                       << lista.consulta(i)->obtener_tamanio() << ',' 
                       << lista.consulta(i)->obtener_especie() << ',' 
                       << lista.consulta(i)->mostrar_personalidad() << '\n';


        lista.borrar(i);
    }
    lista.~Lista();
}

Sistema::~Sistema(){
    int i = 0;
    while (lista.consulta(i))
    {
        delete lista.consulta(i);
        i++;
    }
}



