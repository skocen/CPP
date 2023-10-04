#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
void ispis (int a[]) {
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
}
int main() {
srand(time(NULL));
int a[9];
for (int i=0;i<10;i++)
     a[i]=rand()%101;
cout<<"Ispis niza:";
ispis(a);
return 0;
}
