//ispisati, odrediti i ispisati maksimalan i minimalan u svakom redu posebno
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Unesi dimenziju kvadratne matrice:";
cin>>n;
int a[n][n],maks[n],mini[n];
cout<<endl<<"Unesi brojeve u matricu:"<<endl;
for (int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cin>>a[i][j];
        if(j==1)
        {
            maks[i]=a[i][j];
            mini[i]=a[i][j];
        }
        if(a[i][j]>maks[i])
            maks[i]=a[i][j];
        if(a[i][j]<mini[i])
            mini[i]=a[i][j];
      }
}
cout<<endl<<"Matrica:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
}

cout<<"Maksimalni brojevi po redovima:"<<endl;
for (int i=1;i<=n;i++)
    cout<<"Maksimalni u "<<i<<". redu:"<<maks[i]<<endl;
cout<<"Minimalni brojevi po redovima:"<<endl;
for (int i=1;i<=n;i++)
    cout<<"Minimalni u "<<i<<". redu:"<<mini[i]<<endl;
}
