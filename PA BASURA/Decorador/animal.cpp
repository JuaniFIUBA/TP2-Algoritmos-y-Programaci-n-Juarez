#include "animal.h"
Animal::Animal(string nombre , int edad, Personalidad *personalidad)
{
    this->nombre = nombre;
    this->edad = edad;
    this->personalidad = personalidad;

}

string Animal::obtener_nombre(){
    return nombre;
}

float Animal::obtener_hambre(){
    return hambre;
}
float Animal::obtener_higiene(){
    return higiene;
}