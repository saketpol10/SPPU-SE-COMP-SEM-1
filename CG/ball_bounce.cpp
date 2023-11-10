#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
int gd,gm;
gd=DETECT;
float s;
initgraph(&gd,&gm,NULL);

for(int i=0;i<(getmaxx()-140);i+=5)
{

s = 50*sin(i*3.141/180);
line(100,130,getmaxx(),130);
line(100,270,getmaxx(),270);
circle(100+i,200+s,20);
floodfill(100+i,200+s,RED);
setcolor(RED);

delay(50);

cleardevice();
}


getch();
closegraph();
}