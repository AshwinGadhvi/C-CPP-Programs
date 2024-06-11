#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i,sum=0;
	float avg;
	clrscr();
	printf ("enter the elements of array\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	{
		sum+=a[i];
	}
	printf ("sum is %d\n",sum);
	avg=sum/10.0;
	printf ("avg is %0.2f",avg);
	getch();
}

