#include<graphics.h>
int graph(int x1, int y1, int x2, int y2)
{
int i;
float dx,dy,len,x,y;
if(abs(x2-x1)>=abs(y2-y1))
{
len=abs(x2-x1);
}
else
{
len=abs(y2-y1);
}
dx=(x2-x1)/len;
dy=(y2-y1)/len;
x=x1+0.5;
y=y1+0.5;
i=0;
while(i<=len)
{
putpixel(x,y,WHITE);
x=x+dx;
y=y+dy;
i++;
}
return 0;
}


int circ(int x, int y, float r)
{
int d,x1,y1;
x1=0;
y1=r;
d=3-(2*r);
while(x1<y1)
{
putpixel(x1+x,y1+y,WHITE);
putpixel(x1+x,-y1+y,WHITE);
putpixel(-x1+x,y1+y,WHITE);
putpixel(-x1+x,-y1+y,WHITE);
putpixel(y1+y,x1+x,WHITE);
putpixel(-y1+y,-x1+x,WHITE);
putpixel(-y1+y,x1+x,WHITE);
putpixel(y1+y,-x1+x,WHITE);
if(d<0)
{
d=d+4*x1+6;
}
else
{
d=d+4*(x1-y1)+10;
y1=y1-1;
}
x1=x1+1;
}
return 0;
}
int main()
{
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,NULL);
circ(300,300,100);
circ(300,300,50);
graph(300,200,350,290);
graph(350,290,390,350);
graph(390,350,290,350);
graph(300,200,250,290);
graph(250,290,210,350);
graph(210,350,390,350);
getch();
closegraph();
}