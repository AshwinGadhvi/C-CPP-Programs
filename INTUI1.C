#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20],i,n;
	clrscr();
	printf ("Enter numbers::");
	scanf ("%d",&n);
	printf ("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf ("%d\n",a[i]);
	}
	getch();
}