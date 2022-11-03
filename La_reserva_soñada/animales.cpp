#include "animales.h"

Animal::Animal(string nombre , int edad, string tamanio, char especie, Personalidad *personalidad)
{
    this->nombre = nombre;
    this->edad = edad;
    this->tamanio = tamanio;
    this->especie[0] = especie;
    this->personalidad = personalidad;
    this->personalidad_t = personalidad->mostrar_personalidad();
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
    return personalidad_t;
}

float Animal::obtener_hambre(){
    return hambre;
}
float Animal::obtener_higiene(){
    return higiene;
}

string Animal::obtener_tamanio(){
    return tamanio;
}

Animal::~Animal(){
    cout<<""<<nombre<<" fue borrado con exito"<<endl;
}