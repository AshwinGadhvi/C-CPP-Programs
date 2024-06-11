#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,pos=0,value=2,a[10];
	clrscr();
	printf ("enter elements::");
	scanf ("%d",&n);
	printf ("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
    /*	pos=0;
	value=1;*/
	for(i=n;i>pos;i--)
	{
		a[i-1]=a[i];
	}
	a[pos]=value;
	n++;
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=%d\n",i,a[i]);
	}
	getch();
}