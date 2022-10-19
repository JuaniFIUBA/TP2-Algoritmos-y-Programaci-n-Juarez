#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include "animales.hpp"
#include <iostream>
#include <string>

class Sistema{
private:
    Animal* animal;
    
public:
    Sistema();
    void leer_archivo();
    void cargar_lista();
};






#endif