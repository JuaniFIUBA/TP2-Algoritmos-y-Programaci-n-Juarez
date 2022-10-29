
#ifndef PERRO_H
#define PERRO_H
#include "animales.hpp"

class Perro : public Animal{
private:
    std::string especie;
    
public:
    Perro(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie);
    void pasar_tiempo();
    void alimentar();
    ~Perro();
};

#endif