#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
bool dvoz(int n) {
    n=abs(n);
    if(n>9 && n<100)
        return true;
    else
        return false;
}
bool prva(int n, int z) {
    int k=0;
    while(n>0) {
        k=n%10;
        n/=10;
    }
    if(k==z)
        return true;
    else
        return false;
}
bool djeljivsadrzi(int n, int z) {
    n=abs(n);
    int m=n;
    int x=0;
    while(n>0) {
        x=n%10;
        n/=10;
        if(x==z && m%z==0) {
            return true;
            break;
        }
    }
    return false;
}
void sortiraj(int x[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
           if(x[i]>x[j])
              swap(x[i],x[j]);
}
int main() {
int n=1,z,x=0,y=0,maks[3]={0,0,0},mini[3]={0,0,0},dv[10],d=0,bp=0,zrps[10],bzp=0,s[10],p[10],mat[10][10];
while(n<2 || n>10 || n%2==1) {
    cout<<"Upisi dimenziju kvadratne matrice (2-10 i paran):";
    cin>>n;
    cout<<endl;
}
cout<<"Upisi znamenku:";
cin>>z;
cout<<endl<<"Upisi dva broja manja ili jednaka dimenziji matrice:";
cin>>x>>y;
for (int i=1;i<=10;i++)
{
    s[i]=0;
    p[i]=1;
}
cout<<endl<<"Upisi brojeve u matricu:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
{
    cin>>mat[i][j];
    s[j]+=mat[i][j];
    p[j]*=mat[i][j];
    if(mat[i][j]%2==0) {
        bp++;
    if(bp==1) {
        maks[0]=mini[0]=mat[i][j];
        maks[1]=mini[1]=i;
        maks[2]=mini[2]=j;
    }
    else
    {
        if(mat[i][j]>maks[0])
        {
            maks[0]=mat[i][j];
            maks[1]=i;
            maks[2]=j;
        }
        if(mat[i][j]<mini[0]) {
            mini[0]=mat[i][j];
            mini[1]=i;
            mini[2]=j;
        }
    }
    }
    if( (i==j || i+j==n+1) && prva(mat[i][j],z) && dvoz(mat[i][j]))
    {
       dv[d]=mat[i][j];
       d++;
    }
    if( (i==n || j==1) && djeljivsadrzi(mat[i][j],z))
    {
        zrps[bzp]=mat[i][j];
        bzp++;
    }
}
}
cout<<endl<<"Matrica:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cout<<mat[i][j]<<" ";
    cout<<endl;
}
cout<<"Maksimalni paran broj:"<<maks[0]<<"["<<maks[1]<<"]"<<"["<<maks[2]<<"]"<<endl;
cout<<"Minimalan paran broj:"<<mini[0]<<"["<<mini[1]<<"]"<<"["<<mini[2]<<"]"<<endl;
cout<<"Dvoznamenkasti na dijagonalama cija je prva znamenka "<<z<<":"<<endl;
sortiraj(dv,d);
for(int i=0;i<d;i++)
    printf("%d %d %.2lf\n",dv[i],dv[i]*dv[i],sqrt(dv[i]));
cout<<"Brojevi djeljivi s "<<z<<" i sadrze "<<z<<" :"<<endl;
for (int i=0;i<bzp;i++)
{
    char c=zrps[i];
    cout<<zrps[i]<<"  "<<c<<endl;
}
cout<<"Sume i produkti po stupcima:"<<endl;
for (int i=1;i<=n;i++)
    printf("s[%d]=%d , p[%d]=%d \n",i,s[i],i,p[i]);
for(int i=1;i<=n;i++)
    mat[x][i]+=mat[y][i];
cout<<"Dobivena matrica:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cout<<mat[i][j]<<" ";
    cout<<endl;
}
return 0;
}
