#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,x;
    cout<<"Unesi prirodni broj"<<endl;
    cin>>n;
    x=n%10;
    switch (x)
    {
      case 0:
        {
            cout<<"Broj je djeljiv s 10";
            break;
        }
      case 5:
        {
            cout<<"Broj je djeljiv s 5";
            break;
        }
      case 2:
      case 4:
      case 6:
      case 8:
        {
            cout<<"Broj je paran";
            break;
        }
      case 1:
      case 3:
      case 7:
      case 9:
        {
            cout<<"Broj je neparan";
            break;
        }
    }
    return 0;

}
