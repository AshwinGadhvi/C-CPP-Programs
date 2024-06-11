#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],n,pos;
	clrscr();
	printf ("Enter Array Size:-");
	scanf ("%d",&n);
	printf ("Enter %d Elements\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf ("enter pos");
	scanf("%d",&pos);
	for(i=pos+1;i<=n-1;i++)
	{
		a[i-1]=a[i];
	}
	n--;

	pos=pos-1;
	for(i=pos+1;i<=n-1;i++)
	{
		a[i-1]=a[i];
	}
	n--;
	pos=pos;
	for(i=pos+1;i<=n-1;i++)
	{
		a[i-1]=a[i];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf ("\na[%d]=%d",i,a[i]);

	}
	getch();
}