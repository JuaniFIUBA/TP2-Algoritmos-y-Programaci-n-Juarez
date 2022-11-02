#include "personalidad.hpp"

Personalidad::Personalidad(){
    this->multiplicador_higiene = 1;
    this->multiplicador_hambre = 1;
}

std::string Personalidad::mostrar_nombre(){
    return nombre;
}
