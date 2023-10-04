#include <iostream>
using namespace std;
int main() {
  double a,b,c,D;
  cout<<"Unesi realne parametre a,b,c: ";
  cin>>a>>b>>c;
  D=b*b-4*a*c;
  if (D>0)
      cout<<"Jednadzba ima dva razlicita realna rjesenja";
  else if (D<0)
       cout<<"Jednadzba ima dva medusobno kompleksno konjugirana rjesenja";
  else
     cout<<"Jednadzba ima jedno dvostruko realno rjesenje";
return 0;
}
