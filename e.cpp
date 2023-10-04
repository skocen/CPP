#include <cmath>
#include <iostream>
using namespace std;
int main(void){
unsigned long int n=1;
 long double e=0,t;
while (1) {
    t=n;
    e=pow(1+1/t,t);
    cout<<e<<endl;
    n++;
         }
}
