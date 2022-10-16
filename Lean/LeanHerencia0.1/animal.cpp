#include "animal.h"

Animal::Animal(string nombre, string personalidad, int crecimiento_hambre, int crecimiento_higiene){
    this->nombre = nombre;
    this->hambre = 0;
    this->higiene = 100;
    this->personalidad = personalidad;
    this->crecimiento_hambre = crecimiento_hambre;
    this->crecimiento_higiene = crecimiento_higiene;
}

void Animal::alimentarse(){
    cout<<"Comer"<<endl;
}
void Animal::lavarse(){
    cout<<"Lavarse"<<endl;
}

void Animal::pasar_tiempo(){
    hambre = hambre+(10*crecimiento_hambre);
    higiene = higiene-(10*crecimiento_higiene);
}

string Animal::obtener_nombre(){
    return nombre;
}

int Animal::obtener_hambre(){
    return hambre;
}

int Animal::obtener_higiene(){
    return higiene;
}
//Animal::~animal()