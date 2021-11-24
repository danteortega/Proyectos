#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

    const int renglones = 4;
    const int columnas = 4;
    float matriz[renglones][columnas];
    bool comprobacion = true;

    for (int i=0; i < renglones; i=i+1){
        for (int j=0; j < columnas; j=j+1){

            cout << "Ingresa el valor: ";
            cin >> matriz[i][j];

        }


    }
    for (int i=0; i < renglones; i=i+1){
        for (int j=0; j < columnas; j=j+1){

            if(matriz[i][j] != matriz[i][j]){
                comprobacion = false;
            
        }


    }
    if (comprobacion == false){
        cout << "Matriz no es simetrica ";
    }
    else {
        cout << "Matriz es simetrica ";
    }
        
    return 0;
}
}