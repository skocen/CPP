//Determine if the given matrix is a lower triangular matrix
#include <iostream>
using namespace std;
int main(){
int n;
bool t=1;
cout<<"Enter matrix size:";
cin>>n;
int a[n][n];
cout<<endl<<"Enter matrix values:"<<endl;
for (int i=0;i<n;i++)
     for(int j=0;j<n;j++) {
         cin>>a[i][j];
         if(i<j && a[i][j]!=0)
            t=0;
     }
if(t)
   cout<<"The entered matrix is a lower triangular matrix ";
else
   cout<<"The entered matrix is not a lower triangular matrix ";
}
