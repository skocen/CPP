#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
int main() {
int x=10000,a;
srand(time(NULL));
for (int i=0;i<5;i++) {
    a=rand()%1000;
    if(a<100)
        a=a+100;
    cout<<a<<endl;
    if(a<x)
        x=a;

}
if (x%2==1)
    cout<<"Najmanji neparni broj je:"<<x;
else
    cout<<"Nema najmanjeg neparnog broja";
return 0;
}
