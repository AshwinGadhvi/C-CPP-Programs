#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,sum=0,n;
	clrscr();
	printf ("enter the value of n");
	scanf ("%d",&n);
	goto ashwin;
	sum=sum+i;
	i=i+1;
	if (i<=n)
	ashwin:

	printf ("i=%d",i);
	getch();
}
