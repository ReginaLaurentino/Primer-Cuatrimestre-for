/*
Dada una lista de 7 números informar cual  es el primer y segundo número impar ingresado.
Ejemplo  8, 4, 5, 6, -9, 5,7 se informa 5 y -9.
*/

#include<iostream>
using namespace std;

int main () {

int i, n,p, s, con;

con =0;

for (i= 0; i<7; i++) {
    cout <<" Ingresar un numero: ";
    cin >> n;

    if ( n %2 !=0) {
        con++;
        if ( con ==1) {
        p = n;
    } else {
    if (con == 2) {
        s =n;
    }
    }
    }




}

cout <<" El primero numero impar es: ";
cout << p;
cout << endl;
cout <<"El sgeundo numero impar ingresado es: ";
cout << s;







return 0;
}
