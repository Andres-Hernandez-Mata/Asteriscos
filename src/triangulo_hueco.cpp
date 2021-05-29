#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte un triangulo hueco, el usuario debe introducir la altura de la figura.

    Ejemplo:
    *****
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

    for(int i = 1; i < altura - 1; i++){
        cout<<"*";
        for(int j = 0; j < altura - i - 2; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    cout<<"*"<<endl;

}
