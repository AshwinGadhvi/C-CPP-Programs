#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf ("enter the n");
	scanf ("%d",&n);
	if (n%2==0)
	{
		printf ("number is even");
	}
	else
	{
		printf ("number is odd");
	}
	getch();
}