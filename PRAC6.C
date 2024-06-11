#include<stdio.h>
#include<conio.h>

void main()
{
	int per;
	clrscr();
	printf ("enter the per");
	scanf("%d",&per);
	if ((per>80 && per<100))
	{
		printf ("pass with disticution");
	}
	else if ((per>60 && per<80))
	{
		printf ("pass with first class");
	}
	else if ((per>40 && per<60))
	{
		printf ("pass with seecond class");
	}
	else if ((per>0 && per<40))
	{
		printf ("fail");
	}
	printf ("%d is grade",per);
	getch();
}