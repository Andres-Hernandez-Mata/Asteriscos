#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte la letra U por pantalla hecha con asteriscos. El programa pedira la altura. Fijate que el programa inserte un espacio y pinta
    dos astericos menos a la base para simular la curvatura de las esquinas inferiores.

    Ejemplo:

    *     *
    *     *
    *     *
    *     *
     * * *

    **/

    int altura = 0;
    cout<<"Introduzca la altura de la U: ";
    cin>>altura;

    for(int i=1; i < altura; i++){
        cout<<"* ";
        for(int j=2; j < altura; j++){
            cout<<"  ";
        }
        cout<<"*"<<endl;
    }
    cout<<"  ";
    for(int i=2; i < altura; i++){
        cout<<"* ";
    }
    return 0;
}
