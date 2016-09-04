/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<graphics.h>
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
	void sameer_line(float x1,float y1,float x2,float y2);
	initgraph(&gd,&gm,"c:\\borlandc\\bgi");
	int maxx=getmaxx();
	int maxy=getmaxy();
	setcolor(2);
	line(x(0),y(maxy/2),x(0),y(-1*maxy));
	line(x(-1*(maxx/2)),y(0),x(maxx/2),y(0));
	int x1,y1,x2,y2;

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
void sameer_line(float x1,float y1,float x2,float y2)
{
	float dy=y2-y1;
	float dx=x2-x1;
     //	if(dy<0)dy=-dy;
    //	if(dx<0)dx=-dx;
	float step;

	if(abs(dx)>abs(dy))
	{
		step=abs(dx);
	}
	else
	{
		step=abs(dy);
	}
	float xin=dx/step;
	float yin=dy/step;
	for(int i=0;i<step;i++)
	{
		x1=x1+xin;
		y1=y1+yin;
		putpixel((x1),(y1),GREEN);
	}



}
