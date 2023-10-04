#include <iostream>
using namespace std;
int suma(int n) {
    return n*(n+1)/2;
}
int main() {
int x,z;
cout<<"Unesi prirodan broj:";
cin>>x;
z=suma(x);
cout<<endl<<"Suma prvih "<<x<<" prirodnih brojeva="<<z;
}
