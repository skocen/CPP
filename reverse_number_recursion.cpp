//Reverse entered number recursion
#include <iostream>
using namespace std;
void reverse(int x)
{
    cout<<x%10;
    if (x/10>0)
        reverse(x/10);
}
int main() {
int n;
cout<<"Input a number:";
cin>>n;
cout<<endl<<"Reversed number:";
reverse(n);
}
