#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10],i,r,c,j;
	clrscr();
	printf ("enter row::");
	scanf ("%d",&r);
	printf ("Enter col::");
	scanf ("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	printf("2-D array::\n::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf ("%d",a[i][j]);
		}
		printf ("\n");
	}
	getch();
}
