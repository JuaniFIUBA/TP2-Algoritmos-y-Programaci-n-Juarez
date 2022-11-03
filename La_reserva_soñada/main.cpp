#include "menu.h"

int main(){
    Menu menu = Menu();
    menu.seleccionar_opcion();
    menu.~Menu();
    return 0;
}