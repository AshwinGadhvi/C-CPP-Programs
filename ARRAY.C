#include<stdio.h>
#include<conio.h>

void main()
{
	int a[6],sum=0,i;
	clrscr();
	printf ("enter elementes of array");
	i=1;
	for (i=1;i<=6;i++)
	{
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
		sum+=a[i];
	}
	printf ("sum is %d",sum);
	getch();
}