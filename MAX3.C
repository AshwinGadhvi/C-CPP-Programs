#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,max;
	clrscr();
	printf ("enter a value of \na\nb\nc");
	scanf ("%d%d%d",&a,&b,&c);
	if ((a>b && a>c))
	{
		printf ("a is max");
	}
	else if (b>c)
	{
		printf ("b is max");
	}
	else
	{
		printf ("c is max");
	}
	getch();
}