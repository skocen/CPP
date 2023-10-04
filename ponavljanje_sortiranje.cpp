//u polje ucitati n brojeva, n<10, odrediti i ispisati polje, sortirano jednoznamenkaste s kvadratima i korijenom, sortirano sve djeljive s ucitanim brojem i ascii znak
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
void sortiraj(int x[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
           if(x[i]>x[j])
              swap(x[i],x[j]);
}
int main(){
int n=11,a[10],jz[10],d[10],bj=0,bd=0,k;
while(n>10){
    cout<<"Upisi broj brojeva:";
    cin>>n;
    cout<<endl;
}
cout<<"Upisi broj s kojim se dijeli:";
cin>>k;
cout<<endl;
for (int i=0;i<n;i++){
    cout<<"Upisi broj u polje:";
    cin>>a[i];
    if(abs(a[i])<10){
        jz[bj]=a[i];
        bj++;
    }
    if(a[i]%k==0){
        d[bd]=a[i];
        bd++;
    }
}
cout<<"Ispis polja:";
for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
sortiraj(a,n);
cout<<"Sortirano polje:";
for (int i=0;i<n;i++)
     cout<<a[i]<<" ";
sortiraj (jz,bj);
cout<<endl<<"Polje jednoznamenkastih brojeva, kvadrat i korijen:"<<endl;
for (int i=0;i<bj;i++)
    printf("%d %d %.2lf\n",jz[i],jz[i]*jz[i],sqrt(abs(jz[i])));
sortiraj(d,bd);
cout<<endl<<"Brojevi djeljivi s "<<k<<endl;
for (int i=0;i<bd;i++){
    char c=d[i];
    cout<<d[i]<<" "<<c<<endl;
}
return 0;
}
