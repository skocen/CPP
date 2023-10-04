#include <iostream>
using namespace std;
int main() {
    double a,b,c;
   cout<< "Unesi duljine stranica trokuta: ";
   cin>>a>>b>>c;
  if (a*a+b*b==c*c)
    {
      cout<<"Trokut je pravokutan"<<endl;
      double p=(a*b)/2;
      cout<<"Povrsina="<<p;
      }

  else {

       cout<<"Trokut nije pravokutan"<<endl;
       double o=a+b+c;
       cout<<"Opseg="<<o;
       }
return 0;
}
