
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a[10][10],rows,cols,max;
	clrscr();
	printf ("how many rows::");
	scanf ("%d",&rows);
	printf ("how many cols::");
	scanf ("%d",&cols);
	printf ("Enter two D array /elements \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf ("a[%d][%d]",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("\n 2 D array \elements::\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf (" %d ",a[i][j]);
		}
		printf ("\n");
	}

	for(i=0;i<rows;i++)
	{
		max=a[i][0];
		for(j=0;j<cols;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
		printf ("\n");
	}
	printf ("\n row %d max is %d",i,max);
	getch();

}