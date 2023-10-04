#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
int n;
cout<<"Upisi troznamenkasti broj:";
cin>>n;
int zj=n%10;
int zs=n/100;
int zd=(n/10)%10;
int o=n%4;
switch (o) {
    case 0: {
            int suma=zj+zs+zd;
            cout<<"Suma="<<suma;
            break;
            }
    case 1: {
            int u=zj*zs*zd;
            cout<<"Umnozak="<<u;
            }
    case 2: {
            double ar=(zj+zd+zs);
            break;
            }
    case 3: {
           double a=1/3;
           double gs=pow(zj*zs*zd,a);
           cout<<"Geometrijska sredina="<<gs;
           break;
           }
    }
return 0;
}
