#include <iostream>
using namespace std;
int main() {
int n;
bool b;
cout<<"Unesi jedan prirodni broj:";
cin>>n;
int zn=n%10;
if (zn%2==0)
    b=true;
else
    b=false;
switch (zn) {
    case 0: {
              cout<<"Broj je djeljiv s 10";
              break;
              }
    case 5: {
              cout<<"Broj je djeljiv s 5";
               break;
            }
}
switch (b) {
         case true: {
             cout<<"Broj je djeljiv s 2";
              break;
         }
         case false: {
             cout<<"Broj je neparan";
             break;
                 }
}
return 0;
}
