#include <iostream>
using namespace std;
int main() {
int a,s=0,p=1,n=0;
while(1) {
cout<<"Upisi broj:";
cin>>a;
if (!a)
    break;
if(a%2==0)
   s+=a;
else
    p*=a;
if(a%3==0)
   n++;
}
cout<<endl<<"Suma parnih="<<s<<"  Produkt neparnih="<<p<<"  Broj djeljivih s 3="<<n;
return 0;
}
