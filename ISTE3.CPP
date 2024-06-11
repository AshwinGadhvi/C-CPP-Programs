#include<iostream.h>
#include<conio.h>

void main()
{
	int i=0,a[20],sum=0,num;
	clrscr();
	printf("Enter Number : ");
	scanf("%d",&num);
	printf("\nEnter %d number : ",num);
	for(i=0;i<num;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",a[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("a[%d] : ",a[i]);
		printf("\n");
	}
	getch();
}