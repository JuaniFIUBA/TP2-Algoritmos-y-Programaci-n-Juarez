#include "jugueton.h"

Jugueton::Jugueton(){
}

string Jugueton::mostrar_personalidad(){
    return personalidad;
}

float Jugueton::modificador_hambre(){
    return estadistica_hambre;
}

float Jugueton::modificador_higiene(){
    return estadistica_higiene;
}