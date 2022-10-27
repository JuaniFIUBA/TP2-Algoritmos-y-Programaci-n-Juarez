#include "dormilon.h"

Dormilon::Dormilon(){
}

string Dormilon::mostrar_personalidad(){
    return personalidad;
}

float Dormilon::modificador_hambre(){
    return estadistica_hambre;
}

float Dormilon::modificador_higiene(){
    return estadistica_higiene;
}