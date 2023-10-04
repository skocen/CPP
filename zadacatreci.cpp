#include<iostream>
#include<cstdio>
using namespace std;
int main() {
int x,y;
cout<<"Upisi dva cijela broja: ";
cin>>x>>y;
if (x%2==0 && y%2==0)
    {
    if(x>y)
        cout<<x/y;
    else
        cout<<y/x;
    }
else if (x%2==1 && y%2==1) {
    if(x>y)
        cout<<x-y;
    else
        cout<<y-x;
    }
else
    cout<<x+y;
return 0;
}
