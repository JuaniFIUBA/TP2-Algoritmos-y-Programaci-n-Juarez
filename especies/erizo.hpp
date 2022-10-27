
#ifndef ERIZO_H
#define ERIZO_H
#include "animales.hpp"

class Erizo : public Animal{
private:
    std::string especie;
    
public:
    Erizo(std::string n_nombre, int n_edad, std::string n_tamaño, std::string n_especie);
    void pasar_tiempo() override;
    void alimentar() override;
    ~Erizo();
};

#endif