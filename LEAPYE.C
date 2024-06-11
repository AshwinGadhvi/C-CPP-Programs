#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	clrscr();
	printf ("enter the year");
	scanf ("%d",&year)
	if ((year%4) || (year%100))
	{
		printf ("year is leap");
	}
	else
	{
		printf ("year is not leap");
	}
	getch();
}
