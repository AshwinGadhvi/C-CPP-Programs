#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10];
	clrscr();
	printf ("enter the number");
	for(i=1;i<10;i++)
	{
		printf ("array[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf ("even nmber are \n%d",a[i]);
		}
	}
	getch();
}