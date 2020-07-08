/*
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista
 y luego solicitar se ingresen esos N números.
 Se pide informar cuantos son positivos.
 Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará Cantidad de Positivos: 4
 Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará Cantidad de Positivos: 0
*/

#include<iostream>
using namespace std;

int main () {

int i,n,s, p;

cout <<"Ingresar la cantidad de numeros de la lista: ";
cin>> n;

p=0;

for (i=0 ; i<n; i++){
    cout <<" Ingresar numero: ";
    cin >> s;

    if (s >0) {
        p++;
    }


}

cout <<" La cantidad de positivos es: ";
cout << p;







return 0;
}
