#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
int main() {
int a[19],s=0,nb;
double as,r;
srand(time(NULL));
for (int i=0;i<20;i++)
    a[i]=rand()%501;
for (int i=0;i<20;i++)
     s+=a[i];
double suma=s;
as=suma/20;
for (int i=0;i<20;i++) {
    if(i==0)
        r=abs(a[i]-as);
    if(abs(a[i]-as)<r)
        r=abs(a[i]-as);
}
for(int i=0;i<20;i++){
if(abs(a[i]-as)==r)
   nb=a[i];
}
cout<<"Ispis niza:";
for (int i=0;i<20;i++)
     cout<<a[i]<<" ";
cout<<endl<<"Arimeticka sredina niza:"<<as<<endl;
cout<<"Najblizi clan:"<<nb;
return 0;
}
