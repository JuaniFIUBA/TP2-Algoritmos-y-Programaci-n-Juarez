#include "menu2.h"
#include "sistema.hpp"

void Menu2::mostrar_menu2(){
    
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
                elegir_individualmente();
                break;
            case 2:    
                alimentar_todos();
                break;
            case 3:
                baniar_todos();
                break;
            case 4:
                opcion_elegida = 4;
                break;
        }       
    }
}

void Menu2::elegir_individualmente(){
    bool escogido = false;
    int i = 0;
    int opcion = 0;
    while(!escogido && i < sistema.obtener_lista().mostrar_cantidad()){
        sistema.mostrar_info_animal(i);
        cout<<"\t Por favor eliga una de las siguientes opciones\n";
        cout<<"1.Alimentar\n";
        cout<<"2.Baniar\n";
        cout<<"3.Saltear al siguiente\n";
        cin>>opcion; //Falta validación
        break;
        if(opcion == 1){
            sistema.baniar(i);
            escogido = true;
        }
        else if(opcion == 2){
            sistema.baniar(i);
            escogido = true;
        }
        else if(opcion == 3){
            i++;
        }
    }
    // if(sistema.obtener_lista().mostrar_cantidad() == i){
    cout<<"\t¡No hay más animales!"<<endl;
    // }
}

void Menu2::alimentar_todos(){
    for(int i = 0; i < sistema.obtener_lista().mostrar_cantidad(); i++){
        cout << i << endl;
        sistema.alimentar(i);
    }
}

void Menu2::baniar_todos(){
    for(int i = 0; i < sistema.obtener_lista().mostrar_cantidad(); i++){
        sistema.baniar(i);
    }
}
  