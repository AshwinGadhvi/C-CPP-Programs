#include<stdio.h>
#include<conio.h>

void main()
{
	int area,side;
	clrscr();
	printf ("enter the value of a side");
	scanf ("%d",&side);
	area=side*side;
	printf ("area is %d",area);
	getch();
}