#include <iostream>
using namespace std;
int okreni(int x) {
    int k=0;
    while(x>0) {
        k=k*10+x%10;
        x/=10;
    }
    return k;
}
int main() {
int a,b,c;
cout<<"Upisi tri broja:";
cin>>a>>b>>c;
cout<<okreni(okreni(a)+okreni(b)+okreni(c));
}
