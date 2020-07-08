/*
 Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
 Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
 Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
 Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
 */

#include<iostream>
using namespace std;

int main () {
 int mayor,menor, i,n;

 for (i=0; i<10; i++) {
     cout <<"Ingresar un numero: ";
     cin >> n;

     if (i==0) {
        mayor =n;
        menor= n;
     }

    if ( n>= mayor) {
        mayor = n;
    } else {
    if ( n< menor) {
        menor = n;
    }
    }

 }
 cout << "El mayor es: ";
 cout << mayor;
 cout << endl;
 cout << "El menor es: ";
 cout << menor;






return 0;
}
