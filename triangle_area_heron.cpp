//Calculating the area of any triangle using Heron's formula
#include <iostream>
#include <cmath>
using namespace std;
bool check (double a, double b, double c) {
    if ((a+b)<=c || (a+c)<=b || (b+c)<=a)
        return false;
    else
        return true;
}
double area (double a, double b, double c) {
double ar,s;
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
return ar;
      }
int main(){
double a,b,c,ar;
int n;
cout<<"Enter the number of triangles:";
cin>>n;
for (int i=0;i<n;i++){
      cout<<"Enter the lengths of the sides of the triangle :"<<endl;
      cin>>a>>b>>c;
      if (check(a,b,c)) {
          ar=area(a,b,c);
          cout<<"Area of the triangle is "<<ar<<endl;
      }
      else
        cout<<"Entered values do not satisfy the triangle inequality."<<endl;
}
return 0;
}
