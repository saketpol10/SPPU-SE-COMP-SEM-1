#include <iostream>
#include<graphics.h>

using namespace std;

int main()
{
	int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,NULL);
	outtextxy(143,90,"SNOWMAN !!!");
	outtextxy(380,90,"TREE !!!");
	//snowman begins
	line(150,150,200,150);//topi straight line
	line(150,150,175,125);//topi left slant line
	line(200,150,175,125);//topi right slant line
	circle(175,175,25);//snowman ka chehra
	circle(165,164.5,5);//left eye
	circle(185,164.5,5);//right eye
	circle(175,250,50);//snowman ka stomach
	line(175,175,210,182);//nose up part
	line(175,185,210,182);//nose down part
	line(150,292,150,320);//leftleg upper part
	line(200,292,200,320);//rightleg upper part
	line(150,320,142,330);//left leg left slant
	line(150,320,158,330);//left leg right slant
	line(200,320,192,330);//right leg left slant
	line(200,320,208,330);//right leg right slant
	line(126,250,146,260);//left hand
	line(224,250,244,260);//right hand
	//snowman ends	
	//tree begins
	line(300,300,500,300);//bottom tree straight part
	line(300,300,360,240);//bottom tree left slant
	line(500,300,440,240);//bottom tree right slant
	line(330,240,470,240);//middle tree straight part
	line(330,240,380,200);//middle tree left slant
	line(470,240,420,200);//middle tree right slant
	line(360,200,440,200);//bottom tree straight part
	line(360,200,400,180);//bottom tree left slant
	line(440,200,400,180);//bottom tree left slant
	line(380,300,380,360);//tree left leg
	line(420,300,420,360);//tree right leg
	//tree ends
	getch();
	closegraph();
}