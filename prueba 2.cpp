#include <iostream>
using namespace std;
int main(){
    int total,cp,cn,tn,Maxi,Maxp;
    int n,x;

total=0;

cout<<"Ingrese un numero: ";
cin>>n;
cout<<endl;
cp=0;
cn=0;
tn=0;
Maxi=0;
Maxp=0;
while(n!=0){

        if(n%2==0){
           if (Maxp!=0){
            if(n>Maxp){Maxp=n;}
           }else{Maxp=n;}
        }else{
            if(Maxi!=0){
                if(n>Maxi){Maxi=n;}
            }else{Maxi=n;}

        }


     cout<<"Ingrese un numero: ";
     cin>>n;
     cout<<endl;


}
       cout<<"maximo par "<<Maxp<<endl;
        cout<<"maximo impar "<<Maxi<<endl;

return 0;
}
