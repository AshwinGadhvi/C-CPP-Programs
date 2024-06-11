#include<stdio.h>
#include<conio.h>

void main()
{
	int l,b,h,volume;
	clrscr();
	printf ("enter the value of l b h");
	scanf ("%d%d%d",&l,&b,&h);
	volume=l*b*h;
	printf ("volume of cuboid is %d",volume);
	getch();
}