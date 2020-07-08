/*
Hacer un programa para que el usuario ingrese dos números y
luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15;
 y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25
 */

#include<iostream>
using namespace std;

int main () {

int i,a, b;

cout <<" Ingrese un numero: ";
cin >> a;
cout <<" Ingrese otro numero: ";
cin >> b;

if (a>b) {
    for (i=b; i>=b && i<=a; i++) {
        cout << i;
        cout << endl;
    }
} else {
 for ( i=a; i>=a && i<=b; i++) {
    cout << i;
    cout << endl;
 }
}






return 0;
}
