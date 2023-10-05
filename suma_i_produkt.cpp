#include <iostream>
using namespace std;

void sip (int a[],int n,int *suma,int *produkt)
{
    int s=0,p=1;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
        p=p*a[i];
    }
    *suma=s;
    *produkt=p;
}




int main()
{
    int a[10];
    int n;
    cout<<"Unesi duljinu niza:";
    cin>>n;
    cout<<"Unesi elemente u niz:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int suma,produkt;
    sip(a,n,&suma,&produkt);
    cout<<"suma: "<<suma<<endl<<"Produkt: "<<produkt;




}
