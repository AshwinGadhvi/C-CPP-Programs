#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf ("how many number");
	scanf ("%d",&n);
	for (i=1;i<=n;i+=2)
	{
		printf ("%d",i);
	}
	getch();
}