//Calculate the number of 1s in binary for every decimal number in a given sequence 
#include <iostream>
using namespace std;
int format (int x){
    int bin=0;
    while(x>0) {
        bin=bin*10+x%2;
        x/=2;
    }
    return bin;
}
int number_ones(int x) {
    int number=0;
    while (x>0) {
        if(x%10==1)
            number++;
        x=x/10;
    }
  return number;
}
int main() {
int n,bin,i=1,x,number=0;
cout<<"Enter the number of numbers:";
cin>>n;
for (i;i<=n;i++) {
    cout<<endl<<"Enter "<<i<<". number:";
    cin>>x;
    bin=format(x);
    number+=number_ones(bin);
}
cout<<"Number of ones="<<number;
}
