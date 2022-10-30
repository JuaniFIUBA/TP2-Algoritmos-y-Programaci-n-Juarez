#ifndef LAGARTIJA_H
#define LAGARTIJA_H
#include "animales.hpp"

class Lagartija : public Animal{
private:
    std::string especie;
    
public:
    Lagartija(std::string n_nombre, int n_edad, std::string n_tamaño);
    void pasar_tiempo();
    void alimentar();
    void mostrar_info();
    ~Lagartija();
};

#endif