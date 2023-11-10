#include<graphics.h>
#include<math.h>


void dda(int x1,int y1,int x2,int y2)
{
int dx,dy,length,x,y,i;
if (abs(x2-x1)>=abs(y2-y1))
{
length=abs(x2-x1);
}
else
{
length=abs(y2-y1);
}

dx=(x2-x1)/length;
dy=(y2-y1)/length;
x=x1+0.5;
y=y1+0.5;
i=0;

while(i<=length)
{
putpixel(x,y,YELLOW);
x=x+dx;
y=y+dy;
i++;
}

}
void bcircle(float cx,float cy, float r)
{


float d ;

d=3-2*r;
float x=0;
float y=r;

while(x<y)
{
putpixel (x+cx,y+cy,RED);
putpixel(y+cx,x+cy,RED);
putpixel(y+cx,-x+cy,RED);
putpixel(x+cx,-y+cy,RED);
putpixel(-x+cx,-y+cy,RED);
putpixel(-y+cx,-x+cy,RED);
putpixel(-y+cx,x+cy,RED);
putpixel(-x+cx,y+cy,RED);

if (d<0)
{
d=d+4*x+6;
}
else
{
d=d+4*(x-y)+10;
y=y-1;
}
x=x+1;
}

}
int main()
{
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,NULL);
//rectangle
dda(50,50,50,300);
dda(50,50,300,50);
dda(50,300,300,300);
dda(300,50,300,300);
//midpoints
dda(50,175,175,50);
dda(50,175,175,300);
dda(175,50,300,175);
dda(300,175,175,300);
//circle
bcircle(175,175,86.5);
getch();
closegraph();
return 0;
}

