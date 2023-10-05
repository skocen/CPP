#include <iostream>
using namespace std;


int k[6];

void ucitaj(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       if(a[i]==5)
        k[5]++;
       else if(a[i]==4)
        k[4]++;
       else if(a[i]==3)
        k[3]++;
       else if(a[i]==2)
        k[2]++;
       else
        k[1]++;
    }
}

void ucitaj_2(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
     	k[a[i]]++;
    }
}

void crtaj (int a[],int n)
{
    ucitaj(a, n);
    int i;
    for(i=5;i>0;i--)
        {
            cout<<endl<<i<<": ";
            while(k[i]>0)
            {
                cout<<"x";
                k[i]--;
            }
        }


}
int main()
{
    int a[30];
    int i,n;
    cout<<"Unesi broj ucenika:";
    cin>>n;
    cout<<"Unesi ocjene:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    crtaj(a,n);

}
