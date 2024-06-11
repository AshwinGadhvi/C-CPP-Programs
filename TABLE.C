#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf ("whitch table");
	scanf ("%d",&n);
	for (i=1;i<=10;i++)
	{
		printf ("%2d * %2d=%3d\n",n,i,(n*i));
	}
	getch();
}
