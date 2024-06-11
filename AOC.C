#include<stdio.h>
#include<conio.h>

#define pie 3.14

void main()
{
	float r,area;
	clrscr();
	printf ("enter the value of r");
	scanf ("%f",&r);
	area=pie*r*r;
	printf ("\n area of circle is %f",area);
	getch();
}