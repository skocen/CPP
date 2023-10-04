// Ucitati n brojeva, n ne smije biti manji od 2 veci od 7, odrediti i ispisati polje, minimalan i maksimalan s idenskom, sve pozitivne s kvadratima i korijenima, sve negativne s ascii znakom
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
int n,br[7],poz[7],neg[7],minn,maks,imin,imks,p=0,ne=0;
char c;
while (n<2 || n>7) {
cout<<"Upisi broj brojeva (2-7):";
cin>>n;
cout<<endl;
}
for (int i=0;i<n;i++) {
    cout<<"Upisi broj u polje:";
    cin>>br[i];
    cout<<endl;
    if (i==0) {
        minn=br[i];
        maks=br[i];
        imin=i;
        imks=i;
    }
    if(br[i]>maks){
        maks=br[i];
        imks=i;
    }
    if(br[i]<minn){
        minn=br[i];
        imin=i;
    }
    if(br[i]>0){
        poz[p]=br[i];
        p++;
    }
     if(br[i]<0){
        neg[ne]=br[i];
        ne++;
    }

}
cout<<"Ispis polja:";
for (int i=0;i<n;i++)
    cout<<br[i]<<" ";
cout<<endl<<"Maksimalan:"<<maks<<"["<<imks<<"]";
cout<<endl<<"Minimalan:"<<minn<<"["<<imin<<"]";
cout<<endl<<"Svi pozitivni brojevi s pripadajucim kvadratom i korijenom:"<<endl;
if (p>0){
for (int i=0;i<p;i++){
    cout<<"Broj:"<<poz[i]<<" Kvadrat:"<<poz[i]*poz[i]<<" Korijen:";
    printf("%.2lf",sqrt(poz[i]));
    cout<<endl;
}
cout<<endl<<"Svi negativni brojevi s pripadajucim ASCII znakom:"<<endl;
}
for (int i=0;i<ne;i++) {
    c=abs(neg[i]);
    cout<<"Broj:"<<neg[i]<<" ASCII znak:"<<c<<endl;
}
return 0;
}
