#include <iostream>
#include <cmath>
using namespace std;
int brojznamenki(int n) {
    int bz=0;
    while(n>0) {
        bz++;
        n/=10;
    }
return bz;
}
int main() {
int a[100],b[100],c[9],x,y,bx=0,by=0,w,q;
cout<<"Upisi dva cijela broja:";
cin>>x>>y;
x=abs(x);
y=abs(y);
bx=brojznamenki(x);
by=brojznamenki(y);
if(by>bx)
    swap(bx,by);
for (int i=0;i<100;i++)
  {
      a[i]=x%10;
      b[i]=y%10;
      x/=10;
      y/=10;

  }

cout<<bx;
}
