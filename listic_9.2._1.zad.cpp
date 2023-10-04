#include <iostream>
using namespace std;
int main() {
int n,k=0,s=0;
while (n%3!=0) {
    cout<<"Upisi broj:";
    cin>>n;
    cout<<endl;
    s+=n;
    k++;
}
cout<<"Uneseno je "<<k<<" brojeva.  Zbroj brojeva="<<s<<endl;
return 0;
}
