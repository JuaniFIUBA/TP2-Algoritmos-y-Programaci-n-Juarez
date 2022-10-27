#include "sociable.h"

Sociable::Sociable(){
}

string Sociable::mostrar_personalidad(){
    return personalidad;
}

float Sociable::modificador_hambre(){
    return estadistica_hambre;
}

float Sociable::modificador_higiene(){
    return estadistica_higiene;
}