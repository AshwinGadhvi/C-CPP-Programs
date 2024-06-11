#include<stdio.h>
#include<conio.h>

void main()
{
	int days,year,month;
	clrscr();
	printf ("enter the days");
	scanf ("%d",&days);
	year=days/365;
	month=days/12;
	days=days-((year*365)+(month*12));
	printf ("\nyear is %d",year);
	printf ("\nmonth is %d",month);
	printf ("\ndays is %d",days);
	getch();
}