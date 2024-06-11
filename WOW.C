#include<stdio.h>
#include<conio.h>
#include<maths.h>

#define d=(b*b)-4ac

void main()
{
	int a,b,c,d;
	clrscr();
	printf ("enter the value of a b c");
	scanf ("%d%d%d",&a,&b,&c);
	if (d=0)
	{
		printf ("-b/2a");
	}
	else if (d>0)
	{
		printf ("-b-d/2a");
	}
	else
	{
		printf ("root is imagenary");
	}
	getch();
}