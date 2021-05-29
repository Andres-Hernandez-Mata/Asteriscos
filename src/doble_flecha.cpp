#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realizar una doble flecha con el vertice apuntando a la derecha. Se pide al usuario la altura de la
    figura, que debe ser un numero impar mayor o igual a 3. La distancia entre cada flecha de asteriscos
    es siempre de 4 espacios. Si la altura introducida por el usuario no es un numero impar mayor o igual
    a 3, el programa debe mostrar un mensaje de error.

    **/

    int altura = 0;
    cout<<"Por favor, introduzca la altura de la figura: ";
    cin>>altura;

    if((altura < 3) || (altura % 2 == 0)){
        cout<<"La altura no es correcta, debe ser un numero impar mayor o igual que 3."<<endl;
    } else {
        cout<<endl;
        for(int i = 0; i < altura / 2; i++){
            for(int j = 0; j < i; j++){
                cout<<" ";
            }
            cout<<"*    *"<<endl;
        }
    }

    for(int i = altura / 2; i >= 0; i--){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        cout<<"*    *"<<endl;
    }

}
