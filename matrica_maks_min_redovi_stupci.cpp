/* u n*m matricu treba unijeti brojeve, n ne smije biti manji od 2 i veci od 5, m mora biti manji od n. Odrediti i ispisati
polje, maks i min u prvom redu, zadnjem stupcu i indeks, sortirano ispisati sve iz zadnjeg reda, prvog stupca koji su djeljivi s
ucitanim bez ostatka, kvadrat i korijen */
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
int n=1,m=6,dj[5],x,maks[3],minn[3],d=0;
while (n<2 || n>5) {
    cout<<"Upisi broj redova:";
    cin>>n;
    cout<<endl;
}
while (m>n) {
    cout<<"Upisi broj stupaca:";
    cin>>m;
    cout<<endl;
}
int a[n][m];
cout<<"Upisi znamenku:";
cin>>x;
cout<<endl<<"Upisi brojeve u matricu:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
{
    cin>>a[i][j];
    if(i==1 && j==1) {
        maks[0]=a[i][j];
        minn[0]=a[i][j];
    }
    if(a[1][j]>maks[0]) {
        maks[0]=a[i][j];
        maks[2]=j;
    }
    if(a[1][j]<minn[0]) {
        minn[0]=a[i][j];
        minn[2]=j;
    }
    if(a[i][m]>maks[0]) {
        maks[0]=a[i][j];
        maks[1]=i;
        maks[2]=m;
    }
     if(a[i][m]<minn[0]) {
        minn[0]=a[i][j];
        minn[1]=i;
        minn[2]=m;
    }
    if(i==n && a[i][j]%x==0) {
            dj[d]=a[i][j];
            d++;
    }
    if(j==1 && a[i][j]%x==0 && i<n) {
        dj[d]=a[i][j];
        d++;
    }
}
}
sortiraj(dj,d);
cout<<"Polje brojeva djeljivih s "<<x;
for(int i=0;i<d;i++)
    printf("Broj:%d Kvadrat:%d Korijen:%.2lf\n",dj[i],dj[i]*dj[i],sqrt(abs(dj[i])));
return 0;
}
