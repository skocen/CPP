#include <iostream>
#include <cmath>
using namespace std;
double pot(double b, double eks) {
    double p=pow(b,eks);
    return p;
}
double fx(double p) {
    for (int i=1;i<11;i++)
        cout<<pow(p,i)<<endl;

}
int main(){
    double b,eks,p;
    cout<<"Upisi bazu i eksponent:";
    cin>>b>>eks;
    p=pot(b,eks);
    cout<<fx(p);
}
