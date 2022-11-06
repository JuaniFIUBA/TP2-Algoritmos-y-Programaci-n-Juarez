#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include "lista.h"
#include "sistema.hpp"
#include "./Animales/animales.h"
#include "./Animales/perro.h"
#include "./Animales/gato.h"
#include "./Animales/caballo.h"
#include "./Animales/roedor.h"
#include "./Animales/conejo.h"
#include "./Animales/erizo.h"
#include "./Animales/lagartija.h"
#include "./Animales/Personalidades/dormilon.h"
#include "./Animales/Personalidades/jugueton.h"
#include "./Animales/Personalidades/sociable.h"
#include "./Animales/Personalidades/travieso.h"
#include <iostream>
#include <string>

const char PERRO = 'P';
const char GATO = 'G';
const char CABALLO = 'C';
const char ROEDOR = 'R';
const char CONEJO = 'O';
const char ERIZO = 'E';
const int DIMINUTO = 2;
const int PEQUENIO = 10;
const int MEDIANO = 10;
const int GRANDE = 20;
const int GIGANTE = 50;
const int EDAD_MIN = 0;
const int EDAD_MAX = 100;
const int ESPACIO_MIN = 1;
const int ESPACIO_MAX = 500;
const int CANTIDAD_PERSONALIDADES = 4;
const int CANTIDAD_TAMANIOS =  5;
const int CANTIDAD_ESPECIES = 7;
const string TAMANIOS[] = {"diminuto", "pequeño", "mediano", "grande", "gigante"};
const string PERSONALIDADES[] = {"jugueton", "travieso", "sociable", "dormilon"};
const char ESPECIES[] = {'P', 'G', 'C', 'R', 'O', 'E', 'L'};

enum opciones_menu{
    LISTAR_ANIMALES = 1,
    RESCATAR_ANIMAL,
    BUSCAR_ANIMAL,
    CUIDAR_ANIMAL,
    ADOPTAR_ANIMAL,
    GUARDAR_Y_SALIR
};

enum opciones_menu2{
    ELEGIR_INDIVIDUALMENTE = 1,
    ALIMENTAR_TODOS,
    BANIAR_TODOS,
    REGRESAR
};

enum opciones_menu3{
    ALIMENTAR = 1,
    BANIAR,
    SALTEAR
};

class Sistema{
private:
    Lista<Animal*> lista;

public:
    Sistema();
    //pre: -
    //pos:  Devuelva la lista.
    Lista<Animal*> obtener_lista();
    //pre: 
    //pos: muestra por pantalla los datos de los animales registrados
    void imprimir_lista();
    //pre:
    //pos:
    void actualizar_atributos();
    //pre:
    //pos: agrega un animal al registro 
    void rescatar_animal();
    //pre:
    //pos: busca e imprime las características del animal ingresado por el usuario (busca por nombre)
    void buscar_animal();
    //pre:
    //pos:
    void elegir_individualmente();
    //pre:
    //pos:
    int pedir_opcion(int rango_min, int rango_max);
    //pre:
    //pos: Vuelve el hambre de todos los animales a 0
    void alimentar_todos();
    //pre:
    //pos: Vuelve la higiene de todos los animales a 100
    void baniar_todos();
    //pre:
    //post: Muestra según el tamanio disponible los animales y una vez elegido uno de ellos lo elimina de la lista.
    void adoptar_animal();
    //pre: 
    //pos: Actualiza el archivo "animales.csv" con las modificaciones realizadas por el usuario.
    void cerrar_archivo();
    ~Sistema();


private:
    //pre: el archivo está en formato csv correcto (ordenado) 
    //pos: crea una lista de <Animal*>
    void leer_archivo();
    //pre:
    //pos:
    Animal* obtener_especie(std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie, Personalidad *personalidad);
    //pre:
    //pos:
    void definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie);
    //pre: pos < cantidad_elementos (lista)
    //pos: muestra todas las características del animal en la posición <<pos>>
    void mostrar_info_animal(int pos);
    //pre: 
    //pos:
    void agregar_animal(std::string personalidad, std::string nombre, int edad, std::string tamanio, char especie);
    //pre: 
    //pos: devuelve true en caso de que todos los datos ingresados sean válidos
    bool solicitar_datos_y_agregar();
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
    //pos: devuelve true en caso de que el dato esté en el array de datos
    template <typename T> 
    bool verificar_dato(T dato, T* array_datos, int largo_array);
    //pre: 
    //pos: devuelve el string en minuscula (no devuelve Ñ en minúsculas)
    void a_minuscula(string &cadena);
    //pre: 
    //pos: devuelve la posicion en la lista en caso de que esté, -1 en caso de que no se haya encontrado
    int esta_en_lista(string nombre); 
    //pre:
    //pos:
    bool es_opcion_valida(string opcion, int rango_min, int rango_max);
    //pre:
    //pos:
    void mostrar_animales_disponibles(int espacio_disponible);
    //pre:
    //pos: true en caso de que el animal sea seleccionado con exito, false en caso de que no se encuentre el animal
    bool seleccionar_animal();
};

#endif