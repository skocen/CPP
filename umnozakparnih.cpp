#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int um(int n){
      if(n>1)
      return n*um(n-2);
    else
       return 1;
}
int main(){
int n;
cout<<"Upisi broj:";
cin>>n;
if(n%2==0)
    cout<<endl<<"Umnozak parnih brojeva do unesenog:"<<um(n);
else
    cout<<endl<<"Umnozak parnih brojeva do unesenog:"<<um(n-1);
}

