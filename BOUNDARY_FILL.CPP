/*
Author: Sameer Makwana
Licence: GPLv3
*/
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
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
	void sam_ellipse(long int ,long int ,long int ,long int);
	void sam_color(int x,int y,int col,int bound);
	void plot(int,int,const RED);
	initgraph(&gd,&gm,"c:\\borlandc\\bgi");
	int maxx=getmaxx();
	int maxy=getmaxy();
	setcolor(2);
	line(x(0),y(maxy/2),x(0),y(-1*maxy));
	line(x(-1*(maxx/2)),y(0),x(maxx/2),y(0));
	setcolor(3);
	circle(x(0),y(0),30);
	sam_color(x(5),y(5),6,3);

	getch();
}
void sam_color(int x,int y,int col,int bound)
{       delay(3);
	int boundary=getpixel(x,y);
	if(col!=boundary&&bound!=boundary)
	{       putpixel(x,y,col);
		sam_color(x+1,y,col,bound);
		sam_color(x,y+1,col,bound);
		sam_color(x-1,y,col,bound);
		sam_color(x,y-1,col,bound);
	}
}