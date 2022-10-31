#ifndef MENU_H
#define MENU_H
#include "sistema.hpp"

class Menu
{
    private:
        Sistema sistema;
    public:
        void mostrar_menu();
        void seleccionar_opcion();

    private:
        template <typename T>
        bool verificar_dato(T dato, T* array_datos, int largo_array);
        bool solicitar_datos();
        bool solicitar_personalidad(string &personalidad);
        bool solicitar_tamanio(string &tamanio);
        bool solicitar_especie(char &especie);
        void a_minuscula(string &cadena);
};

#endif //MENU_H