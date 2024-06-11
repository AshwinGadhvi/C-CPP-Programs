#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a[10],find,flag=0;
	clrscr();
	printf ("Enter value of n number");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf ("enter element to find");
	scanf("%d",&find);
	for(i=0;i<n;i++)
	{
		if (a[i]==find)
		{
			flag=1;
			printf ("\n elements is found at a[%d] location",i);
			break;
		}
	}
	if(flag==0)
	{
		printf ("element not found");
	}
	getch();
}