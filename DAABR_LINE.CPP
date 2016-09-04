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
	void sameer_line(int x1,int y1,int x2,int y2);
	initgraph(&gd,&gm,"c:\\borlandc\\bgi");
	int maxx=getmaxx();
	int maxy=getmaxy();
	setcolor(2);
	line(x(0),y(maxy/2),x(0),y(-1*maxy));
	line(x(-1*(maxx/2)),y(0),x(maxx/2),y(0));
	int x1,y1,x2,y2;
	rectangle(1,1,maxx-1,maxy-1);
	cout<<"Enter x1 ::";
	cin>>x1;
	cout<<"Enter y1 ::";
	cin>>y1;
	cout<<"Enter x2 ::";
	cin>>x2;
	cout<<"Enter y2 ::";
	cin>>y2;
	sameer_line(x(x1),y(y1),x(x2),y(y2));
	getch();
	closegraph();
}
void sameer_line(int x1,int y1,int x2,int y2)
{
	int dx=abs(x1-x2),dy=abs(y1-y2);
	int p=(2*dy)-dx;
	int k=2*dy;
	int l=2*(dy-dx);
	int x,y,xend;

	if(x1>x2)
	{
		x=x2;
		y=y2;
		xend=x1;
	}
	else
	{
		x=x1;
		y=y1;
		xend=x2;
	}
	putpixel(x,y,YELLOW);

	while(x<=xend)
	{
		x++;
		if(p<0)
		{
			p+=k;


		}
		else
		{
			y--;
			p+=l;
		}
		putpixel(x,y,YELLOW);
	}
}




