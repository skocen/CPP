#include <iostream>
using namespace std;
int n;
void ucitaj(int ocjene[]) {
    for(int i=0;i<n;i++)
        cin>>ocjene[i];
}
void crtaj (int ocjene[]) {
    int koliko[5]={0,0,0,0,0};
    for(int i=0;i<n;i++) {
        koliko[ocjene[i]-1]++;
    }
    for (int i=4;i>=0;i--){
        cout<<i+1<<": ";
        for (int j=0;j<koliko[i];j++)
             cout<<"x";
        cout<<endl;
    }

}
int main(){
    int ocjene[30];
    cout<<"Upisi broj ucenika:";
    cin>>n;
    ucitaj(ocjene);
    crtaj(ocjene);
return 0;
}
