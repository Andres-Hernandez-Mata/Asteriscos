#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte un triangulo hueco tal como se muestra en el ejemplo, el usuario debe introducir la altura de la figura

    Ejemplo:

    *******
     *    *
      *   *
       *  *
        * *
         **
          *

    **/

    int altura;
    cout<<"Introduzca la altura de la figura: ";
    cin>>altura;

    for(int i = 0; i < altura; i++){
        cout<<"*";
    }
    cout<<""<<endl;

    int espacios = 1;
    for(int i = 1; i < altura - 1; i++){
        for(int j = 0; j < espacios; j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j = 0; j < altura - i - 2; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
        espacios++;
    }

    for(int i = 0; i < espacios; i++){
        cout<<" ";
    }
    cout<<"*"<<endl;
}
