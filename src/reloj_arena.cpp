#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte un reloj de arena relleno hecho de asteriscos. El programa debe pedir la altura. Se debe comprobar que la altura sea un
    numero impar mayor o igual a 3, en caso contrario se debe mostrar un mensaje de error.

    **/

    int alturaIntroducida;
    cout<<"Ingresar la altura del reloj de arena: ";
    cin>>alturaIntroducida;

    int altura = 1;
    int asteriscos = alturaIntroducida;
    int esoaciosDelantes = 0;

    if((alturaIntroducida < 3) || (alturaIntroducida % 2 == 0)){
        cout<<"Error, datos incorrectos, debe introducir una altura impar mayor o igual a 3"<<endl;
    } else {
        while(altura < alturaIntroducida / 2 + 1){
            for(int i = 1; i <= esoaciosDelantes; i++){
                cout<<" ";
            }
            for(int i = 0; i < asteriscos; i++){
                cout<<"*";
            }
            cout<<""<<endl;
            altura++;
            esoaciosDelantes++;
            asteriscos -= 2;
        }
        esoaciosDelantes = alturaIntroducida / 2;
        altura = 1;
        while(altura <= alturaIntroducida / 2 + 1){
            for(int i = 1; i <= esoaciosDelantes; i++){
                cout<<" ";
            }
            for(int i = 0; i < asteriscos; i++){
                cout<<"*";
            }
            cout<<""<<endl;
            altura++;
            esoaciosDelantes--;
            asteriscos += 2;
        }
    }
}
