// kvadratna matrica, ispisati, je li jedinièna i ispisati odgovarajucu poruku,
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Upisi dimenziju kvadratne matrice:";
cin>>n;
int a[n][n],bj=0,bn=0;
bool jd=false;
cout<<endl<<"Upisi brojeve u matricu:"<<endl;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++) {
        cin>>a[i][j];
        if(a[i][j]==0)
            bn++;
        if(a[i][j]==1 && i==j)
            bj++;
    }
}
if(bj==n && bn==n*n-n)
    cout<<"Matrica je jedinicna";
else
    cout<<"Matrica nije jedinicna";
}
