/*

 9) Hacer un programa para ingresar una lista de 10 n�meros,
 luego informar el m�ximo y la posici�n del m�ximo en la lista.
 En caso de �empates� considerar la primera aparici�n.
 Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar� M�ximo 35 Posici�n 7.
 Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20. Se listar� M�ximo 55 Posici�n 7.
 */

#include<iostream>
using namespace std;

int main () {
 int m,n,i,p;

 m=0;

 for (i=0; i< 10; i++) {
    cout <<"Ingresar un numero: ";
    cin>> n;

    if (i==0) {
        m = n;
        p = i+1;
    } else {
    if (n > m) {
        m = n;
        p = i+1;
    }  else {
    if ( n == m) {
        m = n;
    }
    }
    }







 }


cout << "El mayor es: ";
cout << m;
cout << endl;
cout <<"Posicion: ";
cout << p;



return 0;
}
