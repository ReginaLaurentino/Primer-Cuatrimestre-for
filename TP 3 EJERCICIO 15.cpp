/*
 Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados,
  aclarando cual es el máximo y cual el que le sigue.
   Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
   Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
   Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4
   */

   #include<iostream>
   using namespace std;
   int main () {
   int i,n,mayor,segundo;
   for (i=0; i<5; i++) {
     cout << "Ingresar numero: ";
     cin>> n;
     if (i==0) {
        mayor =n;
        segundo =n;}
          if (n >= mayor) {
      segundo= mayor;
        mayor = n;
     } else {
        if (n > segundo){
        segundo=n;
      }     }   }
cout <<"El mayor es: ";
cout << mayor;
cout << endl;
cout << "El segundo mayor es: ";
cout<< segundo;






   return 0;
   }
