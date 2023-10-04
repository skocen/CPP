#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n[49],k=0;
for (int i=0;i<50;i++) {
    cout<<"Upisi cijeli broj:";
    cin>>n[i];
    if(n[i]==-1)
        break;
    k=i+1;
    cout<<endl;
}
reverse(n,n+k);
cout<<"Ispis polja:";
for (int j=0;j<k;j++)
    cout<<n[j]<<" ";
}
