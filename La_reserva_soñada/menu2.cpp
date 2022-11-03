#include "menu2.h"

void Menu2::mostrar_menu2(){
    int opcion_elegida = 0;
    while(opcion_elegida != -1)
    {        
        mostrar_menu();
        cin >> opcion_elegida;//falta verificar opcion elegida
        validar_opcion(opcion_elegida);
        switch(opcion_elegida)
        {
            case 1:
                elegir_individualmente();
                break;
            case 2:    
                alimentar_todos();
                break;
            case 3:
                baniar_todos();
                break;
            case 4:
                regresar();
                break;
        }       
    }
}

void Menu2::elegir_individualmente(){
    bool escogido = false;
    int i = 0;
    
    while(!escogido && i < sistema.obtener_lista().mostrar_cantidad()){
        sistema.mostrar_info_animal(i);
        i++;
        cout<<"\t Por favor eliga una de las siguientes opciones\n";
        cout<<"1.Alimentar\n";
        cout<<"2.Baniar\n";
        cout<<"3.Saltear al siguiente\n";
        cin

    }
}
void Menu2::alimentar_todos(){

}

void Menu2::baniar_todos(){

}
    
void Menu2::regresar(){

}  