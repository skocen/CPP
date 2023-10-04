#include <iostream>
using namespace std;
// u polje ucitati n brojeva, n ne smije biti veci od 10, odrediti i ispisati polje, maksimalan i minimalan dvoznamenkasti i indeks,ispisati sve brojeve koje sadrže ucitani broj i ascii znak
bool dvoznamenkast(int n) {
   int  b=0;
    while(n>0) {
        b++;
        n/=10;
    }
    if(b==2)
        return true;
    else
        return false;
}
bool sadrzi(int n, int x) {
    bool k=0;
    while(n>0) {
        if(n%10==x)
            k=1;
        n/=10;
    }
    if(k)
        return true;
    else
        return false;
}


int main() {
int n=11,x[9], maks, minn, imx, imn, a;
char c;
while(n>10) {
    cout<<"Upisi broj brojeva:";
    cin>>n;
    cout<<endl;
}
for (int i=0;i<n;i++) {
    cout<<"Upisi broj u polje:";
    cin>>x[i];

}
}
