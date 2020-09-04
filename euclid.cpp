//My implementation of the Euclidean algorithm for finding the greatest common divisor
#include <iostream>
using namespace std;
int euclid (int x, int y)
{
    int z,w,k;
    if (x>y)
        swap(x,y);
    k=x;
    w=y;
    while(z!=0)
    {
        z=k%w;
        k=w;
        w=z;
    }
return k;
}
int main()
{
    int x,y;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    cout<<"Greatest common divisor: "<<euclid(x,y);
    return 0;
}
