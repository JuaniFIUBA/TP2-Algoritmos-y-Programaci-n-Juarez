#include <iostream>
#include <fstream>
#include "sistema.hpp"


Sistema::Sistema(){
    leer_archivo();
}

void Sistema::leer_archivo(){
    std::fstream lista_animales("animales.csv");
    if(!lista_animales.is_open()){
        std::cout<< "Error, no se encuentra el archivo"<<std::endl;
    }
    std::string nombre,edad,tamanio,especie,personalidad;
    int i = 0;
    while(getline(lista_animales, nombre,',')){
        getline(lista_animales, edad,',');
        getline(lista_animales, tamanio,',');
        getline(lista_animales, especie,',');
        getline(lista_animales, personalidad);

        definir_personalidad(personalidad, i, nombre, stoi(edad), tamanio, especie[0]);
        i++;
    }
    lista_animales.close();
}

Lista<Animal *> Sistema::obtener_lista(){
    return this -> lista;
}

void Sistema::mostrar_info_animal(int pos)
{
    std::cout << "-----------------ANIMAL"<< pos + 1<<"-----------------" << endl;
    std::cout << "nombre: " << lista.consulta(pos)->obtener_nombre() << endl;
    std::cout << "edad: " << lista.consulta(pos)->obtener_edad() << endl;
    std::cout << "tamaño: " << lista.consulta(pos)->obtener_tamanio() << endl;
    std::cout << "especie: " <<lista.consulta(pos)->devolver_especie() << endl;
    std::cout << "personalidad: " <<lista.consulta(pos)->mostrar_personalidad() << endl;
    std::cout << "hambre: " << lista.consulta(pos)->obtener_hambre() << endl;
    std::cout << "higiene: " << lista.consulta(pos)->obtener_higiene() << endl;
    std::cout << "----------------------------------------" << endl;
}

void Sistema::imprimir_lista(){
    int largo = lista.mostrar_cantidad();
    for(int i = 0; i < largo; i++)
    {
        mostrar_info_animal(i);
        cout<<endl;
    }
}

Animal* Sistema::obtener_especie(std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie, Personalidad* personalidad){
    if(n_especie == PERRO){
        Animal* n_animal = new Perro(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == GATO){
        Animal* n_animal = new Gato(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == CABALLO){
        Animal* n_animal = new Caballo(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == ROEDOR){
        Animal* n_animal = new Roedor(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == CONEJO){
        Animal* n_animal = new Conejo(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }
    if(n_especie == ERIZO){
        Animal* n_animal = new Erizo(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;
    }else{
        Animal* n_animal = new Lagartija(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        return n_animal;    
    }
}

void Sistema::definir_personalidad(std::string n_personalidad,int posicion, std::string n_nombre, int n_edad, std::string n_tamanio, char n_especie){
   
    if(n_personalidad == "dormilon"){
        Personalidad* personalidad = new Dormilon();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    else if(n_personalidad == "jugueton"){
        Personalidad* personalidad = new Jugueton();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    else if(n_personalidad == "sociable"){
        Personalidad* personalidad = new Sociable();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    else{
        Personalidad* personalidad = new Travieso();
        Animal* animal = obtener_especie(n_nombre, n_edad, n_tamanio, n_especie, personalidad);
        this->lista.agregar(animal,posicion);
    }
    
}

void Sistema::rescatar_animal()
{
    bool reiniciar_solicitud = true;
    string input_usuario;

    while(reiniciar_solicitud)
    {
        if(!solicitar_datos_y_agregar())
        {
            cout << "Desea ingresar nuevamente los datos? S(sí), N(no)." << endl;
            getline(cin>>ws, input_usuario);
            a_minuscula(input_usuario);
            if(input_usuario.find('n') != string::npos)
                reiniciar_solicitud = false;
        }
        else    
            reiniciar_solicitud = false;
    }
}

bool Sistema::solicitar_datos_y_agregar()
{
    string nombre = "", tamanio = "", personalidad = "";
    int edad = 0;
    char especie = ' ';
    cout << "Ingrese el nombre (Atención: El nombre no puede estar registrado previamente)" << endl;
    getline(cin>>ws, nombre);
    if(esta_en_lista(nombre) != -1)
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
    cout << "Ingrese la edad(debe estar entre 0 y 100 años):" << endl;
    edad = pedir_opcion(EDAD_MIN, EDAD_MAX);
    agregar_animal(personalidad, nombre, edad, tamanio, especie);
    return true;
}

bool Sistema::solicitar_personalidad(string &personalidad)
{
    cout << "Ingrese una personalidad: (jugueton, travieso, sociable o dormilon)" << endl;
    getline(cin, personalidad);
    a_minuscula(personalidad);
    if(!verificar_dato<string>(personalidad, (string*)PERSONALIDADES, CANTIDAD_PERSONALIDADES))
    {
        cout << "La personalidad ingresada es inválida" << endl;
        return false;
    }
    return true;
}



bool Sistema::solicitar_tamanio(string &tamanio)
{
    cout << "Ingrese un tamanio: (diminuto, pequeño, mediano, grande o gigante)" << endl;
    getline(cin, tamanio);
    a_minuscula(tamanio);
    if(!verificar_dato<string>(tamanio, (string*)TAMANIOS, CANTIDAD_TAMANIOS))
    {
        cout << "El tamanio <" << tamanio << "> ingresado es inválido." << endl;
        return false;
    }
    return true;
}

bool Sistema::solicitar_especie(char &especie)
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

template <typename T>
bool Sistema::verificar_dato(T dato, T* array_datos, int largo_array)
{
    for(int i = 0; i < largo_array; i++)
    {
        if(dato == array_datos[i])
            return true;
    }
    return false;
}

void Sistema::a_minuscula(string &cadena)
{
    int largo_cadena = (int)cadena.length();
    for(int i = 0; i < largo_cadena; i++)
        cadena[i] = (char)tolower(cadena[i]);
    
}

//devuelve la posicion si lo encuentra y -1 en el caso de que no encuentre el nombre
int Sistema::esta_en_lista(string nombre)
{
    int largo_lista = lista.mostrar_cantidad();
    for(int i = 0; i < largo_lista; i++)
    {
        if(lista.consulta(i)->obtener_nombre() == nombre)
            return i;   
    }
    return -1;
}

void Sistema::agregar_animal(std::string personalidad, std::string nombre, int edad, std::string tamanio, char especie)
{
    definir_personalidad(personalidad, lista.mostrar_cantidad(), nombre, edad, tamanio ,especie);
}


void Sistema::buscar_animal()
{
    string nombre;
    cout << "Ingrese el nombre" << endl;
    getline(cin>>ws, nombre);
    int index_animal = esta_en_lista(nombre);
    if(index_animal == -1)
        cout << "No se encontró ningún animal que se llame <" << nombre << ">." << endl;
    else   
        mostrar_info_animal(index_animal);
}

void Sistema::adoptar_animal()
{
    int espacio_disponible;
    cout<<"Indicar el espacio disponible en metros cuadrados(desde 1 hasta 500 metros cuadrados):"<<endl;
    espacio_disponible = pedir_opcion(ESPACIO_MIN, ESPACIO_MAX) ;
    mostrar_animales_disponibles(espacio_disponible);
    
    string input_usuario;
    cout << "¿Desea elegir un animal de los listados para adoptar? S(sí), N(no)." << endl;
    getline(cin>>ws, input_usuario);
    a_minuscula(input_usuario);
    if(input_usuario.find('s') != string::npos){
        seleccionar_animal();
    }   
}

void Sistema::mostrar_animales_disponibles(int espacio_disponible){
    for(int i = 0; i < lista.mostrar_cantidad(); i++){
        if (espacio_disponible >= GIGANTE){
            mostrar_info_animal(i);
        }
        else if(espacio_disponible >= GRANDE){
            if(lista.consulta(i)->obtener_tamanio() != "gigante"){
                mostrar_info_animal(i); 
            }
        }
        else if(espacio_disponible >= MEDIANO){
            if (lista.consulta(i)->obtener_tamanio() != "gigante" && lista.consulta(i)->obtener_tamanio() != "grande"){
                mostrar_info_animal(i);
            }
        }
        else if(espacio_disponible < PEQUENIO && espacio_disponible > DIMINUTO){
            if (lista.consulta(i)->obtener_tamanio() == "pequeño" || lista.consulta(i)->obtener_tamanio() == "diminuto"){
                mostrar_info_animal(i);
            }
        }
        else if(espacio_disponible < DIMINUTO){
            if(lista.consulta(i)->obtener_tamanio() == "diminuto"){
                mostrar_info_animal(i); 
            }
        }
    }
}

void Sistema::seleccionar_animal(){
    string nombre;
    cout << "Ingrese el nombre de un animal disponible: " << endl;
    getline(cin>>ws, nombre); 
    int pos_animal = esta_en_lista(nombre);
    if(pos_animal == -1)
        cout << "No se encontró ningún animal que se llame <" << nombre << ">." << endl;
    else{
        cout << "=====================================" << endl;
        cout << "Felicidades! Ha adoptado a " << nombre << endl;
        cout << "=====================================" << endl;
        Animal* aux = lista.consulta(pos_animal);
        lista.borrar(pos_animal);
        delete aux;
    }   
}

void Sistema::elegir_individualmente(){
    int opcion = 0;
    bool escogido = false;
    int i = 0;
    while(!escogido && i < lista.mostrar_cantidad()){
        mostrar_info_animal(i);
        cout<<"\t\t=========================="<<endl;
        cout<<"\t Por favor eliga una de las siguientes opciones\n";
        cout<<"1.Alimentar\n";
        cout<<"2.Baniar\n";
        cout<<"3.Saltear al siguiente\n";
        cout<<"\t\t=========================="<<endl;
        cout<<"Ingrese una opcion: ";
        opcion = pedir_opcion(ALIMENTAR, SALTEAR);
        if(opcion == ALIMENTAR){
            lista.consulta(i)->alimentarse();
            escogido = true;
        }
        else if(opcion == BANIAR){
            lista.consulta(i)->lavarse();
            escogido = true;
        }
        else if(opcion == SALTEAR){
            i++;
        }
    }
    if(lista.mostrar_cantidad() == i){
        cout<<"\t¡No hay más animales!"<<endl;
    }
}

int Sistema::pedir_opcion(int rango_min, int rango_max){
    string opcion;
    getline(cin>>ws, opcion);

    while(!es_opcion_valida(opcion, rango_min, rango_max)){
        cout<<"El dato ingresado no es válido. Por favor, ingrese una opción correcta: ";
        getline(cin>>ws, opcion);
    }
    return stoi(opcion);

}

bool Sistema::es_opcion_valida(string opcion, int rango_min, int rango_max){
    bool son_caracteres_numericos = true;
    int i = 0;
    int cantidad_numeros = (int)opcion.length();

    while(son_caracteres_numericos && i < cantidad_numeros){
        son_caracteres_numericos = isdigit(opcion[i]);
        i++;
    }
    if(!son_caracteres_numericos || stoi(opcion) < rango_min || stoi(opcion) > rango_max){
        return false;
    }
    return son_caracteres_numericos;
}

void Sistema::alimentar_todos(){
    int largo_lista = lista.mostrar_cantidad();
    for(int i = 0; i < largo_lista; i++)
        lista.consulta(i)->alimentarse();
    
}

void Sistema::baniar_todos(){
    int largo_lista = lista.mostrar_cantidad();
    for(int i = 0; i < largo_lista; i++){
        lista.consulta(i)->lavarse();
    }
}
void Sistema::actualizar_atributos()
{
    int largo_lista = lista.mostrar_cantidad();
    for(int i = 0; i < largo_lista; i++)
        lista.consulta(i)->pasar_tiempo();
}

void Sistema::cerrar_archivo(){
    
    ofstream lista_animales ("animales.csv");
    int cantidad_elementos = lista.mostrar_cantidad();
    for(int i = 0; i < cantidad_elementos; i++){
        if(i < cantidad_elementos - 1){
            lista_animales << lista.consulta(i)->obtener_nombre() << ',' 
                        << lista.consulta(i)->obtener_edad() << ',' 
                        << lista.consulta(i)->obtener_tamanio() << ',' 
                        << lista.consulta(i)->devolver_especie() << ',' 
                        << lista.consulta(i)->mostrar_personalidad() << '\n';
        }else{
            lista_animales << lista.consulta(i)->obtener_nombre() << ',' 
                        << lista.consulta(i)->obtener_edad() << ',' 
                        << lista.consulta(i)->obtener_tamanio() << ',' 
                        << lista.consulta(i)->devolver_especie() << ',' 
                        << lista.consulta(i)->mostrar_personalidad();
        }
        
    }   
    
}

Sistema::~Sistema(){
    int largo_lista = lista.mostrar_cantidad();
    for(int i = 0; i < largo_lista; i++)
        delete lista.consulta(i);
}