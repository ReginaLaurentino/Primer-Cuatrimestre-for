/*
Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente.
 En caso de haber dos números “empatados” considerarlos como crecientes.
 Por ejemplo si la lista fuera: Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
 Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
 Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado

 */

#include<iostream>
using namespace std;

int main () {
int i, con, n, mayor;

con = 0;

for ( i=0; i<8; i++) {
    cout <<"Ingrese un numero: ";
    cin>> n;

    if (i== 0) {
        mayor = n;
    }
    if ( n>= mayor) {
            mayor =n;
        con++;
    }
}

if (con== 8) {
    cout <<" Conjunto Ordenado";
}
 else {
    cout <<"Conjunto No ordenado";
 }



return 0;
}
