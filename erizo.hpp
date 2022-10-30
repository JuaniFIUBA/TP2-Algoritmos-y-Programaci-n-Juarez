
#ifndef ERIZO_H
#define ERIZO_H
#include "animales.hpp"

class Erizo : public Animal{
private:
    std::string especie;
    
public:
    Erizo(std::string n_nombre, int n_edad, std::string n_tamaño);
    void pasar_tiempo();
    void alimentar();
    void mostrar_info();
    ~Erizo();
};

#endif