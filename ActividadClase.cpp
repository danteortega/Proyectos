#include <iostream>
using namespace std;
int main(){
//Variables
 string nombre;
 int ventas_al_mes;
 float comision;
 string mayor;
 string menor;
 float ventas_mayor;
 float ventas_menor;
 int i; 
 double ventas_al_mes, comision, ventas_mayor, ventas_menor;

 //Inicializar los valores
 ventas_mayor = -1;
 ventas_menor = 1000000.0;

//Proceso
for (i = 1; i<20; i++){
cout << "Ingrese el nombre del empleado: "<<endl;
cin >> nombre;
cout << "Ingrese las ventas del vendedor: "<<endl;
cin ventas_al_mes;
if (ventas_al_mes < 2000){
    comision = 200;
}
else {
    comision = ventas_al_mes * 0.15;
}
if (ventas_mayor < ventas_al_mes)  
    {
        ventas_mayor = ventas_al_mes;
        mayor = nombre;
    }
if (ventas_menor > ventas_al_mes)
    {
        ventas_menor = ventas_al_mes;
        menor = nombre; 
    }

cout << "La comisión de "<<nombre << "es"<<comision <<endl;
}
cout << "La persona con más ventas es" <<mayor <<"."<<endl;
cout << "La persona con menor ventas es"<<menor << "."<<endl;
}