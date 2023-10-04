#include <iostream>
using namespace std;
double as(int a[], int n) {
   double s=0;
   for(int i=0;i<n;i++)
      s+=a[i];
  return s/n;
}
int main(){
int n;
cout<<"Unesi broj brojeva:";
cin>>n;
int a[n];
cout<<endl<<"Unesi brojeve u polje:";
for (int i=0;i<n;i++)
    cin>>a[i];
cout<<"Arimeticka sredina elemenata u nizu:"<<as(a,n);

}
