#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sum=0,array[6];
	clrscr();
	printf ("enter the elements of array");
	for(i=1;i<=6;i++)
	{
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	printf("sum=%d",sum);
	getch();
}