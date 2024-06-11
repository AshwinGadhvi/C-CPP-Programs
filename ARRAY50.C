#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],n,find,flag=0;
	clrscr();
	printf ("Hoe many Elements");
	scanf("%d",&n);
	printf ("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf ("enter elements to find");
	scanf("%d",&find);
	for(i=0;i<n;i++)
	{
		if(a[i]==find)
		{
			flag=1;
			printf ("number is found at %d location",i);
			break;
		}
	}
	if(flag==0)
	{
		printf ("number not found");
	}
	getch();
}