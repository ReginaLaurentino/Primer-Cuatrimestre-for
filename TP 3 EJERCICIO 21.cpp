/*
Dada una lista de 7 n�meros informar el primer n�mero par ingresado y su ubicaci�n en la lista
y el �ltimo de los n�meros primos y su ubicaci�n en la lista.
Ejemplo  7, 4, 5, 6, 9, 13, 10 se informa  Primer n�mero par: 4 ubicaci�n 2. Ultimo primo: 13 ubicaci�n 6.
Ejemplo  9, 5, 21, 9, 13, 15, 6 se informa  Primer n�mero par: 6 ubicaci�n 7. Ultimo primo: 13 ubicaci�n 5
*/
#include<iostream>
using namespace std;

int main () {
int i,e,n, con,con2, primerpar, pos, ultimoprimo,pos2;
con= 0;
con2= 0;
 for (i=0; i<7; i++) {
    cout <<"Ingresar un numero: ";
    cin >> n;
    if (n%2==0) {
            con++;
        if (con==1) {
            primerpar = n;
            pos= i+1;
        }
    }
    for (e=1; e<=n; e++) {
        if (n%e==0) {
            con2++;
        }
    }
    if (con2==2) {
            ultimoprimo=n;
            pos2= i+1;
        }
    con2=0;
 }
cout <<"El primer numero par ingresado es: ";
cout <<primerpar;
cout << endl;
cout <<"Posicion: ";
cout << pos;
cout <<endl;
cout <<"El ultimo numero primo ingresado es: ";
cout<< ultimoprimo;
cout << endl;
cout <<"Posicion: ";
cout <<pos2;



return 0;}
