/*
 Hacer un programa para ingresar un n�mero y luego informar la cantidad de divisores de ese n�mero.
 Ejemplo 1. Si se ingresa 6 se listar�n: 4 divisores.
  Ejemplo 2. Si se ingresa 9 se listar�n: 3 divisores.
  Ejemplo 3. Si se ingresa 11 se listar�: 2 divisores.
*/

#include<iostream>
using namespace std;

int main () {
int i,n, con;

con=0;

cout <<" Ingresar un numero: ";
cin >>n;

for (i=1; i<=n; i++) {
    if ( n%i==0){
        con++;
    }


}
 cout <<" La cantidad de diviores es: ";
 cout << con;






return 0;
}
