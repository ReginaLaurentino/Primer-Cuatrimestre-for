/*
Hacer un programa para ingresar una lista de 10 números,
 luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
*/

#include<iostream>
using namespace std;

int main () {
int p,n, c, i;

 p=0;
 n=0;
 c=0;

 for (i=0; i<10; i++) {
    cout <<"Ingrese un numero: ";
    cin>> n;
    if (n>0) {
        p++;
    } else {
    if (n==0){
        c++;
    }
 else {
    n++;
 }    }

 }

 cout <<" La cantidad de positivos es: ";
 cout << p;
 cout << endl;
 cout << "La cantidad de negativos es: ";
 cout << n;
 cout << endl;
 cout << "La cantidad de ceros es : ";
 cout << c;

return 0;
}
