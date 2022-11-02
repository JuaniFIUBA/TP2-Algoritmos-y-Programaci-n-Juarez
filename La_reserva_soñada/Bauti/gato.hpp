
#ifndef GATO_H
#define GATO_H
#include "animales.hpp"

class Gato : public Animal{
private:
    std::string especie;
    
public:
    Gato(std::string n_nombre, int n_edad, std::string n_tamanio);
    void pasar_tiempo();
    void alimentar();
    void mostrar_info();
    ~Gato();
};

#endif