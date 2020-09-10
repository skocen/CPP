//Program that draws the Koch snowflake
#include <graphics.h>
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int koch(int xa, int ya, int xb, int yb, double kut)
{
     double distance = sqrt(pow(xb-xa,2)+pow(yb-ya,2));
     int xc=xa+(xb-xa)/3;
     int yc=ya+(yb-ya)/3;

     int xd=xa+2*(xb-xa)/3;
     int yd=ya+2*(yb-ya)/3;

     double const PI=4*atan(1);

     int xe=xc+cos(kut+PI/3)*distance/3;
     int ye=yc-sin(kut+PI/3)*distance/3;

     if(distance>20)
     {
         koch(xa,ya,xc,yc,kut);
         koch(xc,yc,xe,ye,kut+PI/3);
         koch(xe,ye,xd,yd,kut-PI/3);
         koch(xd,yd,xb,yb,kut);
     }
     else{
            line(xa,ya,xc,yc);
            line(xc,yc,xe,ye);
            line(xe,ye,xd,yd);
            line(xd,yd,xb,yb);
            }
    Sleep(50);
  return 0;
}

int main( )
{
    int n;
    cout<<"Enter snowflake size: ";
    cin>>n;

    int xa=50;
    int ya=200;
    int xb=50+n;
    int yb=200;
    int xc=xa+(xb-xa)/2;
    int yc=ya+n*sqrt(3)/2;
    double const PI=4*atan(1);
    initwindow(800, 800);

    koch(xa,ya,xb,yb,0);
    koch(xb,yb,xc,yc,-2*PI/3);
    koch(xc,yc,xa,ya,2*PI/3);
    system("pause");
    return 0;
}
