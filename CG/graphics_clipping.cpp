#include <iostream>
#include <graphics.h>                       //clipping algorithm

using namespace std;

class Clipline
{
private:
int LEFT = 1, RIGHT = 2, BOTTOM = 4, TOP = 8;
int x1, x2, y1, y2, xl, yl, xh, yh, x, y;
public:
int getcode(int x, int y);
void clipping();
};

int Clipline :: getcode(int x, int y)
{
int code = 0;
if (y > yh)
code |= TOP;  
if (y < yl)
code |= BOTTOM;
if (x < xl)
code |= LEFT;
if (x > xh)
code |= RIGHT;
return code;
}

void Clipline :: clipping()
{
int codeA, codeB;

cout<<"Enter top left coordinates of the window :\n";
cin>>xl>>yl;

cout<<"Enter bottom right coordinates of the window :\n";
cin>>xh>>yh;

setcolor(CYAN);
rectangle(xl, yl, xh, yh);

//floodfill(xl+5, yl+5, CYAN);

cout<<"\nEnter the line coordinates:\n";
cout<<"Enter the starting coordinate:\n";
cin>>x1>>y1;
cout<<"\nEnter the ending coordinate:\n";
cin>>x2>>y2;

setcolor(CYAN);
line (x1, y1, x2, y2);
delay(500);

codeA = getcode(x1, y1);
codeB = getcode(x2, y2);
int temp;


float m;
int flag = 0;
while (1){

m = float(y2 - y1)/(x2 - x1);

if ((codeA == 0) && (codeB == 0)){
flag = 1;
break;
}
else if((codeA & codeB) != 0){

break;
}
else{
if (codeA== 0)
temp = codeB;  
else
temp = codeA;

if (temp & TOP){
x = x1 + (yh - y1)/m;  
y = yh;
}

else if (temp & BOTTOM){
x = x1 + (yl - y1)/m;
y = yl;
}

else if (temp & LEFT){
y = y1 + m*(xl - x1);
x = xl;
}

else if (temp & RIGHT){
y = y1 + m*(xh - x1);
x = xh;
}

if (temp == codeA)
{
x1 = x;
y1 = y;
codeA = getcode(x1, y1);
}

else
{
x2 = x;
y2 = y;
codeB = getcode(x2, y2);
}
}
}
getch();

cleardevice();
setcolor(YELLOW);
rectangle (xl, yl, xh, yh);
//floodfill(xl+5, yl+5, YELLOW);
setcolor(YELLOW);

if (flag == 1)
line(x1, y1, x2, y2);
getch();
closegraph();
}

int main()
{
int gd = DETECT, gm;
initgraph (&gd, &gm, NULL);
Clipline obj1;
obj1.clipping();
return 0;
}
