#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf ("how many numbers");
	scanf ("%d",&n);
	for (i=0;i<=n;i+=2)
	{
	printf ("%d",i);
	}
	getch();
}