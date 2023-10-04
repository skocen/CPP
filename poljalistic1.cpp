#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    double n[9],a=0,s=0,k=0;
        for(int i=0;i<10;i++){
        cout<<"Upisi broj u polje:";
        cin>>n[i];
        s+=n[i];
        if(n[i]==0)
            break;
        k=i+1;
        cout<<endl;
        }
    int x=k;
    a=s/k;
    sort(n,n+x);
    for (int j=0;j<x;j++) {
         if(n[j]<a)
            cout<<n[j]<<" ";
    }
return 0;
}
