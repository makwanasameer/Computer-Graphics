
/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
int xc;
int yc;
int x(int a)
{
	return((639/2)+a);
}
int y(int b)
{
	return((479/2)-b);
}

void main()
{
	int gd=DETECT,gm;
	void sam_circle(int x,int y,int r);
	initgraph(&gd,&gm,"c:\\borlandc\\bgi");
	int maxx=getmaxx();
	int maxy=getmaxy();
	setcolor(2);
	line(x(0),y(maxy/2),x(0),y(-1*maxy));
	line(x(-1*(maxx/2)),y(0),x(maxx/2),y(0));
	int x1,y1,x2;
	rectangle(1,1,maxx-1,maxy-1);
	cout<<"Enter the  x center:";
	cin>>xc;
	cout<<"Enter the y center:";
	cin>>yc;
	cout<<"Enter the radius:";
        int r;
        cin>>r;
	yc=(yc)*(-1);
	sam_circle(0,r,r);
	getch();
}
void sam_circle(int xv,int yv,int r)
{
	int p=(1)-r;
		putpixel(xc+x(xv),yc+y(yv),RED);
	while(xv<=yv)
	{       xv++;
		if(p<0)
		{
			p=p+2*(xv)+1;
			putpixel(xc+x(xv),yc+y(yv),RED);
			putpixel(xc+x(-xv),yc+y(-yv),RED);
			putpixel(xc+x(xv),yc+(-yv),RED);
			putpixel(xc+x(-xv),yc+y(yv),RED);
			putpixel(xc+x(yv),yc+y(xv),RED);
			putpixel(xc+x(-yv),yc+y(-xv),RED);
			putpixel(xc+x(yv),yc+y(-xv),RED);
			putpixel(xc+x(-yv),yc+y(xv),RED);

		}
		else
		{       yv--;
			p=p+2*(xv)+1-2*(yv);
			putpixel(xc+x(xv),yc+y(yv),RED);
			putpixel(xc+x(-xv),yc+y(-yv),RED);
			putpixel(xc+x(xv),yc+y(-yv),RED);
			putpixel(xc+x(-xv),yc+y(yv),RED);
			putpixel(xc+x(yv),yc+y(xv),RED);
			putpixel(xc+x(-yv),yc+y(-xv),RED);
			putpixel(xc+x(yv),yc+y(-xv),RED);
			putpixel(xc+x(-yv),yc+y(xv),RED);

		}
	}
}





