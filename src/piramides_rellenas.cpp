#include <iostream>
using namespace std;

int main(){

    /** BUCLES

    Realiza un programa que pinte dos piramides rellenas hechas con asteriscos, una al lado de la otra y separadas por un espacio en su base.

    Ejemplo:

        *
       * *        *
      * * *      * *
     * * * *    * * *
    * * * * *  * * * *

    **/

    int altura1;
    cout<<"Introduzca la altura de la primera piramide: ";
    cin>>altura1;

    int altura2;
    cout<<"Introduzca la altura de la segunda piramide: ";
    cin>>altura2;

    int altura_maxima = max(altura1, altura2);
    int espacio1 = altura1 - 1;
    int espacio2 = altura2 - 1;
    int base1 = altura1 * 2 - 1;
    int base2 = altura2 * 2 - 1;
    int asteriscos1 = 1;
    int asteriscos2 = 1;

    for(int i = altura_maxima; i > 0; i--){
        /** Piramide 1 **/
        if(i > altura1){
            for(int j = 0; j <= base1; j++){
                cout<<" ";
            }
        } else {
            /** Espacios Adelante de la Piramide 1 **/
            for(int j = 0; j < espacio1; j++){
                cout<<" ";
            }
            for(int j = 0; j < asteriscos1; j++){
                cout<<"*";
            }
            /** Espacios Detras de la Piramide 1 **/
            for(int j = 0; j <= espacio1; j++){
                cout<<" ";
            }
            espacio1--;
            asteriscos1+=2;
        }
        /** Piramide 2 **/
        if(i > altura2){
            for(int j = 0; j < base2; j++){
                cout<<" ";
            }
        } else {
            /** Espacios Adelante de la Piramide 2 **/
            for(int j = 0; j < espacio2; j++){
                cout<<" ";
            }
            for(int j = 0; j < asteriscos2; j++){
                cout<<"*";
            }
            /** Espacios Detras de la Piramide 2 **/
            for(int j = 0; j <= espacio1; j++){
                cout<<" ";
            }
            espacio2--;
            asteriscos2+=2;
        }
        cout<<""<<endl;
    }

}
