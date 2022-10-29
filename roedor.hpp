#ifndef ROEDOR_H
#define ROEDOR_H
#include "animales.hpp"

class Roedor : public Animal{
private:
    std::string especie;
    
public:
    Roedor(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie);
    void pasar_tiempo();
    void alimentar();
    ~Roedor();
};

#endif