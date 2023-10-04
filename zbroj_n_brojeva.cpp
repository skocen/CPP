#include <iostream>
using namespace std;
int s(int n) {
    if(n>1)
      return n+s(n-1);
    else
       return 1;
}
int main() {
int n;
cout<<"Upisi broj:";
cin>>n;
cout<<endl<<"Zbroj prvih "<<n<<" brojeva:"<<s(n);
}
