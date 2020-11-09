// program for checking if a matrix is symmetric, the matrix is symmetric if Aij=Aji
#include <iostream>
using namespace std;
int main() {
int n;
bool b=true;
cout<<"Enter matrix size:";
cin>>n;
int a[n][n];
cout<<endl<<"Enter numbers into the matrix:"<<endl;
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
    cout<<"The entered matrix is symmetric";
else
    cout<<"The entered matrix is not symmetric";
}
