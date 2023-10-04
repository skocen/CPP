#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n,x[10],maks,minn,imx=0,imn=0,par=0,nep=0,p[10],np[10];
while (n>10 || n%2==0) {
    cout<<"Upisi broj brojeva:";
    cin>>n;
    cout<<endl;
}
for (int i=0;i<n;i++) {
    cout<<"Upisi broj u polje:";
    cin>>x[i];
    if (i==0){
        maks=x[i];
        minn=x[i];
    }
    if (x[i]>maks) {
        maks=x[i];
        imx=i;
    }
    if(x[i]<minn) {
        imn=i;
        minn=x[i];
    }
    if(x[i]%2==0 && x!=0) {
        p[par]=x[i];
        par++;
    }
    if(x[i]%2==1 && x!=0) {
        np[nep]=x[i];
        nep++;
    }

}
cout<<endl<<"Ispis polja:"<<endl;
for (int k=0;k<n;k++)
{
    cout<<x[k]<<"  ";
}
cout<<endl<<"Najveci broj:"<<maks<<"["<<imx<<"]";
cout<<endl<<"Najmanji broj:"<<minn<<"["<<imn<<"]";
cout<<endl<<"Broj parnih razlicitih od nule="<<par;
cout<<endl<<"Polje parnih brojeva:"<<endl;
for (int j=0;j<par;j++)
{
  cout<<"Broj:"<<" "<<p[j]<<"  Kvadrat="<<p[j]*p[j]<<"  Korijen="<<sqrt(abs(p[j]))<<endl;
}
cout<<endl<<"Broj neparnih brojeva:"<<nep;
cout<<endl<<"Polje neparnih brojeva:"<<endl;
for (int j=0;j<nep;j++)
{
  cout<<"Broj:"<<" "<<np[j]<<"  Kvadrat="<<np[j]*np[j]<<"  Korijen="<<sqrt(abs(np[j]))<<endl;
}
}
