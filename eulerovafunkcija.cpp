#include <iostream>
using namespace std;
bool rp(int x, int y) {
    int r;
    while(y!=0) {
        r=x%y;
        x=y;
        y=r;
    }
    if(x==1)
        return 1;
}
int fi(int n) {
    int f=0,i=1;
    for (i;i<n;i++) {
        if(rp(n,i))
           f++;
    }
    return f;
}
int main() {
int n;
cout<<"Upisi broj:";
cin>>n;
cout<<"f("<<n<<")="<<fi(n);
}
