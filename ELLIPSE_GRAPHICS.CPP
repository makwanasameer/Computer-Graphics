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
long int xc;
long int yc;
long int rx;
long int ry;
int x(int a)
{
	return((639/2)+a);
}
int y(int b)
{
	return((479/2)-b);
}
void color_ellipse(long int ,long int ,long int l,long int m);
void main()
{
	int gd=DETECT,gm;
	void sam_ellipse(long int ,long int ,long int ,long int);
	void plot(int,int,const RED);
	initgraph(&gd,&gm,"c:\\borlandc\\bgi");
	int maxx=getmaxx();
	int maxy=getmaxy();
	setcolor(2);
	line(x(0),y(maxy/2),x(0),y(-1*maxy));
	line(x(-1*(maxx/2)),y(0),x(maxx/2),y(0));
	long int x1,y1,x2;
	rectangle(1,1,maxx-1,maxy-1);
	cout<<"Enter the  x center:";
	cin>>xc;
	cout<<"Enter the y center:";
	cin>>yc;
	cout<<"Enter the x-radius:";
	cin>>rx;
	cout<<"Enter the y-radius:";
	cin>>ry;
	yc=(yc)*(-1);
	sam_ellipse(xc,yc,rx,ry);
	getch();
}
void sam_ellipse(long int xc,long int yc,long int rx,long int ry)
{
	long int l=0;
	long int m=ry;
	long int p1;
	p1=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
	while((l*ry*ry)<=(m*(rx*rx)))
	{       l++;
		if(p1<0)
		{
			p1=p1+(2*(ry*ry)*l)+(ry*ry);
			color_ellipse(xc,yc,x(l),y(m));
			color_ellipse(xc,yc,x(-l),y(-m));
			color_ellipse(xc,yc,x(+l),y(-m));
			color_ellipse(xc,yc,x(-l),y(+m));
		}
		else
		{       m--;
			p1=p1+(2*ry*ry*l)-(2*rx*rx*m)+(ry*ry);
			color_ellipse(xc,yc,x(l),y(m));
			color_ellipse(xc,yc,x(-l),y(-m));
			color_ellipse(xc,yc,x(+l),y(-m));
			color_ellipse(xc,yc,x(-l),y(+m));
		}
	}
	long int p2;
	p2=(ry*ry*(l+(1/2)))+((rx*rx*(m-1)*(m-1))-(rx*rx*ry*ry));
	while(m>=0)
	{       m--;
		if(p2>0)
		{
			p2=p2-(2*(rx*rx)*m)+(rx*rx);
			color_ellipse(xc,yc,x(l),y(m));
			color_ellipse(xc,yc,x(-l),y(-m));
			color_ellipse(xc,yc,x(+l),y(-m));
			color_ellipse(xc,yc,x(-l),y(+m));
		}
		else
		{
			l++;
			p2=p2+(2*ry*ry*l)-(2*rx*rx*m)+(rx*rx);
			color_ellipse(xc,yc,x(l),y(m));
			color_ellipse(xc,yc,x(-l),y(-m));
			color_ellipse(xc,yc,x(+l),y(-m));
			color_ellipse(xc,yc,x(-l),y(+m));
		}
	}
}
void color_ellipse(long int xc,long int yc,long int l,long int m)
{
	putpixel(xc+l,yc+m,RED);
	putpixel(xc-l,yc+m,RED);
	putpixel(xc+l,yc-m,RED);
	putpixel(xc-l,yc-m,RED);
}

