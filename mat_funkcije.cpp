#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
int a,b,absa,absb;
double x,y,absx,absy,sqrtx,sqrty,sqrta,sqrtb,cbx,cby,rx,ry,h,maxxy,maxab;
cout<<"Unesi pozitivni cijeli broj a, negativni cijeli broj b, pozitivni realni broj x i negativni realni broj y: ";
cin>>a>>b>>x>>y;
absa=abs(a);
absb=abs(b);
absx=abs(x);
absy=abs(y);
cout<<"|a|="<<absa<<endl<<"|b|="<<absb<<endl<<"|x|="<<absx<<endl<<"|y|="<<absy<<endl;
sqrta=sqrt(a);sqrtb=sqrt(abs(b));sqrtx=sqrt(x);sqrty=sqrt(abs(y));
cout<<"Korijen iz a="<<sqrta<<endl<<"Korijen iz b="<<sqrtb<<"i"<<endl<<"Korijen iz x="<<sqrtx<<endl<<"Korijen iz y="<<sqrty<<"i"<<endl;
cbx=trunc(x);
cby=trunc(y);
cout<<"Cijelobrojni dio broja x = "<<cbx<<endl<<"Cijelobrojni dio broja y = "<<cby<<endl;
rx=round(x);
ry=round(y);
cout<<"x zaokruzen na najblizi cijeli broj="<<rx<<endl<<"y zaokruzen na najblizi cijeli broj="<<ry<<endl;
h=hypot(a,x);
cout<<"Duljina katete pravokutnog trokuta sa stranicama a i x = "<<h<<endl;
maxxy=max(x,y);
maxab=max(a,b);
cout<<"Veci od brojeva a i b = "<<maxab;
cout<<"Veci od brojeva x i y = "<<maxxy;
return 0;
}
