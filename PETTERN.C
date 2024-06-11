#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	printf ("enter the row");
	scanf ("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf ("%d",(j*j)+1);
		}
		printf ("\n");
	}
	getch();
}