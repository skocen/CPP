//Determine if the given matrix is a symmetric matrix
#include <iostream>
using namespace std;
int main() {
int n;
bool b=true;
cout<<"Enter matrix size:";
cin>>n;
int a[n][n];
cout<<endl<<"Enter matrix values:"<<endl;
for(int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
        cin>>a[i][j];
for (int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
       if(a[i][j]!=a[j][i])
          b=false;
    }
}
if(b)
    cout<<"The given matrix is a symmetric matrix";
else
    cout<<"The given matrix is not a symmetric matrix";
}
