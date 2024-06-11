#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,fact,j;
	clrscr();
	printf ("enter the number");
	scanf ("%d",&n);
	printf ("prime number are:\n");
	for(i=1;i<=n;i++)
	{
		fact=0;
		for (j=1;j<=n;j++)
		{
			if (i%j==0)
			{
				fact++;
			}
		}
		if(fact==2)
		printf ("%d",i);
	}
	getch();
}
