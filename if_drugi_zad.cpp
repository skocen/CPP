#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    double a,b,s,p;
    cin>>a>>b;
    if (a>b){
        cout<<"Prvi broj je veci i iznosi "<<a<<endl;
        s=a+b;
        printf("Suma=%.2f",s);
    }
    if(b>a){
        cout<<"Drugi broj je veci i iznosi "<<b<<endl;
        p=a*b;
        printf("Produkt=%.2f",p);
    }
    if(a==b)
        cout<<a<<"="<<b;
return 0;
}
