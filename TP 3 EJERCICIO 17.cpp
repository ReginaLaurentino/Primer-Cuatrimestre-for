/*
Hacer un programa para ingresar un n�mero y luego informar todos los divisores pares de ese n�mero.
 Ejemplo 1. Si se ingresa 6 se listar�n: 2 y 6
 Ejemplo 2. Si se ingresa 8 se listar�n: 2 y 4.
  Ejemplo 3. Si se ingresa 11 no se listar� nada.
*/

#include<iostream>
using namespace std;

int main (){
int i, n;

cout <<"Ingresar un numero: ";
cin >> n;
cout<< "Los divisores pares son: ";
for (i=1; i<=n; i++) {

    if (n%i==0){
        if (i%2==0){
            cout <<i;
            cout <<",";
        }
    }
}







return 0;
}
