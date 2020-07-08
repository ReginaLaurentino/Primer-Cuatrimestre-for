/*
 Dada una lista de 7 números informar cual es el primer y último número impar ingresado.
 Ejemplo  8, 4, -5, 6, 9, 5, 18 se informa -5 y 5.
 */

#include<iostream>
using namespace std;

int main () {
int i, n, p, u, con;
con=0;

for (i=0; i<7; i++) {
    cout <<"Ingresar un numero: ";
    cin>> n;

    if ( n%2 !=0) {
        con++;
        if( con == 1){
            p= n;
        } else {
        u=n;
        }
    }

}

cout <<"El primer par ingresado es: ";
cout << p;
cout << endl;
cout <<"El ultimo par ingresado es: ";
cout << u;










return 0;
}
