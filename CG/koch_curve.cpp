#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;
class kochcurve
{

public:

void koch(int it,int x1,int y1, int x5, int y5)
{
int x2,y2,x3,y3,x4,y4;
int dx,dy;
if (it==0)
{
line(x1,y1,x5,y5);
}
else
{
delay(10);
dx=(x5-x1)/3;
dy=(y5-y1)/3;
x2=x1+dx;
y2=y1+dy;
x3=int(0.5*(x1+x5) + sqrt(3) *(y1-y5)/6);
y3=int(0.5*(y1+y5) + sqrt(3) *(x5-x1)/6);
x4 = 2*dx+x1;
y4=2*dy+y1;

koch(it-1,x1,y1,x2,y2);
koch(it-1,x2,y2,x3,y3);
koch(it-1,x3,y3,x4,y4);
koch(it-1,x4,y4,x5,y5);
  }
}
};

int main()
{

kochcurve k;
int it;
cout<<"Enter Number Of Iterations : "<<endl;
cin>>it;
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,NULL);
k.koch(it,200,70,70,330);
k.koch(it,70,330,330,330);
k.koch(it,330,330,200,70);

getch();
closegraph();
return 0;
}

