#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a[10][10],b[10][10],rows,cols,rows1,cols1,c[100][100];
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
	printf ("how many rows::");
	scanf ("%d",&rows1);
	printf ("how many cols::");
	scanf ("%d",&cols1);
	printf ("Enter two D array /elements \n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols1;j++)
		{
			printf ("b[%d][%d]",i,j);
			scanf ("%d",&b[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf ("%d",c[i][j]);

		}
		printf("\n");

	}
  /*	printf ("\n 2 D array \elements::\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf ("%d",a[i][j]);
		}
		printf ("\n");
	}      */
	getch();
}