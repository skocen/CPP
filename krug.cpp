#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
char c;
double r,pi=3.1415926535897932;
cout<<"Upisi radijus kruga:";
cin>>r;
cout<<"Upisi znak o ili p:";
cin>>c;
switch (c){
    case 'o': {
               double o=2*r*pi;
               printf("Opseg=%.2lf",o);
               break;
              }
    case 'p':{
             double p=r*r*pi;
             printf("Povrsina=%.2lf",p);
             break;
            }
    default:  {
              cout<<"Pogresan unos";
              break;
              }
}
return 0;
}
