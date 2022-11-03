#ifndef MENU_H
#define MENU_H
#include "sistema.hpp"

class Menu
{
    private:
        Sistema sistema;
    public:
        void mostrar_menu();
        //pre: 
        //pos:
        void seleccionar_opcion();

    private:
        //pre: 
        //pos:
        template <typename T>
        //pre: 
        //pos:  
        bool verificar_dato(T dato, T* array_datos, int largo_array);
        //pre: 
        //pos:
        bool solicitar_datos();
        //pre: 
        //pos:
        bool solicitar_personalidad(string &personalidad);
        //pre: 
        //pos:
        bool solicitar_tamanio(string &tamanio);
        //pre: 
        //pos:
        bool solicitar_especie(char &especie);
        //pre: 
        //pos:
        void a_minuscula(string &cadena);
};

#endif //MENU_H