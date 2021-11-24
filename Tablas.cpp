#include <iostream>
using namespace std;
int main (){
    int numero;
    double tabla[10];

    cout << "¿Qué tabla del 1 al 10 deseas desplegar?";
    cin >> numero;

    for (int i=1; i<=10; i++) 
    {
        cout << numero <<"x"<<numero * i<<endl; 
    }

    return 0;
}