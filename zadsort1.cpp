#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
int n,a[100],mx,mn,imx,imn,x,dv[100],idv=0,izn=0,zn[100],bp=0,m,z,j;
char c;
cout<<"Upisi broj brojeva:";
cin>>n;
cout<<endl<<"Upisi znamenku:";
cin>>x;
cout<<endl;
for (int i=0;i<n;i++) {
    cout<<"Upisi broj u polje:";
    cin>>a[i];
    if (abs(a[i])>9 && abs(a[i])<100) {
        dv[idv]=a[i];
        idv++;
    }
    if(abs(a[i])%10==x) {
        zn[izn]=a[i];
        izn++;
    }
    if(a[i]%2==0)
        bp++;
    if(bp==1) {
        mx=a[i];
        mn=a[i];
        imx=i;
        imn=i;
    }
    if(a[i]%2==0 && a[i]>mx) {
        mx=a[i];
        imx=i;
    }
    if(a[i]<mn && a[i]%2==0) {
        mn=a[i];
        imx=i;
    }
}
sort(dv,dv+idv);
sort(zn,zn+izn);
cout<<"Ispis polja:";
for (int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl<<"Najveci paran:"<<mx<<"["<<imx<<"]";
cout<<endl<<"Najmanji paran:"<<mn<<"["<<imn<<"]";
cout<<endl<<"Dvoznamenkasti brojevi:"<<endl;
for (int i=0;i<idv;i++)
    {
    cout<<dv[i]<<" Kvadrat="<<dv[i]*dv[i]<<" Korijen="<<sqrt(abs(dv[i]))<<endl;
}
cout<<"Polje brojeva cija je zadnja znamenka jednaka ucitanoj:"<<endl;
for (int k=0;k<izn;k++) {
    c=zn[k];
    cout<<zn[k]<<" ASCII znak="<<c<<endl;
}
}
