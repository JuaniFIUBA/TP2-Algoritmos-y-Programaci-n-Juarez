#include "menu.h"
// #include "menu2.h"
#include <iostream>
#include <string>

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

using namespace std;

void Menu::mostrar_menu()
{
    cout << "Bienvenido a la reserva soniada..." << endl;
    cout << "1. Listar animales" << endl;
    cout << "2. Rescatar animal" << endl;
    cout << "3. Buscar animal" << endl;
    cout << "4. Cuidar animales" << endl;
    cout << "5. Adoptar animal" << endl;
    cout << "6. Guardar y salir" << endl;
    cout << "Seleccione una opcion de las indicadas anteriormente para continuar" << endl;
}



template <typename T>
bool Menu::verificar_dato(T dato, T* array_datos, int largo_array)
{
    for(int i = 0; i < largo_array; i++)
    {
        if(dato == array_datos[i])
            return true;
    }
    return false;
}

bool Menu::solicitar_personalidad(string &personalidad)
{
    cout << "Ingrese una personalidad: (jugueton, travieso, sociable o dormilon)" << endl;
    getline(cin, personalidad);
    sistema.a_minuscula(personalidad);
    if(!verificar_dato<string>(personalidad, (string*)PERSONALIDADES, CANTIDAD_PERSONALIDADES))
    {
        cout << "La personalidad ingresada es inválida" << endl;
        return false;
    }
    return true;
}
bool Menu::solicitar_tamanio(string &tamanio)
{
    cout << "Ingrese un tamanio (en minúsculas): (diminuto, pequeño, mediano, grande o gigante)" << endl;
    getline(cin, tamanio);
    sistema.a_minuscula(tamanio);
    if(!verificar_dato<string>(tamanio, (string*)TAMANIOS, CANTIDAD_TAMANIOS))
    {
        cout << "El tamanio <" << tamanio << "> ingresado es inválido." << endl;
        return false;
    }
    return true;
}

bool Menu::solicitar_especie(char &especie)
{
    cout << "Ingrese una de las letras que se mostrarán a continuación para indicar la especie: " << endl;
    cout << "P: Perro, G: Gato, C: Caballo, R: Roedor, O: Conejo, E: Erizo, L: Lagartija " << endl;
    cin >> especie;
    especie = (char)toupper(especie);
    if(!verificar_dato<char>(especie, (char*)ESPECIES, CANTIDAD_ESPECIES))
    {
        cout << "La especie ingresada es inválida" << endl;
        return false;
    }
    return true;
}

bool Menu::solicitar_datos()
{
    string nombre = "", tamanio = "", personalidad = "";
    int edad = 0;
    char especie = ' ';
    cout << "Ingrese el nombre (Atención: El nombre no puede estar registrado previamente)" << endl;
    cin.ignore();
    getline(cin, nombre);
    if(sistema.esta_en_lista(nombre) != -1)
    {
        cout << "El nombre se encuentra ya registrado." << endl;
        return false;
    }
    if(!solicitar_personalidad(personalidad))
        return false;
    if(!solicitar_tamanio(tamanio))
        return false;
    if(!solicitar_especie(especie))
        return false;
    cout << "Ingrese la edad:" << endl;
    cin >> edad;//falta verificacion
    sistema.agregar_animal(personalidad, nombre, edad, tamanio, especie);
    return true;
}

void Menu::seleccionar_opcion()
{

    int opcion_elegida = 0;
    while(opcion_elegida != GUARDAR_Y_SALIR)
    {        
        mostrar_menu();
        cin >> opcion_elegida;//falta verificar opcion elegida
        validar_opcion(opcion_elegida);
        switch(opcion_elegida)
        {
            case 1:
                sistema.imprimir_lista();
                break;
            case 2:    
                rescatar_animal();
                break;
            case 3:
                buscar_animal();
                break;
            case 4:
                mostrar_menu2();
                break;
            case 5:
                sistema.adoptar_animal();
                break;
            
            case 6:
                sistema.cerrar_archivo();
                break;
        }       
        sistema.actualizar_atributos();
    }
    
}

void Menu::validar_opcion(int &opcion)
{
    bool es_opcion_valida = opcion > 0 && opcion <= GUARDAR_Y_SALIR;
    while(!es_opcion_valida){
        cout<<"La opción ingresada es inválida. Por favor ingrese otra opción: ";
        cin>>opcion;
        es_opcion_valida = opcion > 0 && opcion <= GUARDAR_Y_SALIR;
    }
}

void Menu::rescatar_animal()
{
    bool reiniciar_solicitud = true;
    string input_usuario;


    while(reiniciar_solicitud)
    {
        if(!solicitar_datos())
        {
            cout << "Desea ingresar nuevamente los datos? S(sí), N(no)." << endl;
            cin >> input_usuario;
            sistema.a_minuscula(input_usuario);
            if(input_usuario.find('n') != string::npos)
                reiniciar_solicitud = false;
        }
        else    
            reiniciar_solicitud = false;
    }
}
void Menu::buscar_animal()
{
    string nombre;
    cout << "Ingrese el nombre" << endl;
    cin.ignore();
    getline(cin, nombre);
    int index_animal = sistema.esta_en_lista(nombre);
    if(index_animal == -1)
        cout << "No se encontró ningún animal que se llame <" << nombre << ">." << endl;
    else   
        sistema.mostrar_info_animal(index_animal);
}


void Menu::mostrar_menu2(){
    
    int opcion_elegida = 0;
    while(opcion_elegida != 4)
    {        
        cout<<"1. Elegir individualmente"<<endl;
        cout<<"2. Alimentar a todos"<<endl;
        cout<<"3. Baniar a todos"<<endl;
        cout<<"4. Regresar al inicio"<<endl;
        cout<<"Ingrese una opción: ";
        cin >> opcion_elegida;//falta verificar opcion elegida
        //validar_opcion(opcion_elegida);
        switch(opcion_elegida)
        {
            case 1:
                sistema.elegir_individualmente();
                break;
            case 2:    
                sistema.alimentar_todos();
                break;
            case 3:
                sistema.baniar_todos();
                break;
            case 4:
                opcion_elegida = 4;
                break;
        }       
    }
}


  