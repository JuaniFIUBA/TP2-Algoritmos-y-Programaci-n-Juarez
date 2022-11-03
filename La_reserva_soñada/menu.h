#ifndef MENU_H
#define MENU_H
#include "sistema.hpp"

class Menu
{
    private:
        Sistema sistema;
    public:
        //pre:
        //pos: muestra el menu en consola
        void mostrar_menu();
    private:
        //pre: 
        //pos: sobreescrive el .csv con los nuevos animales
        void seleccionar_opcion();
        //pre: 
        //pos: devuelve true en caso de que el dato esté en el array de datos
        template <typename T> 
        bool verificar_dato(T dato, T* array_datos, int largo_array);
        //pre: 
        //pos: devuelve true en caso de que todos los datos ingresados sean válidos
        bool solicitar_datos();
        //pre: 
        //pos: devuelve true en caso de que todos los datos ingresados sean válidos
        bool solicitar_personalidad(string &personalidad);
        //pre: 
        //pos: devuelve true en caso de que todos los datos ingresados sean válidos
        bool solicitar_tamanio(string &tamanio);
        //pre: 
        //pos: devuelve true en caso de que todos los datos ingresados sean válidos
        bool solicitar_especie(char &especie);
        //pre: 
        //pos: devuelve el string en minuscula (no devuelve Ñ en minúsculas)
        void a_minuscula(string &cadena);
        //pre:
        //pos: agrega un animal al registro 
        void rescatar_animal();
        //pre:
        //pos: busca e imprime las características del animal ingresado por el usuario (busca por nombre)
        void buscar_animal();


};

#endif //MENU_H