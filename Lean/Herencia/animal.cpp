#include "animal.h"

Animal::Animal(string nombre , int edad, Personalidad *personalidad)
{
    this->nombre = nombre;
    this->edad = edad;
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

string Animal::mostrar_personalidad(){
    return personalidad->mostrar_personalidad();
}

float Animal::obtener_hambre(){
    return hambre;
}
float Animal::obtener_higiene(){
    return higiene;
}
