#include "jugueton.h"

void Jugueton::pasar_tiempo(){
    hambre = hambre+(10*2); //Los animales Juguetones tienen hambre el doble de rapido
    higiene = higiene-10;
}