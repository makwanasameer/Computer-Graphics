/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void any(void);
void mid_point(void);
void set_point(int,int);
void enter_coordinates(void);

int mix,miy,mx,my,nx,ny,ox,oy;
int main()
{
clrscr();
  int i,nx1,ny1,nx2,ny2;
 int gdriver = DETECT, gmode, errorcode;
int xmax, ymax;

/* initialize graphics and local variables */
initgraph(&gdriver, &gmode, "");
mx=getmaxx();
my=getmaxy();
printf("maximum x = %d ",mx);
printf("maximum y = %d ",my);
//line(0,0,200,200);


mid_point();

printf("\nenter coordinates for 1st point :: \n");

enter_coordinates();

set_point(ox,oy);
nx1=nx;
ny1=ny;

printf("\n\nenter coordinates for 2nd point :: \n");
enter_coordinates();

set_point(ox,oy);
 nx2=nx;
ny2=ny;

clrscr();

line(0,miy,mx,miy);
line(mix,0,mix,my);


for(i=0;i<mix;i=i+25)
{
line(mix+i,miy+3,mix+i,miy-3);
line(mix+5,miy+i,mix-5,miy+i);
line(mix-i,miy+3,mix-i,miy-3);
line(mix+3,miy-i,mix-3,miy-i);
}

line(nx1,ny1,nx2,ny2);

getch();
}




void mid_point(void)
{
//mx=getmaxx();
//my=getmaxy();
mix=mx/2;
miy=my/2;

}

void enter_coordinates(void)
{

printf("\nenter X cordinate : ");
scanf("%d",&ox);
printf("\nenter Y cordinate\n");
scanf("%d",&oy);
//return(ox,oy);
}

void set_point(int m,int n)
{
nx=mix+m;
ny=miy-n;
putpixel(nx,ny,RED);

}