#include <cstdio>
#include <iostream>
#include <cmath>
int main(){
int n,maxd,mind,bp=0,sp=0,pp=1,x,a,i=1,bd=0;
printf("Unesi broj brojeva:");
scanf("%d",&n);
printf("\n Unesi znamenku:");
scanf("%d",&x);
for (i; i<=n; i++)
printf("\n Unesi broj:");
scanf("%d",&a);
if(a%10==a && a%2==0)
    {
       bp++;
       sp+=a;
       pp*=a;
    }
if(abs(a)>9 && abs(a)<100)
    bd++;
if (bd) {
    maxd=bd;
    mind=bd;
}
if (a>maxd)
    maxd=a;
if(a<mind)
    mind=a;
if (abs(a)%10==x){
    char c=a;
    int kv=a*a;
    double kor=sqrt(a);
    printf("Broj=%d . Kvadrat=%d . Korijen=.2lf . ASCII znak=%c";a,kv,kor,c);

}
return 0;
}
//maskimalan i minimalan dvoznamenkasti, broj jednoznamenkastih parnih,suma,produkt, ispisati svaki broj èija je zadnja znamenka jednaka uèitanoj, kvadrat,korijen,ascii znak
