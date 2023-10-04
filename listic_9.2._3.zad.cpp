#include <iostream>
using namespace std;
int main()  {
int n,b=0,t=1;
while (t==1)
    {
           cout<<"Upisi broj:";
           cin>>n;
           for (int j=1;j<=n;j++) {
                if (n%j==0)
                    b++;
           }
        if (b==2)
               t=0;
    }
return 0;
}
