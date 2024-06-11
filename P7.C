#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,n,sum;
	clrscr();
	printf ("how many numbers");
	scanf ("%d",&n);
	for (i=0;i<=n;i+=2)
	{
		sum+=i;
		printf ("\n %d",i);
	}
	getch();

}