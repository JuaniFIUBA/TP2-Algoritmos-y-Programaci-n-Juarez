#include <iostream>
#include <string>
#include "personalidad.hpp"
#include "animales.hpp"
#include "sistema.hpp"

int main(){
    Sistema sistema = Sistema();
    sistema.leer_archivo();
    sistema.imprimir_lista();


    return 0;
}