#include <iostream>
using namespace std;
int main() {
int a,b;
char c;
cout<<"Upisi dva broja i operator (+,-,*,/): ";
cin>>a>>b>>c;
switch(c){
   case  '+': {
            int suma=a+b;
            cout<<"Suma="<<suma;
            break;
               }
    case '-': {
               int raz=a-b;
               cout<<"Razlika="<<raz;
               break;
              }
    case '*': {
             int u=a*b;
             cout<<"Umnozak="<<u;
             break;
             }
    case '/': {
             double a1=a;
             double b1=b;
             double k=a1/b1;
             cout<<"Kvocijent="<<k;
             break;
             }
    default : {
            cout<<"Pogresni operator";
            }
      }
return 0;
}
