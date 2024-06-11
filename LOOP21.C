#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	scanf ("%d",&n);
	for (i=10;i>=n;i--)
	{
		printf ("%d\n",i);
	}
	getch();
}