#include <iostream>
using namespace std;
int main() {
int a[2][2],mks[1]={0,0},mn[1]={0,0},maks,mini;
cout<<"Upisi brojeve u matricu";
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++) {
        cin>>a[i][j];
        if(i==0 && j==0) {
            maks=a[i][j];
            mini=a[i][j];

        }
    }
}

return 0;
}
