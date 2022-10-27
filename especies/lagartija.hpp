#ifndef LAGARTIJA_H
#define LAGARTIJA_H
#include "animales.hpp"

class Lagartija : public Animal{
private:
    std::string especie;
    
public:
    Lagartija(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie);
    void pasar_tiempo() override;
    void alimentar() override;
    ~Lagartija();
};

#endif