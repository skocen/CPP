#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
//sve èije su zadnja i prva jednake, ako je min dvoznamenkasti ppzitivan uèitati 2 broja ispisati sumi svih djeljivih s 5, ako je dvoznmank pozitivan max treba unijeti broj i odrediti je li poesban(sve parne i broj znamenki paran=
int main() {
int n,a,z,x,y,maks=-2147483647,minn=2147483647,d,k=0,t,s=0,l,j=0,m=0;
while (n<2 || n>7) {
      cout<<"Upisi broj od 2 do 7:";
      cin>>n;
}
cout<<endl<<"Upisi znamenku (0-9):";
cin>>z;
for (int i=1;i<=n;i++) {
     cout<<"Unesi broj:";
     cin>>a;
     cout<<endl;
    if (abs(a)>9 && abs(a)<100 && a%2==0) {
    if (a>maks)
        maks=a;
    if (a<minn)
        minn=a;
     }
    t=a;
    while(t>0) {
        k=t%10;
        t=t/10;
    }
    if(k==a%10 && abs(a)>9)
        cout<<"Broj="<<a<<"  Kvadrat="<<a*a<<"  Korijen="<<sqrt(a)<<endl;
}
cout<<endl<<"Minimalni="<<minn<<"  Maksimalni="<<maks;
if (minn>9 && minn<100) {
    cout<<"Upisi x i y (x<y): ";
    cin>>x>>y;
    for (int i=x;i<y;i++){
         if(i%5==0)
            s+=i;
    }
cout<<"Suma svih brojeva djeljivih s 5 na intervalu od x do y="<<s;
}
if (maks>9 && maks<100){
    cout<<"Upisi broj:";
    cin>>l;
    cout<<endl;
    while (l>0) {
        j++;
        if(l%2==0)
            m++;
    }
if (j%2==0 && m==j)
    cout<<l<<" je poseban"<<endl;
}
return 0;
}
