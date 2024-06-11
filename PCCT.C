#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,sum=0;
	clrscr();
	printf ("enter number");
	scanf ("%d",&n);

	ash:

		sum=sum+(i*i);
		i=i+1;
		if (i<=n)
		goto ash;

		printf ("sum=%d",sum);
		getch();
}