#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte una piramide maya. Por los lados, se trata de una piramide normal y corriente. Por el centro
    se van pintando lineas de asteriscos de forma alterna (empezando por la superior): la primera se pinta, la segunda no, la
    tercera si, la cuarta no, etc. La terraza de la piramide siempre tiene 6 asteriscos, por tanto, las lineas centrales que se
    añaden a la piramide normal tiene 4 asteriscos. El programa pedira la altura. Se supone que el usuario introducira un numero
    entero mayor o igual a 3; no es necesario comprobar los datos de entrada.

    **/

    int altura = 0;
    cout<<"Introduzca la altura de la piramide maya: ";
    cin>>altura;

    int planta = 1;
    int longitud = 1;
    int espacios = altura - 1;

    while(planta <= altura){
        /** Izquierda **/
        for(int i = 1; i <= espacios; i++){
            cout<<" ";
        }
        for(int i = 0; i <= longitud / 2; i++){
            cout<<"*";
        }
        /** Centro **/
        if(planta % 2 == 1){
            cout<<"****";
        } else {
            cout<<"    ";
        }
        /** Derecha **/
        for(int i = 0; i <= longitud / 2; i++){
            cout<<"*";
        }
        cout<<""<<endl;
        planta++;
        espacios--;
        longitud+=2;
    }
}
