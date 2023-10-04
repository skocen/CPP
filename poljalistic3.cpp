#include <iostream>
using namespace std;
int main() {
int sp=0,pn=1,n[9],bn=0;
for (int i=0;i<10;i++){
    cout<<"Upisi prirodan broj u polje:";
    cin>>n[i];
    if(n[i]%2==0)
        sp+=n[i];
    else {
        pn*=n[i];
        bn++;
    }
    if(sp>pn && bn!=0)
        break;
}
}
