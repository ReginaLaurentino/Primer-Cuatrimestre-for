#include <iostream>
using namespace std;
int main(){

int n;

 cout << "Ingrese los numeros para evaluar si son primos, y si estan en orden creciente:" << endl;

cin >> n;

 while (n > 0) {

    int primos =0;
    int ultimoPrimo=0;

   while (n != 0){

     int divisores=0;

      for (int i=1; i<=n; i++){
        if (n % i == 0){
            divisores++;
        }
      }

      if(divisores == 2 && n > ultimoPrimo) {
        primos++;
        ultimoPrimo = n;
      }
      else if(primos < 4) {
        primos = 0;
      }

      cin >> n;
   }

   cout << "Hubieron " << primos << " Primos consecutivos" << endl;

   cin >> n;
 }




return 0;
}
