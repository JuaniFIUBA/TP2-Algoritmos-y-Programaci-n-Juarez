#include <iostream>
#include "lista.h"
#include "Animal.h"
using namespace std;

int main(void)
{
    Lista<Animal*> lista_animal;
    Animal animal1("Juani");
    Animal *a = &animal1;
    lista_animal.agregar(a, 0);
    cout << lista_animal.consulta(0)->mostrar_nombre() << endl;
    return 0;
}