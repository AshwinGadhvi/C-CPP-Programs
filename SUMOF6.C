#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[6],sum=o;
	clrscr();
	printf ("enter the elements of array");
	for(i=0;i<6;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",a[i]);
	}
	for(i=0;i<6;i++)
	{
		sum+=a[i];
	}
	printf ("\nsum is %d",sum);
	getch();
}