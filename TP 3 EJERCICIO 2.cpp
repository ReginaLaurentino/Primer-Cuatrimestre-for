/*
 Hacer un programa para mostrar por pantalla los n�meros del 1 al 20 salteando de a 3 elementos.
  Es decir: 1, 4, 7, 10, 13, 16, 19. Importante: El programa no tiene ning�n ingreso de datos
  */

  #include<iostream>
  using namespace std;

  int main () {

 int i,n;
 n= 1;

 for ( i=0; n<=20; i++){
    cout<< n;
    n+=3;
    cout<< endl;
 }






  return 0;
  }
