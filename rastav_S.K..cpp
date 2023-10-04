#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,k,j=2;
cout<<"Unesite broj: ";
cin>>a;
a=abs(a);
cout<<"Broj "<<a<<" rastavljen na proste faktore: ";
if(a==1)
    cout<<1;
else
  {
    for(j;j<=a;j++)
    {
        k=a%j;
        while(k==0){
                cout<<j<<" ";
                a/=j;
                k=a%j;
                }
      }
   }
return 0;
}

// Sebastijan Kocen
