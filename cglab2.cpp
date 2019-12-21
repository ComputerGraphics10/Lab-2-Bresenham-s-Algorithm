TO  LINE-DRAWING BY USING BRESENHAMS LINE-DRAWING ALGORITHM.
			//Complete souce code in C++
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<math.h>

void linedraw(int x1, int x2, int y1, int y2)
{
	int dx, dy, x, y;
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	p=2*dy-dx;
	while(x<x2)
	{
		if(p>=0)
		{
			putpixel(x,y,7)
			y=y+1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7)
			p=p+p*dy;
		}
		x=x+1;
		delay(100);
	}
	closegroup();
}

int main()
{
	int gd=DETECT, gm;
	int x1=55, x2=355, y1=60, y2=360;
	drawline(x1,x2,y1,y2);
	return 0;
}