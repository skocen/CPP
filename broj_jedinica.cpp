#include <iostream>
using namespace std;
int pretvori (int x){
    int bin=0;
    while(x>0) {
        bin=bin*10+x%2;
        x/=2;
    }
    return bin;
}
int broj_jedinica(int x) {
    int broj=0;
    while (x>0) {
        if(x%10==1)
            broj++;
        x=x/10;
    }
  return broj;
}
int main() {
int n,bin,i=1,x,broj=0;
cout<<"Upisi broj brojeva:";
cin>>n;
for (i;i<=n;i++) {
    cout<<endl<<"Upisi "<<i<<". broj:";
    cin>>x;
    bin=pretvori(x);
    broj+=broj_jedinica(bin);
}
cout<<"Broj jedinica="<<broj;
}
