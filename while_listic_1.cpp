#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n,s=0;
cout<<"Upisi broj:";
cin>>n;
n=abs(n);
while (n>0 ) {
    s+=n%10;
    n/=10;
}
cout<<endl<<"Zbroj znamenki="<<s;
return 0;
}
