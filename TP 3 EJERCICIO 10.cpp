/*
 Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo y el m�nimo.
 Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
 Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
 Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo -42.
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
