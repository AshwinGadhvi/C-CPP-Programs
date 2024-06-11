#include<stdio.h>
#include<conio.h>

void main()
{
	int i,pos,val,a[20],n;
	clrscr();
	printf ("Enter number to store in array::");
	scanf ("%d",&n);
	printf ("Enter %d elements::",n);
	for(i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("enter pos::");
	scanf ("%d",&pos);
	printf ("enter value::");
	scanf ("%d",&val);
	for(i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n++;
	printf ("after insert array::");
	for(i=0;i<n;i++)
	{
		printf ("%d\n",a[i]);
	}
	getch();
}