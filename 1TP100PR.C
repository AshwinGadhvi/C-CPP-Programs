#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,n;
	clrscr();
	printf ("enter the value of i");
	scanf ("%d",&n);

	ashwin:

		printf ("i=%d\n \n \n \n",i);
		i=i+1;
		if (i<=n)
		goto ashwin;

	getch();
}