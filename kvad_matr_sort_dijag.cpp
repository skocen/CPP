#include <iostream>
#include <cmath>
using namespace std;
void sortiraj(int x[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
           if(x[i]>x[j])
              swap(x[i],x[j]);
}
using namespace std;
bool dv(int x) {
    x=abs(x);
    if(x>9 && x<1000)
        return 1;
}
int main(){
/*unijeti kvadratnu matricu, izimedu 2 i 4,  ispisati matricu, odrediti i ispisati maks i min dvoznamen u drugom redu,stupcu,
sortirano ispisati sve na dijagonalama*/
int n=5,maks,mini,d[8],bd=0,p=0;
while(n<2 || n>4) {
    cout<<"Upisi dimenziju kvadratne matrice:";
    cin>>n;
    cout<<endl;
}
int mat[n][n];
cout<<"Upisi brojeve u matricu:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
{
    cin>>mat[i][j];
    if( (i==2 || j==2) && dv(mat[i][j])){
            p++;
        if(p==1) {
            maks=mat[i][j];
            mini=mat[i][j];
        }
        if(mat[i][j]>maks)
            maks=mat[i][j];
        if(mat[i][j]<mini)
            mini=mat[i][j];
    }
    if(i==j || i+j==n+1) {
        d[bd]=mat[i][j];
        bd++;
    }
}
}
sortiraj(d,bd);
cout<<endl<<"Ispis matrice:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cout<<mat[i][j];
    cout<<endl;
}
cout<<"Maksimalni dvoznamenkasti u drugom stupcu, drugom redu:"<<maks;
cout<<endl<<"Minimalni dvoznamenkasti u drugom stupcu, drugom redu:"<<mini;
return 0;
}
