#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,sum=0,n;
	clrscr();
	printf ("how many number");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
	       //  sum+=i;
		printf ("\ni is %d",i);
		if (i%2==0)
		{
			sum+=i;
		}
	}
		printf ("\nsum is %d",sum);
	getch();
}