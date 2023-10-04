#include <iostream>
using namespace std;
int main(){
int n,m;
while(n<2 || n>50) {
     cout<<"Upisi gornju granicu:";
     cin>>n;
     cout<<endl;
     }
cout<<"Upisi korak:";
cin>>m;
for(int i=1;i<=n;i=i+m)
    cout<<i<<" ";
return 0;
}
