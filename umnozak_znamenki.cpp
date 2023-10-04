#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int um(int n, int x){
    if(n==0)
       return x;
     else
       return um(n/10,x*(n%10));
    }
int main(){
int n;
cout<<"Upisi broj:";
cin>>n;
cout<<endl<<"Umnozak znamenki:"<<um(n,1);
}
