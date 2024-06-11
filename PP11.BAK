#include<stdio.h>
#include<conio.h>

void main()
{
	int a[20],pos,val,i,n;
	clrscr();
	printf("Enter how many Element in array::");
	scanf("%d",&n);
	printf("Enter %d element",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter pos to store in array:");
	scanf("%d",&pos);
	printf("Enter val to store in array:");
	scanf("%d",&val);
	for(i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n++;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}