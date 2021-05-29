#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte por pantalla un rombo hueco con asteriscos. El programa debe pedir la altura. Se debe comprobar que la altura sea un numero impar mayor o igual a 3,
    en caso contrario se debe mostrar un mensaje de error.

    **/

    int alturaIntroducida;
    cout<<"Ingresar la altura del rombo: ";
    cin>>alturaIntroducida;

    int espaciosInternos = 0;
    int espaciosDelantes = alturaIntroducida / 2;

    if((alturaIntroducida < 3) || (alturaIntroducida % 2 == 0)){
        cout<<"Error, datos incorrectos, se debe introducir una altura impar mayor o igual a 3"<<endl;
    } else {
        int altura = 1;

        while(altura <= alturaIntroducida / 2 + 1){
            for(int i = 1; i <= espaciosDelantes; i++){
                cout<<" ";
            }
            cout<<"*";
            for(int i = 1; i < espaciosInternos; i++){
                cout<<" ";
            }
            if(altura>1){
                cout<<"*";
            }
            cout<<""<<endl;
            altura++;
            espaciosDelantes--;
            espaciosInternos+=2;
        }
        espaciosInternos = alturaIntroducida - 3;
        espaciosDelantes = 1;
        altura = 0;

        while(altura < alturaIntroducida / 2){
            for(int i = 1; i <= espaciosDelantes; i++){
                cout<<" ";
            }
            cout<<"*";
            for(int i = 1; i < espaciosInternos; i++){
                cout<<" ";
            }
            if(altura < alturaIntroducida / 2 - 1){
                cout<<"*";
            }
            cout<<""<<endl;
            altura++;
            espaciosDelantes++;
            espaciosInternos-=2;
        }
    }
}
