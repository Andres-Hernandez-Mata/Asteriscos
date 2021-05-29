#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Escribe un programa que pinte por pantalla un par de calcetines, de los que se ponen al lado del arbol de navidad, el usuario debe introducir
    la altura, supongamos que el usuario introduce una altura mayor o igual a 4, observa que la talla de los calcetines y la distancia que hay entre
    ellos (dos espacios) no cambia, lo unico que varia es la altura.

    **/

    int altura;
    cout<<"Introduzca la altura de los calcetines: ";
    cin>>altura;

    for(int i = 0; i < altura - 2; i++){
        cout<<"***     ***"<<endl;
    }

    for(int i = 0; i < 2; i++){
        cout<<"******  ******"<<endl;
    }
}
