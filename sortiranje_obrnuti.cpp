#include <iostream>
using namespace std;
int main(){
int a[50],i=0,b[50];
while(1){
    cout<<"Upisi broj u polje:";
    cin>>a[i];
    cout<<endl;
    if(a[i]==-1)
        break;
    i++;
}
for (int j=0;j<i;j++)
    b[j]=a[i-j-1];
for (int k=0;k<i;k++)
    cout<<b[k]<<" ";
return 0;
}
