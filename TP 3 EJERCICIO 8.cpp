/*
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55
*/

#include<iostream>
using namespace std;

int main () {
int m,n,i;

m=0;

for ( i=0; i < 10; i++) {
    cout <<"Ingresar un numero: ";
    cin >> n;

    if (n>m) {
        m = n;
    }
}

cout << "El mayor es : ";
cout << m;





return 0;
}
