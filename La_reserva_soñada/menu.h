#ifndef MENU_H
#define MENU_H
#include "sistema.hpp"

class Menu
{
    protected:
        Sistema sistema;

    public:
        //pre: -
        //pos: muestra el menu en consola
        void mostrar_menu();
        //pre:
        //pos:
        void mostrar_menu2();
        //pre: 
        //pos: pide al usuario que seleccione una opción
        void seleccionar_opcion();
        
        ~Menu(){};
};

#endif //MENU_H