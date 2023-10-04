#include <iostream>
using namespace std;
int produkt (int n){
    int rez=1;
    for (int i=1;i<=n;i++)
        rez*=i;
    return rez;
}
int main() {
int x,p;
cout<<"Unesi broj:";
cin>>x;
p=produkt(x);
cout<<endl<<"Produkt prvih "<<x<<" brojeva="<<p;
}
