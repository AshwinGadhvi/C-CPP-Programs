#include<stdio.h>
#include<conio.h>

void main()
{
	int i,array[6],sum=0;
	clrscr();
	printf ("enter the elements of array");
	for(i=0;i<array[6];i++)
	{
		printf ("array[%d]=",i);
		scanf("%d",array[i]);
		sum+=array[i];
	}
	printf ("sum is %d",sum);
	getch();
}