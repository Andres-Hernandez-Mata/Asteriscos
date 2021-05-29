#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Escribe un programa que pinte por pantalla la letra V. El ancho del palo de la V es siempre de 3 asteriscos. El usuario debe introducir la altura.
    La altura minima es de 3 pisos. Si el usuario introduce una altura menor, el programa debe mostrar un mensaje de error.

    **/

    int altura_ingresada;
    cout<<"Introduzca la altura de la V (un numero mayor o igual a 3): ";
    cin>>altura_ingresada;

    int altura = 0;
    int i = 0;
    int espacios_internos = altura_ingresada * 2 - 1;
    int espacios_delantes = 0;

    if(altura_ingresada < 3){
        cout<<"La altura debe ser mayor o igual a 3"<<endl;
    } else {
        while(altura < altura_ingresada){
            for(i = 1; i <= espacios_delantes; i++){
                cout<<" ";
            }
            cout<<"***";
            for(i = 1; i < espacios_internos; i++){
                cout<<" ";
            }
            cout<<"***"<<endl;

            altura++;
            espacios_delantes++;
            espacios_internos-=2;
        }
    }
}
