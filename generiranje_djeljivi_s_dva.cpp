#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
int main(){
srand(time(NULL));
int a[9];
for (int i=0;i<10;i++)
     a[i]=rand()%20+1;
cout<<"Indeksi elemenata koji su djeljivi s 2:";
for (int i=0;i<10;i++) {
    if(a[i]%2==0)
        cout<<i<<" ";
}
return 0;
}
