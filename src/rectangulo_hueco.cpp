#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte por pantalla un rectangulo hueco hecho con asteriscos. Se debe pedir al usuario la anchura y la altura. Hay que comprobar
    que tanto la anchura como la altura sean mayores o iguales que 2, en caso contrario se debe mostrar un mensaje de error.

    **/

    int anchura;
    cout<<"Ingresar el ancho del rectangulo (como minimo 2): ";
    cin>>anchura;

    int altura;
    cout<<"Ingresar la altura del rectangulo (como minimo 2): ";
    cin>>altura;

    if((anchura < 2) || (altura < 2)){
        cout<<"Error, datos incorrectos"<<endl;
    } else {
        for(int i = 1; i <= anchura; i++){
            cout<<"*";
        }
        for(int i = 2; i < altura; i++){
            cout<<"\n*";
            for(int espacios = 2; espacios < anchura; espacios++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<""<<endl;
        for(int i = 1; i <= anchura; i++){
            cout<<"*";
        }
    }
}
