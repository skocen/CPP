#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void generiraj(int a[], int n) {
    srand(time(NULL));
    for(int i=0;i<n;i++)
        a[i]=rand()%101; //ostatak djeljenja nekog broja s 101 je uvijek broj izmedu 1 i 100
}
void sortiraj(int x[],int n){ //sortiranje niza
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
           if(x[i]>x[j])
              swap(x[i],x[j]);
}
int element(int a[],int k) { //ovom funkcijom odreðujemo i-ti element niza kojeg stvaramo
    int s=0;
    for (int i=0;i<=k;i++)  // zbrajamo sve elemente niza a od a[0] do a[i]
         s+=a[i];
    return s;

}
void ispis(int a[], int n) { //koristimo void funkciju za ispis jer vise puta ispisujemo nizove
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(){
int n,a[100],b[100];
cout<<"Unesi broj brojeva:";
cin>>n;
generiraj(a,n);
for (int i=0;i<n;i++){
    b[i]=element(a,i); // pozivamo funkciju element kako bi odredili i-ti element niza kojeg stvaramo
}
cout<<"Niz slucajnih brojeva:";
ispis(a,n);
cout<<endl<<"Stvoreni niz:";
ispis (b,n);
sortiraj(a,n);
sortiraj (b,n);
cout<<endl<<"Sortirani niz slucajnih brojeva:";
ispis(a,n);
cout<<endl<<"Sortirani stvoreni niz:";
ispis (b,n);
return 0;
}
