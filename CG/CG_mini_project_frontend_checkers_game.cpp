#include <iostream>
#include<graphics.h>
using namespace std;

class songti {
    public:
    int xPos;
    int yPos;
    void posA();
    void posB();
    void translate(int x, int y, char k);
};

void songti :: translate(int x, int y, char k) {
	if(k == 'R') {
		setfillstyle(SOLID_FILL,RED);
	}
	else {
		setfillstyle(SOLID_FILL,BLUE);
	}
	
	circle(x, y, 10);
	floodfill(x, y, WHITE);
}


int main() {
	songti a[12],b[12];
	int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,NULL);
	rectangle(100,100,420,420);
	for(int i=40;i<=340;i=i+40)
	{
		line(100,100+i,420,100+i);	
		for(int i=0;i<=300;i=i+80) //row 1
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(100+i,100,140+i,140);
			floodfill(101+i,101,WHITE);
			setfillstyle(SOLID_FILL,RED);
			circle(160+i,120,10);
			floodfill(160+i,120,WHITE);
		
		}
		for(int i=0;i<=300;i=i+80) //row 2
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(140+i,100,180+i,180);
			floodfill(141+i,141,WHITE);
			setfillstyle(SOLID_FILL,RED);
			circle(120+i,160,10);
			floodfill(120+i,160,WHITE);
		}
		for(int i=0;i<=300;i=i+80) //row 3
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(100+i,180,140+i,220);
			floodfill(101+i,181,WHITE);
			setfillstyle(SOLID_FILL,RED);
			circle(160+i,200,10);
			floodfill(160+i,200,WHITE);
		}
		for(int i=0;i<=300;i=i+80) //row 4
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(140+i,220,180+i,260);
			floodfill(141+i,221,WHITE);
		}
		for(int i=0;i<=300;i=i+80) //row 5
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(100+i,260,140+i,300);
			floodfill(101+i,261,WHITE);
		}
		for(int i=0;i<=300;i=i+80) //row 6
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(140+i,300,180+i,340);
			floodfill(141+i,301,WHITE);
			setfillstyle(SOLID_FILL,BLUE);
			circle(120+i,320,10);
			floodfill(120+i,320,WHITE);
		}
		for(int i=0;i<=300;i=i+80) //row 7
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(100+i,340,140+i,380);
			floodfill(101+i,341,WHITE);
			setfillstyle(SOLID_FILL,BLUE);
			circle(160+i,360,10);
			floodfill(160+i,360,WHITE);
		}
		for(int i=0;i<=300;i=i+80) //row 8
		{
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(140+i,380,180+i,420);
			floodfill(141+i,381,WHITE);
			setfillstyle(SOLID_FILL,BLUE);
			circle(120+i,400,10);
			floodfill(120+i,400,WHITE);
		}
		
	}
	
	for(int j=40;j<=340;j=j+40)
	{
		line(100+j,100,100+j,420);
	}

    void posA();
    void posB();
    
    int pieceA,pieceB,x;
    int y;
    while(1) {
        cout<<"Player A move\n";
        cin>>pieceA;
        cout<<"\nTo\n";
        cin>>y>>x;
	
		a[pieceA].translate(x,y,'R');
        for(int i=0;i<12;i++) {
        if(a[pieceA].yPos == b[i].yPos && a[pieceA].xPos == b[i].xPos) {
            b[i] = {-1,-1}; 
        }
    }

    cout << "Wait for your turn\n";


        cout<<"Player B move\n";
        cin>>pieceB;
        cout<< b[pieceB].xPos << b[pieceB].yPos;
        cout<<"\nTo\n";
        cin>>b[pieceB].yPos>>b[pieceB].xPos;
        
        b[pieceB].translate(b[pieceB].xPos,b[pieceB].yPos,'B');
         for(int i=0;i<12;i++) {
        if(b[pieceB].yPos == a[i].yPos && b[pieceB].xPos == a[i].xPos) {
            a[i] = {-1,-1}; 
        }
    }


    cout << "Wait for your turn";
    }
    		
	getch();
	closegraph();
}


void songti :: posA() {

	songti a[12];
    a[0].xPos =  160;
    a[1].xPos =  240;
    a[2].xPos =  320;
    a[3].xPos =  400;
    a[4].xPos =  120;
    a[5].xPos =  200;
    a[6].xPos =  280;
    a[7].xPos =  360;
    a[8].xPos =  160;
    a[9].xPos =  240;
    a[10].xPos = 320;
    a[11].xPos = 400;

    a[0].yPos =  120;
    a[1].yPos =  120;
    a[2].yPos =  120;
    a[3].yPos =  120;
    a[4].yPos =  160;
    a[5].yPos =  160;
    a[6].yPos =  160;
    a[7].yPos =  160;
    a[8].yPos =  200;
    a[9].yPos =  200;
    a[10].yPos = 200;
    a[11].yPos = 200;
}

void songti :: posB() {
	songti b[12];
    b[0].xPos =  120;
    b[1].xPos =  120;
    b[2].xPos =  120;
    b[3].xPos =  120;
    b[4].xPos =  200;
    b[5].xPos =  200;
    b[6].xPos =  200;
    b[7].xPos =  200;
    b[8].xPos =  280;
    b[9].xPos =  280;
    b[10].xPos = 280;
    b[11].xPos = 280;

    b[0].yPos =  320;
    b[1].yPos =  320;
    b[2].yPos =  320;
    b[3].yPos =  320;
    b[4].yPos =  360;
    b[5].yPos =  360;
    b[6].yPos =  360;
    b[7].yPos =  360;
    b[8].yPos =  400;
    b[9].yPos =  400;
    b[10].yPos = 400;
    b[11].yPos = 400;
}