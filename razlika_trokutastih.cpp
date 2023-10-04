#include <iostream>
using namespace std;
int razlika(int a[100][100],int n) {
    int raz=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
    {
        if(i!=j && a[i][j]!=0)
        {
            if(i>j)
                raz++;
            else
                raz--;
        }
    }
return raz;
}
int main () {
int n;
cout<<"Unesi dimenziju kvadratne matrice:";
cin>>n;
int a[100][100];
cout<<"Unesi brojeve u matricu:"<<endl;
for (int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
       cin>>a[i][j];
cout<<"Razlika="<<razlika(a,n);
}
