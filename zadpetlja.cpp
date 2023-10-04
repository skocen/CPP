#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,maxd,mind,bp=0,sp=0,pp=1,x,a,i=1,bd=0,kor,kv;
char c;
cout<<"Unesi broj brojeva:";
cin>>n;
cout<<endl<<"Unesi znamenku:";
cin>>x;
for (i; i<=n; i++)
cout<<endl<<"Unesi broj:";
cin>>a;
if(a%10==a && a%2==0)
    {
       bp++;
       sp+=a;
       pp*=a;
    }
if(abs(a)>9 && abs(a)<100)
    bd++;
if (bd==1) {
    maxd=bd;
    mind=bd;
}
if (a>maxd)
    maxd=a;
if(a<mind)
    mind=a;
if (abs(a)%10==x){
    c=a;
    kv=a*a;
    kor=sqrt(a);
    printf("Broj=%d . Kvadrat=%d . Korijen=.2lf . ASCII znak=%c";a,kv,kor,c);

}
return 0;
}
//maskimalan i minimalan dvoznamenkasti, broj jednoznamenkastih parnih,suma,produkt, ispisati svaki broj èija je zadnja znamenka jednaka uèitanoj, kvadrat,korijen,ascii znak
