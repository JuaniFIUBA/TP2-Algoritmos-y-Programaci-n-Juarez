#ifndef NODO_H
#define NODO_H

using namespace std;


template <class T>
class Nodo
{
    private:    
        T dato;
        Nodo<T>* siguiente;

    public:
    //Constructor
    //PRE: -
    //POS: Contruye un Nodo con "dato" como dato. Siguiente en nullptr
    Nodo(T dato);

    //PRE: -
    //POS: Cambia el puntero siguiente del nodo a "n"
    void nodo_siguiente(Nodo<T>* n);

    //PRE: -
    //POS: retorna el dato almacenado en el nodo
    T obtener_dato();

    //PRE: -
    //POS: retorna el puntero siguiente del nodo
    Nodo<T>* obtener_siguiente();
};


//Constructor
template <class T>
Nodo<T>::Nodo(T dato){
    this->dato = dato;
    siguiente = nullptr;
}


//Cambiar siguiente nodo    
template <class T>
void Nodo<T>::nodo_siguiente(Nodo<T>* n){
    siguiente = n;
}


//Obtener dato del nodo
template <class T>
T Nodo<T>::obtener_dato(){
    return dato;
}


//Obtener siguiente del nodo
template <class T>
Nodo<T>* Nodo<T>::obtener_siguiente(){
    return siguiente;
}



#endif