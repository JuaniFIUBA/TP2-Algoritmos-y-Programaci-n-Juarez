#include <iostream>
#include <fstream>
#include "sistema.hpp"

const char PERRO = 'P';
const char GATO = 'G';
const char CABALLO = 'C';
const char ROEDOR = 'R';
const char CONEJO = 'O';
const char ERIZO = 'E';
const int DIMINUTO = 2;
const int PEQUENIO = 10;
const int MEDIANO = 10;
const int GRANDE = 20;
const int GIGANTE = 50;

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
        definir_personalidad(personalidad, i, nombre, stoi(edad), tamanio, especie[0]);
        i++;
        cout<<"nombre"<<endl;
    }
    lista_animales.close();
}

Lista<Animal *> Sistema::obtener_lista(){
    return lista;
}

void Sistema::mostrar_info_animal(int pos)
{
    std::cout << "-----------------ANIMAL"<< pos+1<<"-----------------" << endl;
    std::cout << "nombre: " << lista.consulta(pos)->obtener_nombre() << endl;
    std::cout << "edad: " << lista.consulta(pos)->obtener_edad() << endl;
    std::cout << "tamaño: " << lista.consulta(pos)->obtener_tamanio() << endl;
    std::cout << "especie: " <<lista.consulta(pos)->obtener_especie() << endl;
    std::cout << "personalidad: " <<lista.consulta(pos)->mostrar_personalidad() << endl;
    std::cout << "----------------------------------------" << endl;
}

void Sistema::imprimir_lista(){
    int largo = lista.mostrar_cantidad();
    for(int i = 0; i < largo; i++)
    {
        mostrar_info_animal(i);
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
    
}

void Sistema::a_minuscula(string &cadena)
{
    int largo_cadena = (int)cadena.length();
    for(int i = 0; i < largo_cadena; i++)
        cadena[i] = (char)tolower(cadena[i]);
    
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

void Sistema::adoptar_animal()
{
    int espacio_disponible;
    cout<<"Indicar el espacio disponible en metros cuadrados:"<<endl;
    cin>>espacio_disponible;
    for(int i = 0; i < lista.mostrar_cantidad(); i++){
        if (espacio_disponible >= GIGANTE){
            mostrar_info_animal(i);
        }
        else if(espacio_disponible >= GRANDE){
            if(lista.consulta(i)->obtener_tamanio() != "gigante"){
                mostrar_info_animal(i); 
            }
        }
        else if(espacio_disponible >= MEDIANO){
            if (lista.consulta(i)->obtener_tamanio() != "gigante" && lista.consulta(i)->obtener_tamanio() != "grande"){
                mostrar_info_animal(i);
            }
        }
        else if(espacio_disponible < PEQUENIO){
            if (lista.consulta(i)->obtener_tamanio() == "pequeño" || lista.consulta(i)->obtener_tamanio() == "diminuto"){
                mostrar_info_animal(i);
            }
        }
        else if(espacio_disponible < DIMINUTO){
            if(lista.consulta(i)->obtener_tamanio() == "diminuto"){
                mostrar_info_animal(i); 
            }
        }
    }
    
    string input_usuario;
    cout << "¿Desea elegir un animal de los listados para adoptar? S(sí), N(no)." << endl;
    cin >> input_usuario;
    a_minuscula(input_usuario);
    if(input_usuario == "s"){
        
    }
    
    
    
}

void Sistema::cerrar_archivo(){
    
    ofstream lista_animales ("animales.csv");
    int cantidad_elementos = lista.mostrar_cantidad();
    for(int i = 0; i < cantidad_elementos; i++){
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



