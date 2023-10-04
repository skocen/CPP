#include <iostream>
#include <string>
using namespace std;
int suglasnici(string c){
    int br=0;
    for (int i=0;i<c.length();i++) {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
          br++;
          }
    return br;
}
int main(){
    string c;
    cin>>c;
    cout<<suglasnici(c);
}
