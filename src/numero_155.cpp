#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte el numero 155 mediante asteriscos. Al usuario se le pedira dos datos, la altura y el numero de espacios que habra entre los numeros.
    La altura minima es 5, la anchura de los numeros siempre es la misma, la parte superior de los cinco tambien es siempre igual, la parte inferior del 5 si que varia
    en la funcion de la altura.

    **/

    int altura;
    cout<<"Introduzca la altura (5 como  minimo): ";
    cin>>altura;
    int espacios;
    cout<<"Introduzca el numero de espacios entre los numeros (1 como minimo): ";
    cin>>espacios;

    cout<<"*";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"****";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"****"<<endl;

    cout<<"*";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"*   ";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"*"<<endl;

    cout<<"*";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"****";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"****"<<endl;

    for(int fila = 0; fila < altura - 4; fila++){
        cout<<"*";
        for(int i = 0; i < espacios; i++){
            cout<<" ";
        }
        cout<<"   *";
        for(int i = 0; i < espacios; i++){
            cout<<" ";
        }
        cout<<"   *"<<endl;
    }

    cout<<"*";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"****";
    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"****"<<endl;

}
