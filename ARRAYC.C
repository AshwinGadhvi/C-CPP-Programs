#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20],i,n;
	clrscr();
	printf ("Enter array elements::");
	scanf ("%d",&n);
	printf ("enter %d element::\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf ("%d",a[i]);
	}
	getch();
}
