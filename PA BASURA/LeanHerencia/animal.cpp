#include "animal.h"

Animal::Animal(string nombre){
    this->nombre = nombre;
    this->hambre = 0;
    this->higiene = 100;
}

void Animal::alimentarse(){
    cout<<"Comer"<<endl;
}
void Animal::lavarse(){
    cout<<"Lavarse"<<endl;
}
//Animal::~animal()