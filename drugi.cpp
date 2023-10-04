#include <cmath>
#include <iostream>
using namespace std;
bool provjera(double x) {
    double k=trunc(x);
    if (k==x)
        return true;
    else
        return false;
}
int djelitelji(int n) {
    for (int i=1;i<n;i++){
        if(n%i==0)
            cout<<i<<endl;
    }
    return n;
}

int main() {
double n;
cout<<"Upisi broj:";
cin>>n;
if(provjera(n)) {
    int k=n;
    cout<<djelitelji(k);
    }
else
    cout<<"GRESKA";
return 0;
}
