#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m;
	clrscr();
	printf ("enter the number");
	scanf("%d",&n);
	for(i=1;i<=4;i++)
	{
		for(m=1;m<=i;m++)
		{
			printf("%d",m);
			m+=2;
		}
		printf ("\n");
	}
	getch();
}