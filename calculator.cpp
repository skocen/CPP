//Simple calculator
#include <iostream>
using namespace std;
int main() {
int x,y,r;
char ch;
cout<<"Enter two numbers and an operator: ";
cin >>x>>y>>ch;
if (ch=='+') {
    r=x+y;
    cout<<"Sum="<<r;
    }
else if (ch=='*')
    {
    r=x*y;
    cout<<"Product="<<r;
   }
else if (ch=='-')
    {
    r=x-y;
    cout<<"Difference="<<r;
   }
else if (ch=='/' || ch==':')
    {
    r=x/y;
    cout<<"Quotient="<<r;
    }
else
    cout<<"Wrong operator";
return 0;

}
