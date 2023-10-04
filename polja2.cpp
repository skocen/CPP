#include <iostream>
using namespace std;
int main() {
int a[10],b[10],c[10],n,v=0,m=0;
while (n<2 || n>7) {
       cout<<"Upisi broj brojeva:";
       cin>>n;
       cout<<endl;
}
for (int i=0;i<n;i++) {
    cout<<"Upisi broj:";
    cin>>a[i];
    cout<<endl;
    if(a[i]>0) {
        b[v]=a[i];
        v++;
    }
    else
    {
        c[m]=a[i];
        m++;
    }
}
for (int i=0;i<n;i++) {

}
}
