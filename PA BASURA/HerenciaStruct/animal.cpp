#include "animal.h"

Animal::Animal(string nombre, string personalidad, float crecimiento_hambre, float crecimiento_higiene){
    this->nombre = nombre;
    this->hambre = 0;
    this->higiene = 100;
    this->personalidad = personalidad;
    this->actitudes;
}

void Animal::alimentarse(){
    cout<<""<<nombre<<" se prepara para comer"<<endl;
}
void Animal::lavarse(){
    cout<<"Lavarse"<<endl;
}

void Animal::pasar_tiempo(){
    hambre = hambre+(10);
    higiene = higiene-(10);
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

comportamiento Animal::info_comportamiento(){
    return comportamiento;
}

//Animal::~animal(){}