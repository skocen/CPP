#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n,k,b=0,t=0;
cout<<"Upisi broj:";
cin>>n;
n=abs(n);
while (n>0 )
    {
     b++;
     k=n%10;
     if(k%2==0)
        t++;
      n/=10;
    }
if (t==b && b%2==0)
    cout<<"Broj je poseban";
else
   cout<<"Broj nije poseban";
return 0;
}
