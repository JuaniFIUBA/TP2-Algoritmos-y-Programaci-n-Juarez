#include "personalidad.h"

Personalidad::Personalidad(string personalidad, Personalidad *personalidad_accion){
    this->personalidad_t = personalidad_accion;
}

Personalidad *Personalidad::mostrar_personalidad(){
    return personalidad_t;
}