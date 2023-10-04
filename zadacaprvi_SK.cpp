#include<iostream>
#include<cstdio>
using namespace std;
int main() {
double a,b,c,maxx,minn,midd,raz,rez;
cout<<"Upisi 3 broja: ";
cin>>a>>b>>c;
if (a>b && b>c) {
    maxx=a;
    midd=b;
    minn=c;
           }
else if (b>a && a>c){
    maxx=b;
    midd=a;
    minn=c;
           }
else if (a>c && c>b){
    maxx=a;
    midd=c;
    minn=b;
           }
else if (b>c && c>a){
    maxx=b;
    midd=c;
    minn=a;
           }
else if (c>a && a>b){
    maxx=c;
    midd=a;
    minn=b;
           }
else {
    maxx=c;
    midd=b;
    minn=a;
           }

raz=maxx-minn;
rez=raz/midd;
cout<<rez;
return 0;
}
