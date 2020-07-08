#include<iostream>
using namespace std;

int main () {

int maxp=0, maxi=0, tn=0, p1=0, p2=0, n, i;

for (i=0; i<6; i++){
cout <<"Ingresa un numero: ";
cin >> n;

if (n!=0){
   if (maxp!=0) {
    if (n > maxp) {
        maxp=n;}
     else
    maxp=n; }
 else
if ( maxi!=0) {
    if (n> maxi){
        maxi=0;}
    else {  maxi=n;}}
}

    tn+=n;




}

cout << "mayor par" <<maxp;
cout <<" mayor impar" << maxi;
cout <<"total"<< tn;






return 0;
}
