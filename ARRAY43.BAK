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
    /*	for(i=0;i<n;i++)
	{
		printf ("\na[%d]=%d",i,a[i]);

	}  */
	pos=n;
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