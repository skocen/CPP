#include <iostream>
using namespace std;
int bd (int n) {
    int s=0;
    for (int i=200;i<401;i++)
    {
        if (i%n==0)
            s+=i;
    }
return s;
}
int bdss(){
  int f=0;
  for (int i=200; i<401;i++) {
       if(i%7==0)
       f++;}
return f;
}
int main() {
    int n;
    cout<<"Upisi n:";
    cin>>n;
    cout<<endl<<"Zbroj brojeva djeljivih s ucitanim:"<< bd(n);
    cout<<endl<<"Broj djeljivih sa 7:"<<bdss();
}
