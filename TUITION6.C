#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,pos,a[10];
	clrscr();
	printf ("enter elements::");
	scanf ("%d",&n);
	printf ("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
	printf ("enter pos::");
	scanf ("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=%d\n",i,a[i]);
	}
	getch();
}