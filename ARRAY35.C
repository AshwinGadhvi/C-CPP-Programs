#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,sum=0;
	clrscr();
	printf ("enter the elements of");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	{
		sum+=a[i];
	}
	printf ("sum is %d",sum);
	getch();
}