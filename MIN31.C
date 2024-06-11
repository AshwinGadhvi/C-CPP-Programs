#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,min;
	clrscr();
	printf ("enter the value of a b c");
	scanf ("%d%d%d",&a,&b,&c);
	if ((a<b && a<c))
	{
		printf ("a is min");
	}
	else if (b<c)
	{
		printf ("b is min");
	}
	else
	{
		printf ("c is min");
	}
	getch();
}