#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m,flag;
	clrscr();
	printf ("enter the value of n");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if (n%i==0)
		{
			flag=1;
			printf ("\033[0;31m");
			printf ("number is composite");
			break;
		}
	}
	if(flag==0)
	{
		printf ("\033[0;32m");
		printf ("number is prime");
	}
	getch();
}
