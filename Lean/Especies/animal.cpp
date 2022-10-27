#include "animal.h"

Animal::Animal(string nombre , int edad, string especie, Personalidad *personalidad)
{
    this->nombre = nombre;
    this->edad = edad;
    this->especie = especie;
    this->personalidad = personalidad;
    this->hambre = 0;
    this->higiene = 100;

}

string Animal::obtener_nombre(){
    return nombre;
}

int Animal::obtener_edad(){
    return edad;
}

string Animal::obtener_especie(){
    return especie;
}

string Animal::mostrar_personalidad(){
    return personalidad->mostrar_personalidad();
}

float Animal::obtener_hambre(){
    return hambre;
}
float Animal::obtener_higiene(){
    return higiene;
}

Animal::~Animal(){
    cout<<""<<nombre<<" fue borrado con exito"<<endl;
}