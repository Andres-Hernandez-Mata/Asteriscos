#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte por pantalla un arbol de navidad, el usuario debe introducir la altura, en esa altura va incluida la estrella y el tronco,
    supongamos que el usuario introduce una altura mayor o igual a 4.

    **/

    int alturaIngresada;
    cout<<"Introduzca la altura del arbol: ";
    cin>>alturaIngresada;

    int espaciosDelantes = alturaIngresada - 3;
    int espaciosInternos = 0;

    for(int i = 1; i <= espaciosDelantes; i++){
        cout<<" ";
    }
    cout<<"*"<<endl;

    int altura = 2;

    while(altura < alturaIngresada - 1){
        for(int i = 1; i <= espaciosDelantes; i++){
            cout<<" ";
        }
        cout<<"^";
        for(int i = 1; i < espaciosInternos; i++){
            cout<<" ";
        }

        if(altura > 2){
            cout<<"^";
        }
        cout<<""<<endl;
        altura++;
        espaciosDelantes--;
        espaciosInternos+=2;
    }

    for(int i = 1; i < altura * 2 - 2; i++){
        cout<<"^";
    }
    cout<<""<<endl;

    espaciosDelantes = alturaIngresada - 3;

    for(int i = 1; i <= espaciosDelantes; i++){
        cout<<" ";
    }
    cout<<"Y"<<endl;
}

