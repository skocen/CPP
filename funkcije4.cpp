#include <iostream>
using namespace std;
double sredina(int a, int b)
{
    double k=a;
    return (k+b)/2;
}
int main() {
int x,y;
double s;
cout<<"Upisi dva broja:";
cin>>x>>y;
s=sredina(x,y);
cout<<"Aritmeticka sredina brojeva="<<s;
return 0;
}
