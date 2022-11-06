#ifndef MENU_H
#define MENU_H
#include "sistema.hpp"
#include <stdlib.h>
#include <iostream>
#include <string>

class Menu
{
    private:
        Sistema sistema;

    public:
        //pre: 
        //pos: pide al usuario que seleccione una opción
        void seleccionar_opcion();
        
        ~Menu(){};
    private:
        //pre: -
        //pos: muestra el menu en consola
        void mostrar_menu();
        //pre: menu fue mostrado
        //pos: muestra el submenú al elegir la opción 4
        void mostrar_menu2();    
};

#endif //MENU_H