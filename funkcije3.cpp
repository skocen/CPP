#include <iostream>
using namespace std;
int parni(int a)
 {
     int suma=0;
     for (int i=0;i<a;i=i+2)
        suma+=i;
     return suma;
 }
 int neparni (int b)
 {
     int produkt=1;
     for (int i=1;i<b;i=i+2)
        produkt*=i;
     return produkt;
 }
 int main() {
 int x,p,n;
 cout<<"Upisi broj:";
 cin>>x;
 p=parni(x);
 n=neparni(x);
 cout<<endl<<"Suma parnih brojeva manjih od "<<x<<"="<<p<<endl<<"Produkt neparnih brojeva manjih od "<<x<<"="<<n;
 return 0;
 }
