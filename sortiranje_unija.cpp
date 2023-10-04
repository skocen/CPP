#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,z[10],k=0;
bool x[10]={0,0,0,0,0,0,0,0,0,0};
cout<<"Upisi dva cijela broja:";
cin>>a>>b;
a=abs(a);
b=abs(b);
while(a>0){
    x[a%10]=1;
    a/=10;
}
while(b>0){
    x[b%10]=1;
    b/=10;
}
for (int i=0;i<10;i++){
    if(x[i]){
        z[k]=i;
        k++;
    }
}
for (int i=0;i<k;i++)
    cout<<z[i]<<" ";
return 0;
}
