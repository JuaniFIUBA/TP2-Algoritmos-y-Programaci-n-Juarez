
#ifndef GATO_H
#define GATO_H
#include "animales.hpp"

class Gato : public Animal{
private:
    std::string especie;
    
public:
    Gato(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie);
    void pasar_tiempo() override;
    void alimentar() override;
    ~Gato();
};

#endif