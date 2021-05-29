#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte una escalera que va descendiendo de izquierda a derecha. El
    programa pedira el numero de escalones y la altura de cada escalon. La anchura de los
    escalones siempre es la misma, 4 asteriscos.

    **/

    int escalones = 0;
    cout<<"Introduzca el numero de escalones: ";
    cin>>escalones;

    int altura = 0;
    cout<<"Introduzca la altura de cada escalon: ";
    cin>>altura;

    for(int i = 1; i <= escalones; i++){
        for(int j = 1; j <= altura; j++){
            for(int k = 0; k < i; k++){
                cout<<"****";
            }
            cout<<""<<endl;
        }
    }
}
