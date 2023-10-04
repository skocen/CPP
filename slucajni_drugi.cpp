#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
int main() {
int x=0,a;
srand(time(NULL));
for (int i=0;i<10;i++) {
    a=rand()%100;
    if(a>100)
        a-=100;
    if (a<10)
        a+=10;
    cout<<a<<endl;
    if(a>x)
        x=a;

}
if (x%2==0)
    cout<<"Najveci parni broj je:"<<x;
else
    cout<<"Nema najveceg parnog broja";
return 0;
}
