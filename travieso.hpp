#ifndef TRAVIESO_HPP
#define TRAVIESO_HPP

#include <iostream>
#include <string>
#include "personalidades.hpp"


class Travieso : public Personalidad{
private:
    std::string nombre;

public:
    
    virtual void pasar_tiempo();

};

#endif
