#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n,s=0,p=1;
cout<<"Upisi broj:";
cin>>n;
n=abs(n);
while (n>0 ) {
    s+=n%10;
    p*=n%10;
    n/=10;
}
if(s==p)
   cout<<"Suma i produkt znamenki su jednaki";
else
   cout<<"Suma i produkt znamenki su razliciti";
return 0;
}
