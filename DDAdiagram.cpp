#include<graphics.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
void ddaLine(int x1,int y1,int x2,int y2)
{
    int dx=x2-x1;
    int dy=y2-y1;
    int steps=abs(dx);
    if (abs(dy)>steps)
    steps=abs(dy);
    float xIncrement=(float)dx/steps;
    float yIncrement=(float)dy/steps;  
    float x=x1;
    float y=y1;
    for(int i=0;i<=steps;i++)
    {
        putpixel(round(x),round(y),WHITE);
        x=x+xIncrement;
        y=y+yIncrement;
    }
}
void plotCirclePoints(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
}
void bresenhamCircle(int xc,int yc,int radius)
{
    int x=0;
    int y=radius;
    int decisionParameter =3-2*radius;
    while(x<=y)
    {
        plotCirclePoints(xc,yc,x,y);
        if(decisionParameter<0)
        {
            decisionParameter=decisionParameter+4*x+6;
        }
        else{
            decisionParameter=decisionParameter+4*(x-y)+10;
            y--;
        }
        x++;
    }
}
int main(int argc, char *argv[])
{
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,NULL);
    setbkcolor(BLACK);
    cleardevice();
    ddaLine(200,150,600,150);
    ddaLine(600,150,600,450);
    ddaLine(600,450,200,450);
    ddaLine(200,450,200,150);
    ddaLine(400,150,600,300);
    ddaLine(600,300,400,450);
    ddaLine(400,450,200,300);
    ddaLine(200,300,400,150);
    int xc=400;
    int yc=300;
    int radius=120;
    bresenhamCircle(xc,yc,radius);
    cout<<"Press any key in the graphics to exit...";
    getch();
    closegraph();
    return 0;
}