#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m=0,flag=0;
	clrscr();
	printf ("enter a number to check a prime or not");
	scanf ("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if (n%i==0)
		{
			printf ("number is not prime");
			flag=1;
			break;
		}
	}
	{
		if(flag==0)
		printf ("number is prime");
	}
	getch();
}
