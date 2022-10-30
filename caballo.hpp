#ifndef CABALLO_H
#define CABALLO_H
#include "animales.hpp"
#include <iostream>

class Caballo : public Animal{
private:
    std::string especie;
        
public:
    Caballo(std::string n_nombre, int n_edad, std::string n_tamaño);
    void pasar_tiempo();
    void alimentar();
    void mostrar_info();
    ~Caballo();
};

#endif
