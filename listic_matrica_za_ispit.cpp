#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
bool sadrzi(int x, int z) {
    x=abs(x);
    while(x>0) {
        if(x%10==z)
            return true;
        x/=10;
    }
}
bool dv(int x)
{
    x=abs(x);
    if(x>9 && x>100)
        return true;
}
int main(){
int n,z,k;
bool t=1;
while(n<2 || n>5) {
    cout<<"Unesi dimenziju kvadratne matrice(2-5):";
    cin>>n;
    cout<<endl;
}
cout<<"Upisi znamenku:";
cin>>z;
int a[n][n],mx[3],mn[3],br=0,s=0,p=1,d[2*n],id=0;
char c;
cout<<endl<<"Unesi brojeve u matricu:"<<endl;
for (int i=1;i<=n;i++)
      for(int j=1;j<=n;j++){
        cin>>a[i][j];
        if( (i==n || j==1) && a[i][j]%2==0 && dv(a[i][j]) ) {
                 br++;
                 if(br==1)
                 {
                     mx[1]=i;
                     mx[2]=j;
                     mx[3]=a[i][j];
                     mn[1]=i;
                     mn[2]=j;
                     mn[3]=a[i][j];
                 }
                else
                {
                    if(a[i][j]>mx[3])
                    {
                    mx[1]=i;
                     mx[2]=j;
                     mx[3]=a[i][j];
                    }
                    if(a[i][j]<mn[3])
                    {
                     mn[1]=i;
                     mn[2]=j;
                     mn[3]=a[i][j];
                    }
                }
        }
        if(i%2==0 && j%2!=0)
        {
         s+=a[i][j];
         p*=a[i][j];
        }
        if( (i==j || i+j==n+1) && sadrzi(a[i][j],z) )
        {
            d[id]=a[i][j];
            id++;
        }
        if(i>j && a[i][j]!=0)
            t=0;
        }
cout<<endl<<"Matrica:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
   }
printf("Maksimalan dvoznamenkasti paran u prvom redu ili zadnjem stupcu: %d[%d][%d]\n",mx[3],mx[1],mx[2]);
printf("Minimalan dvoznamenkasti paran u prvom redu ili zadnjem stupcu: %d[%d][%d]\n",mn[3],mn[1],mn[2]);
cout<<"Suma brojeva s parnim indeksom reda i neparnim indeksom stupca:"<<s<<endl;
cout<<"Produkt brojeva s parnim indeksom reda i neparnim indeksom stupca:"<<p<<endl;
cout<<"Brojevi na dijagonalama koji sadrze upisanu znamenku, kvadrat, korijen i ASCII znak:"<<endl;
for(int i=0;i<id;i++) {
    c=d[id];
    printf("%d %d %.2lf %c \n",d[id],d[id]*d[id],sqrt(abs(d[id])),c);
}
if(t)
    cout<<"Matrica je gornjetrokutasta";
else
{
    cout<<"Upisi broj manji ili jednak dimenziji matrice:";
    cin>>k;
     for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
           if(a[i][k]<a[j][k])
              swap(a[i][k],a[j][k]);
    cout<<endl<<"Dobivena matrica:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
   }
}
}
