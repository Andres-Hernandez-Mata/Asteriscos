#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Escribe un programa que pinte por pantalla la letra A. El usuario debe introducir la altura total y la fila en la que debe aparecer el palito
    horizontal (contando desde el vertice). La altura minima es de 3 pisos. La fila donde va el palito horizontal debe ser mayor que 1 y menor que
    la altura total. Si el usuario introduce algun dato incorrecto, el programa debe mostrar un mensaje de error.

    **/

    int altura;
    cout<<"Introduzca la altura de la A (un numero mayor o igual a 3): ";
    cin>>altura;

    if(altura < 3){
        cout<<"La altura introducida no es correcta"<<endl;
    } else {
        int palito;
        cout<<"Introduzca la fila del palito horizontal (entre 2 y "<<altura - 1<<"): ";
        cin>>palito;

        if((palito < 2) || (palito >= altura)){
            cout<<"La fila introducida no es correcta"<<endl;
        } else {
            int espaciosIzp = altura - 1;
            int espaciosCen = 1;

            for(int fila = 1; fila <= altura; fila++){
                espaciosIzp--;
                for(int i = 0; i <= espaciosIzp; i++){
                    cout<<" ";
                }
                cout<<"*";
                if(fila > 1){
                    if(fila == palito){
                        for(int i = 0; i < espaciosCen; i++){
                            cout<<"*";
                        }
                    } else {
                        for(int i = 0; i < espaciosCen; i++){
                            cout<<" ";
                        }
                    }
                    espaciosCen+=2;
                    cout<<"*";
                }
                cout<<""<<endl;
            }
        }
    }
}
