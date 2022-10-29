#ifndef CONEJO_H
#define CONEJO_H
#include "animales.hpp"

class Conejo : public Animal{
private:
    std::string especie;
    
public:
    Conejo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie);
    void pasar_tiempo();
    void alimentar();
    ~Conejo();
};

#endif