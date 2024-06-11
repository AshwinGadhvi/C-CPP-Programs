#include<stdio.h>
#include<conio.h>

void main()
{
	int side,area;
	clrscr();
	printf ("enter the side");
	scanf ("%d",&side);
	area=side*side;
	printf ("area is %d",area);
	getch();
}