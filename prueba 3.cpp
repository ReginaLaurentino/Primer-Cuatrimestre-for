#include <iostream>
using namespace std;
int main(){
    int total,cp,cn,tn,Maxi,Maxp;
    int n,x,PP,PN;

total=0;
for(x=1;x<=10;x++){
cout<<"Ingrese un numero: ";
cin>>n;
cout<<endl;
cp=cn=tn=Maxi=Maxp=0;
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
        if(n>0){
                cp++;
            }else{cn++;}
            tn++;

     cout<<endl;
     cout<<"Ingrese un numero: ";
     cin>>n;
     cout<<endl;


}
PP = cp * 100 / tn;
PN = cn * 100 / tn;
total+=n;

       cout<<"Subgrupo "<<x<<" :"<<endl;
       cout<<"Maximo par: "<<Maxp<<endl;
        cout<<"Maximo impar: "<<Maxi<<endl;
        cout<<"El porcentaje de positivos del subgrupo es: "<<PP<<endl;
        cout<<"El porcentaje de negativos del subgrupo es: "<<PN<<endl;
}

cout<<"Total de numeros de los 10 subgrupos: "<<total<<endl;

return 0;
}
