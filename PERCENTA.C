#include<stdio.h>
#include<conio.h>

void main()
{
	int per;
	clrscr();
	printf ("enter the per");
	scanf ("%d",&per);
	if (per>80)
	{
		printf ("pass with disticusion");
	}
	else if ((per>60) && (per<80))
	{
		printf ("pass with 1 class");
	}
	else if ((per>45) && (per<60))
	{
		printf ("pass with 2 class");
	}
	else if (per<45)
	{
		printf ("pass");
	}
	getch();
}