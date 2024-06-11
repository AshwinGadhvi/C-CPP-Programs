#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],b[10],c[100],i,n;
	clrscr();
	printf ("enter elements");
	scanf("%d",&n);
	printf ("enter %d element\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf ("b[%d]=",i);
		scanf("%d",b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf ("sum of two array is %d",c[i]);
	}


	getch();
}
