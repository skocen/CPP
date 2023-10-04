#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
int n,sp=0,sn=0,bp=0,bn=0,pp=1,pn=1,d,a,kva,i=1;
double kor;
cout<<"Upisi koliko brojeva zelis ucitati:";
cin>>n;
cout<<"Upisi broj s kojim provjeravas djeljivost:";
cin>>d;
for (i;i<=n;i++){
    cout<<"Upisi broj:";
    cin>>a;
    if(!(a%2))
       {
        bp++;sp+=a;pp*=a;
       }
    else
      {
       bn++;sn+=a;pn*=a;
      }
    if(!(a%d)) {
        kor=sqrt(a);
        kva=a*a;
        printf("Broj=%d  Kvadrat=%d  Korijen=%.2lf \n",a,kva,kor);
       }
    }
if (bp==0)
    pp=0;
if (bn==0)
    pn=0;
cout<<"Broj parnih="<<bp<<endl<<"Suma parnih="<<sp<<endl<<"Produkt parnih="<<pp<<endl<<"Broj neparnih="<<bn<<endl<<"Suma neparnih="<<sn<<endl<<"Produkt neparnih="<<pn<<endl;
return 0;
}
