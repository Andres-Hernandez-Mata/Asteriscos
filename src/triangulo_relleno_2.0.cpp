#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte un triangulo relleno tal como se muestra en el ejemplo, el usuario debe introducir la altura de la figura.

    Ejemplo:

    *******
     ******
      *****
       ****
        ***
         **
          *

    **/

    int altura;
    cout<<"Introduzca la altura de la figura: ";
    cin>>altura;

    int espacios = 0;

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < espacios; j++){
            cout<<" ";
        }
        for(int j = 0; j < altura - i; j++){
            cout<<"*";
        }
        cout<<""<<endl;
        espacios++;
    }
}
