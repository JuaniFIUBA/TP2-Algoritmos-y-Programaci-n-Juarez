#include "animal.h"
#include "lista.h"
using namespace std;

int main(){
    Lista *listaPuntero = new Lista();
    Animal *AnimalPuntero = new Animal("Nombre",10,10,"Especie","Personalidad");
    listaPuntero->ingresaAnimal(AnimalPuntero);
    cout<<listaPuntero->mostrarAnimal()<<endl;

    return 0;
}