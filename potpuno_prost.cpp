#include <iostream>
using namespace std;
int main() {
int n,k,i=2,b=0,t=1;
cout<<"Upisi broj:";
cin>>n;
while(n>0) {
        k=n%10;
        for(i;i<=k;i++) {
            if(k%i==0)
               b++;
         }
         if(b==1)
            t--;

    n=n/10;
        }
if (t==1)
    cout<<"Broj je potpuno prost"<<endl;
else
   cout<<"Broj nije potpuno prost"<<endl;
return 0;
}
