#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

template <class T>
class Lista
{
    private:
        Nodo<T>* primero;
        Nodo<T>* cursor;
        int cantidad_elementos;
    public:
        //constructor
        Lista();

        int mostrar_cantidad();
        //pre:
        //pos: agrega un nodo en la posicion <<pos>> con pos >= 0
        void agregar(T dato, int pos);

        //pre:
        //pos: borra el nodo de la posicion <<pos>>, con pos >= 0;
        void borrar(int pos);

        //pre:
        //pos: devuelve el dato almacenado en pos, con pos < cantidad_elementos
        T consulta(int pos);

        //destructor
        ~Lista();
    private:
        Nodo<T>* buscar_nodo(int posicion);

        bool es_vacia();
};


template<class T>
Lista<T>::Lista()
{
    primero = nullptr;
    cursor = primero;
    cantidad_elementos = 0;
} 

template<class T>
int Lista<T>::mostrar_cantidad()
{
    return cantidad_elementos;
}

template <class T>
void Lista<T>::agregar(T dato, int pos)
{
    Nodo<T>* actual = new Nodo<T>(dato);  
    if(pos == 0)
    {
        actual -> nodo_siguiente(primero);
        primero = actual;
    }
    else
    {
        Nodo<T>* aux = buscar_nodo(pos - 1);
        actual -> nodo_siguiente(aux -> obtener_siguiente());
        aux -> nodo_siguiente(actual);
    }
    cantidad_elementos++;
}

template <class T>
void Lista<T>::borrar(int pos)
{
    Nodo<T>* actual = primero;
    if(pos == 0)
        primero = primero -> obtener_siguiente();
    
    else
    {
        Nodo<T>* aux = buscar_nodo(pos - 1);
        actual = aux -> obtener_siguiente();
        aux -> nodo_siguiente(actual -> obtener_siguiente());
    }
    cantidad_elementos--;
    delete actual;
}


template <class T>
T Lista<T>::consulta(int pos)
{
    Nodo<T>* aux = buscar_nodo(pos);

    if(pos == cantidad_elementos)
        return 0;
    else
        return aux -> obtener_dato();    
    
}

template <class T>
bool Lista<T>::es_vacia()
{
    return cantidad_elementos == 0;
}

template <class T>
Lista<T>::~Lista()
{
    while(!es_vacia())
        borrar(0);
}

template <class T>
Nodo<T>* Lista<T>::buscar_nodo(int posicion)
{
    Nodo<T>* actual = primero;
    for(int i = 0; i < cantidad_elementos; i++)
    {
        if(i == posicion)
            return actual;
        else
            actual = actual ->obtener_siguiente();
    }
    return nullptr;
}
#endif