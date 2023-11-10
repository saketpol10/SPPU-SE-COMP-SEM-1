#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
int gd,gm,i,j;
int xm,ym;
gd = DETECT;
char  as[] = {"|"};
char* pt = &as[0];
initgraph(&gd,&gm,NULL);

xm=getmaxx();
ym=getmaxy();
for(i=0;i<2000;i++)
{
line(0,400,650,400);//baseline
for(j=0;j<50;j++)
{
//legs
if(i%7==0)
{
line(120+i,350,100+i,400);
line(120+i,350,140+i,400);
}
else
{
line(120+i,350,110+i,400); // +10 at x2
line(120+i,350,130+i,400); // -10 at x2
}

//Left arm
if(i%7==0)
{
line(120+i,300,100+i,335);
}
else
{
line(120+i,300,112+i,335); // +12 at x2
}

circle(120+i,288,12);//head
line(120+i,350,120+i,300);//body
line(120+i,300,135+i,335);//Right arm

line(135+i,335,135+i,260);//umbrella stick
line(172+i,260,98+i,260);//umbrella base
arc(135+i,260,0,180,37);//umbrella curve

outtextxy(rand()%xm,rand()%(ym-40),pt);
setcolor(WHITE);
}
delay(15);
cleardevice();
}
getch();
closegraph();
}