#include <iostream>
#include <algorithm>
using namespace std;
int main() {
double n[14],a=0,s=0,k;
for (int i=0;i<15;i++){
    cout<<"Upisi realan broj u polje:";
    cin>>n[i];
    s+=n[i];
    k=i+1;
    a=s/k;
    if(a<0)
        break;
    cout<<endl;
}
int x=k;
sort(n,n+x);
reverse(n,n+x);
for (int j=0;j<k;j++) {
    if(n[j]>a)
    cout<<n[j]<<" ";
}
return 0;
}
