/*
Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo
*/

#include<iostream>
using namespace std;

int main (){
 int n, i, minip, maxn;

 for (i=0; i<10 ; i++) {
     cout <<"Ingrese un numero: ";
     cin >> n;

     if (i == 0){
        minip = n;
                 }

     if (n>0 && n< minip) {
                    minip = n;

     }
        if (n< 0 ) {
        maxn = n;
                }
                if (n < 0 && n> maxn){
                    maxn =n;
                }

     }

 cout << "El maximo de los negativos es: ";
cout << maxn;
cout << endl;
cout <<" El minimo de los postivos es: ";
cout << minip;





return 0;
}
