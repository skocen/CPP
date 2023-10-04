#include <iostream>
using namespace std;
int main() {
int n,k=0;
cout<<"Upisi broj:";
cin>>n;
while (n>0) {
   k++;
   n=n/10;
     }
int p[k];
for (int i=k;i<=0;i--) {
     p[i]=n%10;
     n=n/10;
        }
for (int j=0;j<=k;j++)
    cout<<p[j];
}
