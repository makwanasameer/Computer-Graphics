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
#include<dos.h>
int x(int a)
{
	return((639/2)+a);
}
int y(int b)
{
	return((479/2)-b);
}
int kkk;
void main()
{
	union REGS regs;
	regs.x.ax=1;


	int gd=DETECT,gm;
	void sam_ellipse(long int ,long int ,long int ,long int);
	void sam_color(int x,int y,int col,int bound);
	void plot(int,int,const RED);
	initgraph(&gd,&gm,"c:\\borlandc\\bgi");
	int86(0x33,&regs,&regs);
	int maxx=getmaxx();
	int maxy=getmaxy();
	setcolor(2);
	line(x(0),y(maxy/2),x(0),y(-1*maxy));
	line(x(-1*(maxx/2)),y(0),x(maxx/2),y(0));
	setcolor(3);
	line(x(-30),y(-30),x(30),y(-30));
	setcolor(1);
	line(x(-30),y(-30),x(0),y(30));
	setcolor(1);
	line(x(0),y(30),x(30),y(-30));
  //	rectangle(x(-50),y(50),x(1),y(-1));
	sam_color(x(1),y(1),6,3);
	sam_color(x(-1),y(-1),7,3);
	sam_color(x(-1),y(+1),8,3);
	sam_color(x(+1),y(-1),1,3);
	kkk=getpixel(maxx,maxy);
	getch();
}
void sam_color(int x,int y,int col,int bound)
{       delay(3);
	int curr=getpixel(x,y);
	if(col!=curr&&curr==kkk)
	{       putpixel(x,y,col);
		sam_color(x+1,y,col,bound);
		sam_color(x,y+1,col,bound);
		sam_color(x-1,y,col,bound);
		sam_color(x,y-1,col,bound);
	}
}