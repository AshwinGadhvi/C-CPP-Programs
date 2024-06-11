#include<stdio.h>
#include<conio.h>

void main()
{
	int p;
	clrscr();
	printf ("enter the value of p");
	scanf ("%c",&p);
	if (p>=80)
	{
		printf ("pass with disticution");
	}
	else if ((p>60) && (p<80))
	{
		printf ("pass with 1st class");
	}
	else if ((p>45) && (p<60))
	{
		printf ("pass with 2nd class");
	}
	else if ((p>35) && (p<45))
	{
		printf ("pass");
	}
	else
	{
		printf ("fail");
	}
	getch();
}